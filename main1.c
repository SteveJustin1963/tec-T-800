\\ PWM for the servo motor:

#include <stdio.h>
#include <wiringPi.h>

#define SERVO_PIN 1

int main()
{
  wiringPiSetup();
  pinMode(SERVO_PIN, PWM_OUTPUT);
  pwmSetMode(PWM_MODE_MS);
  pwmSetClock(192);
  pwmSetRange(2000);

  int i;
  for (i=0; i<50; i++)
  {
    pwmWrite(SERVO_PIN, 150);
    delay(500);
    pwmWrite(SERVO_PIN, 600);
    delay(500);
  }
  return 0;
}
