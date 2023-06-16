#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <restapihandler.h>
#include <QQmlContext>
#include <QQmlEngine> // Qml Engine help to use Class Instance
#include <imagehandler.h>
#include <QIcon>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    app.setWindowIcon(QIcon(":/chip_2.png"));

    // QML  Image Handle
    // Major version, minor version, qml class name
    qmlRegisterType<ImageHandler>("image.com", 1, 0, "ImageHandler");

    // Major version, minor version, qml class name
    qmlRegisterType<RestAPIHandler>("restapi.com", 1, 0, "RestAPIHandler");

    const QUrl url(u"qrc:/webPageAI/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
        &app, [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        }, Qt::QueuedConnection);

    engine.load(url);


    return app.exec();
}
