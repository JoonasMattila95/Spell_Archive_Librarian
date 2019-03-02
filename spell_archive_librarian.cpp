#include "spell_archive_librarian.h"
#include "ui_spell_archive_librarian.h"

Spell_Archive_Librarian::Spell_Archive_Librarian(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Spell_Archive_Librarian)
{
    ui->setupUi(this);
}

Spell_Archive_Librarian::~Spell_Archive_Librarian()
{
    delete ui;
}
