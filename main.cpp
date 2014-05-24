#include"mainmenu.h"

using namespace View;

int main(int argc, char* argv[])
{
    QApplication app(argc,argv);
    Settings* settings = new Settings();
    MainMenu menu(settings);
    menu.show();
    return app.exec();
}
