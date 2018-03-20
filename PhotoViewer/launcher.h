/**
 * @brief This is the class to start all program and other modules.
 * 
 * @file launcher.h
 * @author aleklnx
 * @date 2018-03-19
 */

#ifndef LAUNCHER_H
#define LAUNCHER_H
#include <QMainWindow>
#include <QListWidgetItem>
#include "structures/Lists/SimpleList.h"
#include "MemoryManager/MemoryManager.h"
#include "MemoryViewer.h"

namespace Ui {
class Launcher;
}

class MemoryViewer;

class Launcher : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Construct a new Launcher object
     * 
     * @param parent Is a pointer used by Qt.
     */
    explicit Launcher(QWidget *parent = 0);
    /**
     * @brief Destroy the Launcher object
     * 
     */
    ~Launcher();

private slots:
    /**
     * @brief This change the directory to get images.
     * 
     */
    void on_action_ChangeDir_triggered();
    /**
     * @brief This close the program.
     * 
     */
    void on_action_Exit_triggered();
    /**
     * @brief This show the image selected in the GUI.
     * 
     * @param currentRow The index of element selected.
     */
    void on_list_imgs_currentRowChanged(int currentRow);

private:

    Ui::Launcher *ui;
    QString dir;
    SimpleList * photos;
    MemoryManager * menMan;
    MemoryViewer * monitor;


};

#endif // LAUNCHER_H
