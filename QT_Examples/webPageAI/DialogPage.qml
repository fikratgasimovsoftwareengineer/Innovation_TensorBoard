import QtQuick
import QtQuick.Controls 2.13

Dialog{
    id:hyperParameterDialog
    width: 400
    height: 600
    modal:true
    title: "Tune HyperParameters"
    visible: false
    standardButtons: Dialog.Ok | Dialog.Cancel


    /*onAccepted: console.log("Inserted!")
    onRejected: console.log("Unsuccessful Insert")*/

    ComboBox {
        id: modelType
        width: 200
        model:ListModel{
            id:modelType1
            ListElement { text : "Nvidia RTX 3060"}
            ListElement {text: "Nvidia Quadro A6000"}
            ListElement {text: "Nvidia GeForce 3060"}
        }
    }

}
