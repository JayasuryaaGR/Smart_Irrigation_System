# Smart_Irrigation_System

We used Arduino, LabVIEW, Firebase Database and several sensors to do this project.
We developed Smart Irrigation System which can be controlled both manually and automatically.
Its main objective is to prevent wastage of water during Irrigation.

Firstly, automation is achieved through Arduino programming.
Through the sensor readings the rain amount, air humidity, temperature, Sunlight, soil moisture are calculated and based on that,
the rotation of the servo motor can be controlled which is assumed to be connected with irrigation tap.

Then the same sensor readings from Arduino are taken in LabVIEW and are sent to Firebase database.
A mobile application is developed which shows the information from Firebase.
Hence, we can update ourselves with the Agricultural field conditions from wherever we are.

Through the mobile Application, we also can control the irrigation of the field.
We can set the irrigation level just by choosing the water flow speed in the app.
The app sends that data to the Firebase database, which the LabVIEW fetches.
Based on that value, the Pulse Width Modulation (PWM) given for the servo motor varies and hence the opening of irrigation tap can be controlled from anywhere in the world.
