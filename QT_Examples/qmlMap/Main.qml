import QtQuick
import QtQuick.Window
import QtQuick.Controls 2.13
import QtWebView 1.0
import QtQuick.Layouts

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    TabBar {
            id: tabBar
            width: parent.width

            TabButton {
                text: "Map"
            }
        }

        StackLayout {
            id: stackLayout
            currentIndex: tabBar.currentIndex
            width: parent.width
            height: parent.height - tabBar.height

            WebView {
                id: webView

                anchors.fill: parent
                url: "qrc:/leaflet.html"
            }
        }
}
