using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace lab_11
{

    public partial class Form1 : Form
    {
            Film[] films =
                {
                new Film("Джокер", "Триллер", "2019", "США", "Тодд Филлипс", "Готэм, начало 1980-х годов. Комик Артур Флек живет с больной матерью, которая с детства учит его «ходить с улыбкой». Пытаясь нести в мир хорошее и дарить людям радость, Артур сталкивается с человеческой жестокостью и постепенно приходит к выводу, что этот мир получит от него не добрую улыбку, а ухмылку злодея Джокера."),
                new Film("Волк с Уолл-стрит", "Драма", "2013", "США", "Мартин Скорсезе", "1987 год. Джордан Белфорт становится брокером в успешном инвестиционном банке. Вскоре банк закрывается после внезапного обвала индекса Доу-Джонса."),
                new Film("The LEGO Movie", "Комедия", "2013", "США", "Крис Миллер","В пластмассовом мире все заняты своими пластмассовыми делами, всё идёт по плану, и для обычного лего-строителя Эммета нет места идеальней - для него в этом мире всё прекрасно. Но однажды ему придётся присоединиться к походу против злого лего-диктатора, планирующего склеить вместе всю лего-вселенную.")
            };    
        public Form1()
        {
            InitializeComponent();
        }

        private void treeView1_AfterSelect(object sender, TreeViewEventArgs e)
        {
            listView1.Items.Clear();
            textBox1.Text = "";
            try
            {
                
                    if (e.Node.Parent.Text == "Жанр")
                {
                    for (int i = 0, cnt = 0; i < 3; i++)
                    {
                        if (films[i].genre == e.Node.Text)
                        {
                            listView1.Items.Add(films[i].name);
                            listView1.Items[cnt].SubItems.Add(films[i].genre);
                            listView1.Items[cnt].SubItems.Add(films[i].data);
                            listView1.Items[cnt].SubItems.Add(films[i].country);
                            listView1.Items[cnt].SubItems.Add(films[i].director);
                            cnt++;
                        }
                    }
                }
                else if (e.Node.Parent.Text == "Дата выхода")
                {
                    for (int i = 0, cnt = 0; i < 3; i++)
                    {
                        if (films[i].data == e.Node.Text)
                        {
                            listView1.Items.Add(films[i].name);
                            listView1.Items[cnt].SubItems.Add(films[i].genre);
                            listView1.Items[cnt].SubItems.Add(films[i].data);
                            listView1.Items[cnt].SubItems.Add(films[i].country);
                            listView1.Items[cnt].SubItems.Add(films[i].director);
                            cnt++;
                        }
                    }
                }
                else if (e.Node.Parent.Text == "Страна")
                {
                    for (int i = 0, cnt = 0; i < 3; i++)
                    {
                        if (films[i].country == e.Node.Text)
                        {
                            listView1.Items.Add(films[i].name);
                            listView1.Items[cnt].SubItems.Add(films[i].genre);
                            listView1.Items[cnt].SubItems.Add(films[i].data);
                            listView1.Items[cnt].SubItems.Add(films[i].country);
                            listView1.Items[cnt].SubItems.Add(films[i].director);
                            cnt++;
                        }
                    }
                }
                else if (e.Node.Parent.Text == "Режиссёр")
                {
                    for (int i = 0, cnt = 0; i < 3; i++)
                    {
                        if (films[i].director == e.Node.Text)
                        {
                            listView1.Items.Add(films[i].name);
                            listView1.Items[cnt].SubItems.Add(films[i].genre);
                            listView1.Items[cnt].SubItems.Add(films[i].data);
                            listView1.Items[cnt].SubItems.Add(films[i].country);
                            listView1.Items[cnt].SubItems.Add(films[i].director);
                            cnt++;
                        }
                    }
                }
            }
            catch
            {
                for (int i = 0, cnt = 0; i < 3; i++)
                {
                    listView1.Items.Add(films[i].name);
                    listView1.Items[cnt].SubItems.Add(films[i].genre);
                    listView1.Items[cnt].SubItems.Add(films[i].data);
                    listView1.Items[cnt].SubItems.Add(films[i].country);
                    listView1.Items[cnt].SubItems.Add(films[i].director);
                    cnt++;
                }
            }
        }

        private void listView1_SelectedIndexChanged(object sender, EventArgs e)
        {
        }
        private void listView1_ItemSelectionChanged (object sender, ListViewItemSelectionChangedEventArgs e)
        {
            for (int i = 0; i < 3; i++)
                if (e.Item.SubItems[0].Text == films[i].name)
                {
                    textBox1.Text = films[i].discription;
                    return;
                }
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
    class Film
    {
        public string name;
        public string genre;
        public string data;
        public string country;
        public string director;
        public string discription;

        public Film(string name, string genre, string data, string country, string director, string discription)
        {
            this.name = name;
            this.genre = genre;
            this.data = data;
            this.country = country;
            this.director = director;
            this.discription = discription;
        }
    };
}
