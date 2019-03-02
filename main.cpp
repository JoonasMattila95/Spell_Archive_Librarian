#include "spell_archive_librarian.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Spell_Archive_Librarian w;
    w.show();

    return a.exec();
}
