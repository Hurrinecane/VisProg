#include "mf.h"

using namespace snake;

int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	mf form;
	Application::Run(% form);

	return 0;
}

void mf::mf_Load(Object^ sender, EventArgs^ e) {
	resize(this, gcnew EventArgs());
	placeApple();
	dir = rnd->Next(3);

	for (int a = 0; a < 3; a++)
		snake->Add(Point(Math::Round(this->ClientRectangle.Width / (2 * stp)) * stp, Math::Round(this->ClientRectangle.Height / (2 * stp)) * stp));

	ldir->Text = ((Directions)dir).ToString();
	Refresh();
}

void mf::paint(Object^ sender, PaintEventArgs^ e) {
	//rendering snake, apple and wall
	Graphics^ g = e->Graphics;
	g->DrawRectangle(gcnew Pen(Color::Black, 12), stp / 2, stp / 2, this->ClientRectangle.Width - stp, this->ClientRectangle.Height - 3 * stp);

	if (game_over) return;
	Color clr = Color::Red;

	for (int a = 0; a < snake->Count; a++) {
		int x = snake[a].X;
		int y = snake[a].Y;

		if (a == 0) clr = Color::Red;
		else clr = Color::Blue;

		pen->Color = clr;

		if (filled) {
			g->FillRectangle(pen->Brush, x, y, step, step);
			g->FillRectangle(iPen->Brush, apple.X, apple.Y, step, step);
		}
		else {
			g->DrawRectangle(pen, x, y, step, step);
			g->DrawRectangle(iPen, apple.X, apple.Y, step, step);
		}
	}
}

void mf::tick(Object^ sender, EventArgs^ e) {
	//mouse mode
	if (mouse) {
		if (path->Count > 0) {
			for (int a = snake->Count - 1; a > 0; a--) {
				snake[a] = snake[a - 1];
			}

			snake[0] = path[0];
			path->RemoveAt(0);
		}
		checkCollision();
		Refresh();
		return;
	}

	//keyboard mode
	if (moves->Count == 0) moves->Add(dir);

	for (int a = snake->Count - 1; a > 0; a--) {
		snake[a] = snake[a - 1];
	}

	Point temp = snake[0];

	switch (moves[0]) {
	case 0: temp.X -= stp;
		break;
	case 1: temp.Y -= stp;
		break;
	case 2: temp.X += stp;
		break;
	case 3: temp.Y += stp;
		break;
	}
	moves->RemoveAt(0);

	snake[0] = temp;
	checkCollision();
	Refresh();
}

void mf::key_up(Object^ sender, KeyEventArgs^ e) {
	//pause or resume game
	if (e->KeyCode == Keys::P) timer1->Enabled = !timer1->Enabled;

	//new game
	if (e->KeyCode == Keys::N) {
		newGame();
	}

	//switch mouse control
	if (e->KeyCode == Keys::M) {
		mouse = !mouse;
		lmouse->Text = mouse.ToString();
	}

	if (e->KeyCode == Keys::F) {
		filled = !filled;
		Refresh();
	}

	//exit function if mouse control is switched ob
	if (mouse) return;

	//changing direction
	int val = e->KeyValue;
	if (val >= 37 && val <= 40)
		if (Math::Abs(dir - val + 37) != 2)
			if (moves->Count < 3) {
				moves->Add(val - 37);
				dir = val - 37;
			}
			else {
				moves->RemoveAt(0);
				moves->Add(val - 37);
				dir = val - 37;
			}

	ldir->Text = ((Directions)dir).ToString();
}

int mf::SmartRandom(int min, int max, int multiplier) {
	//get random number, which is a multiple of 'multiplier'
	int lowBound = (int)Math::Ceiling(min / (double)multiplier);
	int highBound = (int)Math::Floor(max / (double)multiplier);

	return (rnd->Next(highBound - lowBound + 1) + lowBound) * multiplier;
}

void mf::checkCollision() {
	//checking collision with an apple or a wall or a snake
	Point head = snake[0];
	if (apple == head) {
		placeApple();
		vscore += 10;
		if (vspeed < 100)
			vspeed += 5;
		timer1->Interval = 102 - vspeed;

		score->Text = vscore.ToString();
		speed->Text = vspeed.ToString();

		snake->Add(snake[snake->Count - 1]);
	}

	if (snake->LastIndexOf(head) != 0 && !mouse) {
		gameOver();
	}

	if (head.X >= this->ClientRectangle.Width - stp || head.X < stp || head.Y >= this->ClientRectangle.Height - 3 * stp || head.Y < stp) {
		gameOver();
	}
}

void mf::newGame() {
	moves->Clear();
	dir = rnd->Next(3);
	snake->Clear();
	int px = Math::Round(this->ClientRectangle.Width / 24) * stp;
	int py = Math::Round(this->ClientRectangle.Height / (2 * stp)) * stp;
	for (int a = 0; a < 3; a++)
		snake->Add(Point(px, py));

	vscore = 0;
	vspeed = 1;
	timer1->Interval = 102 - vspeed;
	score->Text = "0";
	speed->Text = vspeed.ToString();
	game_over = false;
	placeApple();
	findPath(px, py);
	timer1->Enabled = true;
}

void mf::gameOver() {
	//you lose
	timer1->Enabled = false;
	game_over = true;
	MessageBox::Show("Game over", "Snake", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
}

void mf::placeApple() {
	//place apple to random point
	int w = this->ClientRectangle.Width - 2 * stp;
	int h = this->ClientRectangle.Height - 4 * stp;
	apple = Point(SmartRandom(stp, w, stp), SmartRandom(stp, h, stp));
}

void mf::resize(Object^ sender, EventArgs^ e) {
	//adjustment size of window after resizing
	Rectangle rect = this->ClientRectangle;
	int cw = Math::Round(rect.Width / stp) * stp;
	int ch = (Math::Round(22 + rect.Height / stp) - 22) * stp;

	cwidth->Text = cw.ToString();
	cheight->Text = ch.ToString();

	this->ClientSize = Drawing::Size(cw, ch);
}

void mf::resize_ref(Object^ sender, EventArgs^ e) {
	//redraw all elemnts during window resizing
	Refresh();
}

void mf::mouse_move(Object^ sender, MouseEventArgs^ e) {
	findPath(e->Location.X, e->Location.Y);
}

void mf::findPath(int x, int y) {
	//algorithm of finding path from snake's head to mouse point
	if (!mouse) return;

	path->Clear();
	Point final_destination = Point(Math::Round(x / 12) * 12, Math::Round(y / 12) * 12);
	Point start = snake[0];

	if (final_destination == start) return;

	int w = Math::Abs(final_destination.X - start.X);
	int h = Math::Abs(final_destination.Y - start.Y);

	int signx = 0;
	int signy = 0;

	if (final_destination.X - start.X > 0) signx = 1;
	else signx = -1;
	if (final_destination.Y - start.Y > 0) signy = -1;
	else signy = 1;

	Point p;
	if (w > h)
		p = Point(start.X + 12 * signx, start.Y);
	else
		p = Point(start.X, start.Y - 12 * signy);

	path->Add(p);

	while (p != final_destination) {
		if (w == h) {
			//##########
			int w1 = Math::Abs(final_destination.X - p.X);
			int h1 = Math::Abs(final_destination.Y - p.Y);

			if (w1 == h1) {
				p.Y -= 12 * signy;
				path->Add(p);
			}
			else {
				p.X += 12 * signx;
				path->Add(p);
			}
			//##########
		}
		else {
			//##########
			if (p.X == final_destination.X) {
				p.Y -= 12 * signy;
				path->Add(p);
			}
			else if (p.Y == final_destination.Y) {
				p.X += 12 * signx;
				path->Add(p);
			}
			else if (Math::Abs(p.X - final_destination.X) == Math::Abs(p.Y - final_destination.Y)) {
				if (w > h)
					p.Y -= 12 * signy;
				else
					p.X += 12 * signx;

				path->Add(p);
			}
			else {
				if (w > h)
					p.X += 12 * signx;
				else
					p.Y -= 12 * signy;

				path->Add(p);
			}
			//##########
		}
	}
}