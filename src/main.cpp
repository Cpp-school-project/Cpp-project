#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "game/GameController.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    GameController gameController;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("gameController", &gameController);
    engine.loadFromModule("AntWar", "Main");

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
