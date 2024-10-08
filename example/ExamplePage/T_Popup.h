#ifndef T_POPUP_H
#define T_POPUP_H

#include "T_BasePage.h"

class ElaToolButton;
class ElaColorDialog;
class T_Popup : public T_BasePage
{
    Q_OBJECT
public:
    Q_INVOKABLE explicit T_Popup(QWidget* parent = nullptr);
    ~T_Popup();

private:
    ElaToolButton* _toolButton{nullptr};
    ElaColorDialog* _colorDialog{nullptr};
};

#endif // T_POPUP_H
