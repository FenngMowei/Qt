#ifndef MDIAREA_H
#define MDIAREA_H

#include <QMdiArea>
#include <QMdiSubWindow>
class MdiArea : public QMdiArea
{
    Q_OBJECT
public:
    MdiArea();
private:
    QMdiSubWindow * lastActiceSubWindow = nullptr;
protected:
//    virtual bool eventFilter(QObject *object, QEvent *event) override;

//    virtual void
//    childEvent(QChildEvent *childEvent) override;
//    virtual void showEvent(QShowEvent *showEvent) override;
public slots:
    void on_mdiArea_subWindowActivated(QMdiSubWindow * subWindow);
};

#endif // MDIAREA_H
