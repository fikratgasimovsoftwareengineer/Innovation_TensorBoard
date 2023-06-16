import QtQuick
import QtQuick.Controls 2.13
import QtQuick.Dialogs // image load dialog
import QtQuick.Window 2.10
import image.com 1.0 // image api
import restapi.com 1.0 // rest api
import QtQuick.Layouts 1.12 // for row layout
import QtQuick.Window 2.1


Window {

    id:mainWindow
    width: 1080
    height: 720
    visible: true
    title: qsTr("TensorBoard")


    // qml var color property
    property string imgcolor: "#1c1c16"
    property string imgCharacter: "#423d23" //"#919123"

    // update listview
    function updateRepeater() {
           imageRepeater.model = imagesHandler.getRawImages();
       }
    // get names
    function updateImageName(){
        nameViewsList.model = imagesHandler.getNames();
    }

    //Step 1
    ImageHandler{
        id:imagesHandler
        // create signal handler from Q_PROPERTY
        //onRawImagesChanged: readImagesAndDisplay.model = imagesHandler.getRawImages()
         onRawImagesChanged: updateRepeater()
         // Update Image Name
         onNamesChanged:  updateImageName()

    }

    //Step 2
    RestAPIHandler{
        id:restAPIHandler
    }

    //Step 3
    Image{
        id:backgroundImage
        source: Qt.resolvedUrl("file:///home/fikrat/QT_Examples/webPageAI/background.jpg")

        fillMode: Image.PreserveAspectCrop
        anchors.fill: parent


    }

    //Step 4
    RowLayout{

        id:rowLayout

        anchors.fill: parent

        // Button Step 4.1
        Button{

            id:loadImages

            anchors{

                top:parent.top
                left:parent.left

            }

            // enable mouse click
            hoverEnabled: true

            text:"Load Images"
            // increase size of text
            font.pointSize: 15
            //
            onClicked:{
                fileDialog.open()
            }

            background: Rectangle {
                implicitWidth: 100
                implicitHeight: 30
                border.color: loadImages.down ? "#1fe049" : "#f0ea95"
               // border.width: 2
                radius: loadImages.height /2
                // light blue
                color: "#f7f6e6"

            }

        }
        // Button Step 4.1
        Button{
            id:displayRawImages
            anchors{
                top:parent.top
                left:loadImages.right
                leftMargin: 5
            }

            // enable mouse click
            hoverEnabled: true

            text:"Display Images"

            // increase size of text
            font.pointSize: 15
            // Display Images
            onClicked:{
                imagesHandler.displayImages("/home/fikrat/QT_Examples/webPageAI/Images")

            }
            background: Rectangle {
                implicitWidth: 100
                implicitHeight: 30
                border.color:displayRawImages.down ? "#1fe049" :"#f0ea95"
               // border.width: 2
                radius: displayRawImages.height /2 // round border
                // light blue
                color: "#f7f6e6"//"#d1d192"

            }

        }


        // This button will show INFO about the corresponding images
        Button{

            id:displayINFOImages
            anchors{
                top:parent.top
                left: displayRawImages.right
                leftMargin: 5
            }
            // enable mouse click
            hoverEnabled: true

            text:"Image Details"

            font.pointSize: 15

            // Return FileNames
            onClicked:{
                imagesHandler.getFillNames("/home/fikrat/QT_Examples/webPageAI/Images")
            }

            // OnClicked here Implement

            background: Rectangle{
                implicitWidth: 100
                implicitHeight: 30
                border.color: displayINFOImages.down ? "#1fe049" :"#f0ea95"
                radius: displayINFOImages.height / 2 // round border
                color: "#f7f6e6"
            }

        }

        //Display Metrics
        Button{

            id:displayMetricsTrain
            anchors{
                top:parent.top
                left: displayINFOImages.right
                leftMargin: 300
            }
            // enable mouse click
            hoverEnabled: true

            text:"Train Metrics"

            font.pointSize: 15

            // Return FileNames
           /* onClicked:{
                imagesHandler.getFillNames("/home/fikrat/QT_Examples/webPageAI/Images")
            }*/

            // OnClicked here Implement

            background: Rectangle{
                implicitWidth: 100
                implicitHeight: 30
                border.color: displayMetricsTrain.down ? "#1fe049" : "#f0ea95"
                radius: displayMetricsTrain.height / 2 // round border
                color: "#f7f6e6"
            }

        }

        //Display Metrics For VAL
        Button{

            id:displayMetricsVAL

            anchors{
                top:parent.top
                left: displayMetricsTrain.right
                leftMargin: 20
            }
            // enable mouse click
            hoverEnabled: true

            text:"Val Metrics"

            font.pointSize: 15

            // Return FileNames
           /* onClicked:{
                imagesHandler.getFillNames("/home/fikrat/QT_Examples/webPageAI/Images")
            }*/

            // OnClicked here Implement

            background: Rectangle{
                implicitWidth: 100
                implicitHeight: 30
                border.color: displayMetricsVAL.down ? "#1fe049" : "#f0ea95"
                radius: displayMetricsVAL.height / 2 // round border
                color: "#f7f6e6"
            }

        }



        //Display Metrics For VAL
        Button{

            id:hyperParameterTuning

            anchors{
                top:parent.top
                left: displayMetricsVAL.right
                leftMargin: 20
            }
            // enable mouse click
            hoverEnabled: true

            text:"Hyperparameter Tuning"

            font.pointSize: 15

            // Return FileNames
            onClicked:{
                hyperParameterDialog.open()
            }

            // OnClicked here Implement

            background: Rectangle{
                implicitWidth: 100
                implicitHeight: 30
                border.color: hyperParameterTuning.down ? "#b8b7b4" : "#d1346e"
                radius: hyperParameterTuning.height / 2 // round border
                color: "#7ca37d"
            }

        }


    } // Raw Layout is finished



     // Button Step 5.1

    FileDialog{
        id:fileDialog

        title: "Load Images"

        nameFilters: ["Image Files :(*.jpg *.jpeg *.png)"]

        // load Multiple Files at once
        fileMode: FileDialog.OpenFiles // Set this property for multiple files

        onAccepted: {

            console.log("You choose and Saving " + fileDialog.currentFiles)

            // fileDialog selected files return number of files
            imagesHandler.setSelectFiles(fileDialog.selectedFiles)


            imagesHandler.saveImage("/home/fikrat/QT_Examples/webPageAI/Images")
            console.log("You choose and Saving in ..." + "/home/fikrat/QT_Examples/webPageAI/Images")


        } // onaccepted finishe

    } //File Dialog is finished



    Row {

        id:imagesRowAligned
        spacing: 5

        anchors {
            left: mainMenu.right
            leftMargin: 50

            horizontalCenter: parent.horizontalCenter
            top: parent.top
            topMargin: -130 // or any value you want

        }


        Repeater{
            id:imageRepeater
            delegate: Image {
                id: delegateImage
                source: modelData.toString()
                width: 400
                height: 800
                fillMode: Image.PreserveAspectFit

            }
        }




    }



    Rectangle{

        id:mainMenu
        x:0
        y:70
        width: 400
        height: parent.height


        color:"#adad99" // Choose a color for your main menu"
        border.color: "#423d23"

        Text{

            id: mainText
            text:qsTr(" Raw Image Characteristic")
            font.pointSize: 15
            color:"#d47a35"
            font.bold: true
            font.capitalization: font.AllUppercase
            anchors{
               top:mainMenu.top
               horizontalCenter: parent.horizontalCenter
               topMargin: 5


            }



        }

        Column{
            id:imageDetailsColumn

            width: parent.width
            height: parent.height

            anchors{
                left: parent.left
                top:mainText.bottom

            }

            ListView{
                id:nameViewsList
                width: parent.width
                height: parent.height
                model:imagesHandler.getNames()
                spacing: 10

                // Img Names with hierercy characteristic
                delegate: Column {
                    spacing : 10
                    Text{
                        id: imageNameDelegate
                        text: "Image Name : " + modelData.toString()
                        font.pointSize:15
                        // Width and WrapMode they wrap the name of image
                        width: mainMenu.width
                        wrapMode: Text.WordWrap // Add this property
                        //*****************
                        font.bold: true
                        color: imgcolor
                        anchors{
                            top: mainMenu.top
                            topMargin: 10
                        }
                    }
                    Text{
                        text: "     Class Name : "
                        font.pointSize:15
                        color: imgCharacter
                    }
                    Text{

                        text: "     Probability : "
                        font.pointSize:15
                        color: imgCharacter
                    }
                    Text{
                        id: iouDelegate
                        text: "     IoU : "

                        font.pointSize:15
                        color: imgCharacter
                    }



                }
            }
        }
    }

    // Horizontal Line between images
    Canvas {
        id: mycanvas
        width: parent.width - mainMenu.width
        height: 2

        anchors{
            top: parent.top// replace with image id
            topMargin: 400
            left: mainMenu.right
            leftMargin: 10
            right: parent.right
            rightMargin: 120

        }

        onPaint: {
            var ctx = getContext("2d")
            ctx.beginPath()
            ctx.moveTo(0, height / 2)
            ctx.lineTo(width, height / 2)
            ctx.strokeStyle = "#cfccc2" // choose color

            ctx.lineWidth = 2 // adjust for line thickness
            ctx.stroke()
        }


    }

    // Image Characteristics Separater
    Rectangle {
        id: mainMenuSeparator
        color: "transparent"
        border.color: "#ad9647"
        border.width: 1
        width: 400
        height: 7 // Define the height of the separator. Adjust as necessary.
        radius: height / 2
        anchors.centerIn: mainMenu
    }


     // Popup Window
    /*Dialog{
        id:hyperParameterDialog
        width: parent.width / 2
        height: parent.height / 2
        modal:true
        title: "Tune HyperParameters"
        font.pointSize: 15


        visible: false
        standardButtons: Dialog.Ok | Dialog.Cancel
        anchors.centerIn: parent



         /*onAccepted: console.log("Inserted!")
            onRejected: console.log("Unsuccessful Insert")*/

        /*ComboBox {
            id: modelType
            width: 200

            model:ListModel{
                id:modelType1
                ListElement { text : "Nvidia RTX 3060"}
                ListElement {text: "Nvidia Quadro A6000"}
                ListElement {text: "Nvidia GeForce 3060"}
                }
            }

        }*/

    // Popup Window
   /*Dialog {
        id: hyperParameterDialog
        width: parent.width / 2
        height: parent.height / 2
        modal: true
        visible: false
        standardButtons: Dialog.Ok | Dialog.Cancel
        anchors.centerIn: parent // Center the Dialog in its parent.

        // Custom title
        Rectangle {
            id: titleBar
            width: parent.width
            height: 30
            color: "#a5ab9b" // Color it as you wish.

            Label {
                text: "Tune HyperParameters"
                anchors.centerIn: parent // Center the Label in its parent (the title bar).
                font.bold: true

            }
        }

        // Contents of the dialog
        Rectangle {
            id: dialogContent
            width: parent.width
            height: parent.height - titleBar.height
            anchors.top: titleBar.bottom

            ComboBox {
                id: modelType
                width: 200
                model: ListModel {
                    id: modelType1
                    ListElement { text : "Nvidia RTX 3060"}
                    ListElement {text: "Nvidia Quadro A6000"}
                    ListElement {text: "Nvidia GeForce 3060"}
                }
                //anchors.centerIn: parent // Center the ComboBox in its parent (the dialog content).
                anchors.left: parent.left
            }
        }
    }*/

    Dialog{
        id: hyperParameterDialog
        width: parent.width / 2
        height: parent.height / 2
        modal:true
        visible: false
        standardButtons: Dialog.Ok | Dialog.Cancel

        // put it in center
        anchors.centerIn: parent // Center the Dialog in its parent.

            // title bard of dialog
        Rectangle{
            id: titleBar
            width: parent.width
            height: 30
            color: "#a5ab9b" // Color it as you wish.

            // put title to rectangle of dialog
            Label{
                id:titleBardLabel
                text: "Tune HyperParameters"
                font.pointSize: 15
                anchors.centerIn: parent  // Center the Label in its parent (the title bar).
                font.bold:  true
            }
        }

        //Dialog COntent Rectangle
        Rectangle{
            id: dialogContentRectangle
            width: parent.width
            height: parent.height -  titleBar.height
            anchors.top: titleBar.bottom
        }

        ComboBox {
                  id: modelType

                  width: 200
                  model: ListModel {
                      id: modelType1
                      ListElement { text : "Nvidia RTX 3060"}
                      ListElement {text: "Nvidia Quadro A6000"}
                      ListElement {text: "Nvidia GeForce 3060"}
                  }
                  anchors.centerIn:dialogContentRectangle.left // Center the ComboBox in its parent (the dialog content).
                  anchors.top: titleBar.bottom
                  anchors.topMargin: 15

                  Label{
                      id:titleBardLabelComBo
                      text: "Choose GPU Type: "
                      font.pointSize: 10
                      anchors.centerIn: modelType.Center  // Center the Label in its parent (the title bar).

                      anchors.bottom: modelType.top

                      font.bold:  true
                  }
              }


        ComboBox {
                  id: modelType_Epoch

                  width: 200
                  model: ListModel {
                      id: modelTypeEpoch
                      ListElement { text : "50"}
                      ListElement {text: "100"}
                      ListElement {text: "150 "}
                      ListElement {text: "200"}
                      ListElement {text: "300 "}
                  }
                  anchors.centerIn:dialogContentRectangle.left // Center the ComboBox in its parent (the dialog content).

                  anchors.top: modelType.bottom

                  anchors.topMargin: 30

                  Label{
                      id:titleBardLabelEpoch
                      text: "Number of Epochs: "
                      font.pointSize: 10
                      anchors.centerIn: modelType_Epoch.Center  // Center the Label in its parent (the title bar).

                      anchors.bottom: modelType_Epoch.top

                      font.bold:  true
                  }
              }



    }



}


