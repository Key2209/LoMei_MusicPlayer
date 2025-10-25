#ifndef PAGEBUTTON_H
#define PAGEBUTTON_H

#include <QPushButton>
#include <QWidget>
#include <QPixmap>

class PageButton : public QPushButton
{
    Q_OBJECT
public:
    explicit PageButton(QWidget *parent=nullptr);

    void setIcons(const QPixmap &normal,const QPixmap &hover, const QPixmap &checked);
    int type=0;

protected:
    void enterEvent(QEnterEvent  *event) override;
    void leaveEvent(QEvent *event) override;
    //void mousePressEvent(QMouseEvent *event) override;

public slots:
    void updateIcon();

private:
    QPixmap m_iconNormal;
    QPixmap m_iconHover;
    QPixmap m_iconChecked;

    bool m_hovered = false;


};

#endif // PAGEBUTTON_H
