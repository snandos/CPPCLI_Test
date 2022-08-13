using CPPCLITestLibrary;
using System.Windows;

namespace CPPCLI_Test.App
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

            CPPClass instance = new CPPClass(4242);
            this.Result.Text = instance.GetValue().ToString();
        }
    }
}
