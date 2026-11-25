import QtQuick
import QtQuick.Controls

ApplicationWindow {
    width: 1280
    height: 720
    minimumWidth: width
    maximumWidth: width
    minimumHeight: height
    maximumHeight: height
    visible: true
    title: "Válka mravenišť"

    Button {
        anchors.centerIn: parent
        text: "Začít hru"
        onClicked: gameController.startGame()
    }
}
