#include "GameController.h"

#include <QDebug>

GameController::GameController(QObject *parent)
    : QObject(parent)
{
}

void GameController::startGame()
{
    qDebug() << "Hra zacala";
}
