#ifndef SCREENSHOTPROVIDER_H
#define SCREENSHOTPROVIDER_H
#include <QQuickImageProvider>

class ScreenshotProvider : public QQuickImageProvider
{
public:
    ScreenshotProvider();

    //QPixmap requestPixmap(const QString &id, QSize *size, const QSize &requestedSize);
    QImage requestImage(const QString &id, QSize *size, const QSize &requestedSize);
    bool setFrame(const std::vector<char>&);
    bool updateFrame(const std::vector<char>&);
    void updateFrame(const QPixmap& updateArea, QPoint regionOrg);

    QPixmap currentFrame;

};

#endif // SCREENSHOTPROVIDER_H
