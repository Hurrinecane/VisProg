namespace lab_11
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.TreeNode treeNode1 = new System.Windows.Forms.TreeNode("Комедия");
            System.Windows.Forms.TreeNode treeNode2 = new System.Windows.Forms.TreeNode("Драма");
            System.Windows.Forms.TreeNode treeNode3 = new System.Windows.Forms.TreeNode("Триллер");
            System.Windows.Forms.TreeNode treeNode4 = new System.Windows.Forms.TreeNode("Жанр", new System.Windows.Forms.TreeNode[] {
            treeNode1,
            treeNode2,
            treeNode3});
            System.Windows.Forms.TreeNode treeNode5 = new System.Windows.Forms.TreeNode("2019");
            System.Windows.Forms.TreeNode treeNode6 = new System.Windows.Forms.TreeNode("2013");
            System.Windows.Forms.TreeNode treeNode7 = new System.Windows.Forms.TreeNode("Дата выхода", new System.Windows.Forms.TreeNode[] {
            treeNode5,
            treeNode6});
            System.Windows.Forms.TreeNode treeNode8 = new System.Windows.Forms.TreeNode("США");
            System.Windows.Forms.TreeNode treeNode9 = new System.Windows.Forms.TreeNode("Страна", new System.Windows.Forms.TreeNode[] {
            treeNode8});
            System.Windows.Forms.TreeNode treeNode10 = new System.Windows.Forms.TreeNode("Крис Миллер");
            System.Windows.Forms.TreeNode treeNode11 = new System.Windows.Forms.TreeNode("Тодд Филлипс");
            System.Windows.Forms.TreeNode treeNode12 = new System.Windows.Forms.TreeNode("Режиссёр", new System.Windows.Forms.TreeNode[] {
            treeNode10,
            treeNode11});
            this.Films = new System.Windows.Forms.TreeView();
            this.listView1 = new System.Windows.Forms.ListView();
            this.Name_columnHeader = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.Genre_columnHeader = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.Data_columnHeader = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.Country_columnHeader = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.Director_columnHeader = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // Films
            // 
            this.Films.Location = new System.Drawing.Point(12, 12);
            this.Films.Name = "Films";
            treeNode1.Name = "Comedy";
            treeNode1.Text = "Комедия";
            treeNode2.Name = "Drama";
            treeNode2.Text = "Драма";
            treeNode3.Name = "Triller";
            treeNode3.Text = "Триллер";
            treeNode4.Name = "Genre_Node";
            treeNode4.Text = "Жанр";
            treeNode5.Name = "New_Node";
            treeNode5.Text = "2019";
            treeNode6.Name = "Classic_Node";
            treeNode6.Text = "2013";
            treeNode7.Name = "Data_Node";
            treeNode7.Text = "Дата выхода";
            treeNode8.Name = "USA_Node";
            treeNode8.Text = "США";
            treeNode9.Name = "Country_Node";
            treeNode9.Text = "Страна";
            treeNode10.Name = "Chris_Pratt_Node";
            treeNode10.Text = "Крис Миллер";
            treeNode11.Name = "Ibragim_Node";
            treeNode11.Text = "Тодд Филлипс";
            treeNode12.Name = "Director_Node";
            treeNode12.Text = "Режиссёр";
            this.Films.Nodes.AddRange(new System.Windows.Forms.TreeNode[] {
            treeNode4,
            treeNode7,
            treeNode9,
            treeNode12});
            this.Films.Size = new System.Drawing.Size(172, 221);
            this.Films.TabIndex = 0;
            this.Films.AfterSelect += new System.Windows.Forms.TreeViewEventHandler(this.treeView1_AfterSelect);
            // 
            // listView1
            // 
            this.listView1.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
            this.Name_columnHeader,
            this.Genre_columnHeader,
            this.Data_columnHeader,
            this.Country_columnHeader,
            this.Director_columnHeader});
            this.listView1.HideSelection = false;
            this.listView1.Location = new System.Drawing.Point(190, 12);
            this.listView1.Name = "listView1";
            this.listView1.Size = new System.Drawing.Size(404, 221);
            this.listView1.TabIndex = 1;
            this.listView1.UseCompatibleStateImageBehavior = false;
            this.listView1.View = System.Windows.Forms.View.Details;
            this.listView1.ItemSelectionChanged += new System.Windows.Forms.ListViewItemSelectionChangedEventHandler(this.listView1_ItemSelectionChanged);
            this.listView1.SelectedIndexChanged += new System.EventHandler(this.listView1_SelectedIndexChanged);
            // 
            // Name_columnHeader
            // 
            this.Name_columnHeader.Text = "Название";
            this.Name_columnHeader.Width = 65;
            // 
            // Genre_columnHeader
            // 
            this.Genre_columnHeader.Text = "Жанр";
            // 
            // Data_columnHeader
            // 
            this.Data_columnHeader.Text = "Дата выхода";
            this.Data_columnHeader.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.Data_columnHeader.Width = 80;
            // 
            // Country_columnHeader
            // 
            this.Country_columnHeader.Text = "Страна";
            this.Country_columnHeader.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // Director_columnHeader
            // 
            this.Director_columnHeader.Text = "Режиссёр";
            this.Director_columnHeader.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.Director_columnHeader.Width = 130;
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(12, 239);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(582, 57);
            this.textBox1.TabIndex = 2;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(604, 308);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.listView1);
            this.Controls.Add(this.Films);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TreeView Films;
        private System.Windows.Forms.ListView listView1;
        private System.Windows.Forms.ColumnHeader Genre_columnHeader;
        private System.Windows.Forms.ColumnHeader Data_columnHeader;
        private System.Windows.Forms.ColumnHeader Country_columnHeader;
        private System.Windows.Forms.ColumnHeader Director_columnHeader;
        private System.Windows.Forms.ColumnHeader Name_columnHeader;
        private System.Windows.Forms.TextBox textBox1;
    }
}

