#include <Servo.h>


class Servo_Scarborough{
public:



	Servo_Scarborough(int m0, int m1, int m2, int m3, int m4, int m5);


	void init_motors();
	void set_speed(int _motor, int speed);
	
	Servo m0, m1, m2, m3, m4, m5, m6;
	
	
};