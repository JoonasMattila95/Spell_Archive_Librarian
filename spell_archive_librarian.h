#ifndef SPELL_ARCHIVE_LIBRARIAN_H
#define SPELL_ARCHIVE_LIBRARIAN_H

#include <QMainWindow>

namespace Ui {
class Spell_Archive_Librarian;
}

class Spell_Archive_Librarian : public QMainWindow
{
    Q_OBJECT

public:
    explicit Spell_Archive_Librarian(QWidget *parent = nullptr);
    ~Spell_Archive_Librarian();

private:
    Ui::Spell_Archive_Librarian *ui;
};

#endif // SPELL_ARCHIVE_LIBRARIAN_H
