The main functionality of the project is player item. To improve the main functionality the player function is based on QMedia player class. It allows the playing of a media source in Qt. 

The mainwindow.cpp file contains several properties which belongs to QMedia player class. The player, play (), pause () and stop (), position changed, and volume changed, value changed like properties and methods are also inherited from Qmedia player class.

At the mainwindow.h file added private variables for video outputting function which is using the encapsulation concepts in the project to ensure the protection of changing the code functionalities of the player. Also, the project is using dialog.cpp files for other UIs. Dialog review.cpp file is having the functions to add, delete and save reviews. In the dialog review header file, there are some variables declared as private.

The Main Window class is inherited from QMainWindow as the base class. And other Dialog UIs are inherited with QDialog base class.

Further here used qt widgets as list widget, list edit, list view is used to access the functions of review and playlist UI s. 

Video widget is another qt widget used to play the video in main window. 

All resources files as icons, images and logos are added from internet sources to the code.
The application is covered the cross- platform functionality which is used in the implementation by using QT.

![c1](https://github.com/Nethmee5/C-Media-player-application/assets/59769437/41b59206-4e3b-4b53-a8c9-ba1d1cec5eac)
![c2](https://github.com/Nethmee5/C-Media-player-application/assets/59769437/3c2b3ec2-bb2f-4e72-82f5-6e34fb4ac3d6)
![c3](https://github.com/Nethmee5/C-Media-player-application/assets/59769437/b4c2be02-1e19-4f79-9b93-510d2d900e9f)
![c4](https://github.com/Nethmee5/C-Media-player-application/assets/59769437/68766ac8-0f83-4fe6-b8ea-cb3ca1fd8648)


