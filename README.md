# Smart_circuit_breaker_project

Content:
1.Introduction
2.Equipment used with cost
3.Block Diagram and circuit Diagram
4.Simulation of circuit
5.Working
6.Application
7.Results
8.Conclusion





 
INTRODUCTION:
The project consists of a circuit breaker which when gets overload turn the main supply off, after turning the main supply off it will send notification to the user that the “power failure occurred”. 
                         Although we do have MCB(miniature circuit breaker) which performs the same operation as our circuit breaker do, but the main feature of smart circuit breaker is that it turns off the circuit when it get overload or short circuit and sends the notification to the users mobile phone.


When it informs the user about the condition of power supply, now user can inspect the circuit.
1.If power overload is happened due to any heavy current drawing appliance, then it can be removed from the main supply and the initial conditions can be restored by pressing the restore button given on the circuit breaker.
2.If power overload is happened due to “Short Circuit”, then entire wiring can be inspected in order to resolve the Short Circuit without causing any harm to the loads connected to the supply


What is the need of informing user about the power failure due to overload??
The answer is that if a person is not present at a time when overload is happened then it informs the person to check the entire load, so the appliances can be saved.
The device can be used in industries where whole lot work is done by automation and if any device is drawing more current than required, then it can shut down that device and informs the system to check the condition of the device. 
This device can also be used at home as a smart load managing device such that if a load increase in home, then it can shut down entire power supply and inform owner about it.

The other security aspects can also be added with this model and they can be:
 
Equipment used with cost:
There are two sections of the project 
•	The notification sender:
1.	Arduino UNO:  Rs 450
2.	GSM module:  Rs 900
3.	Power adapter 12v:  Rs 120Rs
4.	Power adapter 5v:  Rs 200Rs


•	The circuit breaker:
1.	1x 555 TIMER IC:  Rs 40
2.	2x BC547 TRANSISTORS: Rs 80
3.	1x PUSH BUTTON: Rs 10
4.	5x 1N4007 DIODES: Rs 100
5.	1x LED: Rs 10
6.	1x 10K VARIABLE RESISTOR: Rs 40
7.	2x 1K RESISTORS:  Rs 40
8.	4x 10K RESISTORS: Rs 120
9.	1x 0.1uF CAPACITOR: Rs 40
10.	1x 47uF CAPACITOR: Rs 50
11.	1x 100uF CAPACITOR: Rs 60
12.	1x CURRENT TRANSFORMER: Rs 80
13.	1x 12V RELAY: Rs 40
14.	2x 2 PIN TERMINAL BLOCKS: Rs 20
15.	JUMPER WIRES: Rs 20
16.	Bread board: Rs 100

Total price: 2500


 
Block Diagram and Circuit Diagram: 
 
Circuit diagram:
 
 
Working:
The project works in two parts 
1.	The circuit breaker module 


The circuit breaker contains a transformer in which if a heavy current flows as a result of overload, then the voltage across secondary coil rectified. This rectified voltage signal when reaches to 555 timer IC, the IC sends to the signal to relay cut the main circuit off.
                                                        The intensity of rectified voltage can be reduced by the variable resistor which is explained below.
There is a voltage signal reaching towards IC through a variable resistor 
1.	If there is a high voltage coming from the diodes then high variable resistance can be used to avoid circuit breaking.
2.	If there is a high voltage coming form the diodes then low variable resistance can be used to make circuit break.

2.The Arduino UNO and GSM module:

When the circuit is broken by the circuit breaker, then the 5v supply by the rectifier to the Arduino gets broken.
Once the 5v supply to the Arduino turns off, then it processes the signal and instruct the GSM module to send notification to the mobile phone number which is inside the Arduino code. 




 
Application:
The device is very usfull on the places where thre are multiple devices are connected to the main supply. The device can be connected in series with the appliece,when the device draws normal amout of current it will not turn off the circuit.
                  The moment device starts to draw heavy amout of current(which can be due to short circuit/abnormal function of the device) the circuit will be turned of reulting in turing off the applience.

As majority of the devices works when operated on high voltage or current gets damaged, But when this module is connected in series with the the applience, then as soon as the applience draws heavy current it will turn off the deive resulting is saving the device.
When this happens it sends the notification to the users mobile or it can inform the system(home automation device)/(Industry automation device).
This device can be used to protect the applience from short circuit and overlaod current and by sending notification it informs the user/ower to avoid any accident (fire due to burning of main power supply wiring).
If there there exists no probem with the circuit, then the initial conditions of the circuit can be restored by pressing the restore button.





 
Results:
There are some components in the circuit which plays the most important role.
1.Relay works as most important component as it breaks the circuit when receives the signal from the IC.
2.Transformer is the second most component as it acts as coordinator between IC and the relay.
3. Arduino can be programmed in by Arduino ide (which is an open-source Arduino programming tool). The Arduino can be used in similar other projects that involves the use of digital automation.
4.GSM module plays an important role for having a communication between devices which are available on the network.
5.Rectifiers are the main components of power adapter and dc power supply, as they are used to power the components like Arduino and Gsm module.

Conclusion:
By doing this project we came to learn about the various aspects of electronics and electrical engineering.
1.we have learnt to program the Arduino with the help of Arduino ide.
2.we came to know about the application of GSM module in project that how important role its plays to establish a connection between device and the Arduino module.
3.While making project we can to know about various features of 555 timer IC and various other logic involved.

The model can be implemented as a part of home automation / industry automation to prevent accidental damage cased due to short circuit or overload.  

 
