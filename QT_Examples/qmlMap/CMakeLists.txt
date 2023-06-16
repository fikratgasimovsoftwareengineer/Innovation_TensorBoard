cmake_minimum_required(VERSION 3.16)

project(qmlMap VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 REQUIRED COMPONENTS Quick WebEngineWidgets WebEngineQuick)


qt_add_executable(appqmlMap
    main.cpp
    map.qrc
)

qt_add_qml_module(appqmlMap
    URI qmlMap
    VERSION 1.0
    QML_FILES Main.qml
)

set_target_properties(appqmlMap PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appqmlMap
    PRIVATE Qt6::Quick Qt6::WebEngineWidgets Qt6::WebEngineQuick
)

install(TARGETS appqmlMap
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
