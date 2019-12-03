#pragma config(Sensor, in1,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, dgtl3,  bumperSwitch,   sensorTouch)
#pragma config(Motor,  port1,           leftmotor,     tmotorVex269_HBridge, openLoop)
#pragma config(Motor,  port9,           sideway,       tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port10,          rightmotor,    tmotorVex269_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

// Arcade Drive: Horizontal

task main()
{
	while (1==1) {
		while (SensorValue(bumperSwitch) == 1) {
			motor[leftmotor]=20;
			motor[rightmotor]=10;
			wait1Msec(3000);

			motor[leftmotor]=0;
			motor[rightmotor]=0; //repeat
			wait1Msec(3000);

			while(SensorValue[potentiometer] < 500)
			{
				motor(sideway) = 5;
			}
			while(SensorValue[potentiometer] > 500)
			{
				motor(sideway) = -1;
			}
		}

	}
}
