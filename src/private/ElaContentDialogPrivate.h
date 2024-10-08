#ifndef ELACONTENTDIALOGPRIVATE_H
#define ELACONTENTDIALOGPRIVATE_H

#include <QObject>

#include "Def.h"
#include "stdafx.h"
class QVBoxLayout;
class ElaPushButton;
class ElaContentDialog;
class ElaMaskWidget;
class ElaContentDialogPrivate : public QObject
{
    Q_OBJECT
    Q_D_CREATE(ElaContentDialog)
public:
    explicit ElaContentDialogPrivate(QObject* parent = nullptr);
    ~ElaContentDialogPrivate();

private:
    ElaThemeType::ThemeMode _themeMode;
    ElaMaskWidget* _maskWidget{nullptr};
    QWidget* _centralWidget{nullptr};
    QWidget* _buttonWidget{nullptr};
    QVBoxLayout* _mainLayout{nullptr};
    QString _leftButtonText{"cancel"};
    QString _middleButtonText{"minimum"};
    QString _rightButtonText{"exit"};
    ElaPushButton* _leftButton{nullptr};
    ElaPushButton* _middleButton{nullptr};
    ElaPushButton* _rightButton{nullptr};
    void _moveToCenter();
    void _doCloseAnimation();
};

#endif // ELACONTENTDIALOGPRIVATE_H
