#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "ElaWindow.h"
class T_Home;
class T_Icon;
class T_ElaScreen;
class T_BaseComponents;
class T_Graphics;
class T_Navigation;
class T_Popup;
class T_Card;
class T_View;
class T_About;
class ElaContentDialog;
class MainWindow : public ElaWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();
    Q_SLOT void onCloseButtonClicked();

    void initWindow();
    void initEdgeLayout();
    void initContent();

private:
    ElaContentDialog* _closeDialog{nullptr};
    T_Home* _homePage{nullptr};
#ifdef Q_OS_WIN
    T_ElaScreen* _elaScreenPage{nullptr};
#endif
    T_Icon* _iconPage{nullptr};
    T_BaseComponents* _baseComponentsPage{nullptr};
    T_Graphics* _graphicsPage{nullptr};
    T_Navigation* _navigationPage{nullptr};
    T_Popup* _popupPage{nullptr};
    T_Card* _cardPage{nullptr};
    T_View* _viewPage{nullptr};
    T_About* _aboutPage{nullptr};
    QString _elaDxgiKey{""};
    QString _aboutKey{""};
    QString _settingKey{""};
};
#endif // MAINWINDOW_H
