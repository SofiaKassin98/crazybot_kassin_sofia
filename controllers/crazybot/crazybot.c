/*
 * File:          crazybot.c
 * Date:
 * Description:
 * Author:
 * Modifications:
 */

/*
 * You may need to add include files like <webots/distance_sensor.h> or
 * <webots/differential_wheels.h>, etc.
 */
#include <webots/robot.h>
#include <webots/motor.h>
#include <webots/position_sensor.h>
#include <webots/distance_sensor.h>
#include <webots/keyboard.h>

//libreria para escribir en pantalla y operaciones matematicas
#include <stdio.h>   
#include <math.h>  

/*
 * You may want to add macros here.
 */
#define TIME_STEP 64
#define PI 3.141592
//quiero que se detenga a esta distancia  
#define OBSTACLE DISTANCE 40  


/*
 * This is the main program.
 * The arguments of the main function can be specified by the
 * "controllerArgs" field of the Robot node
 */
int main(int argc, char **argv)
{
  /* necessary to initialize webots stuff */
  //INICIALIZANDO EL ROBOT Y EL KEYBOARD
  wb_robot_init();
  wb_keyboard_enable(TIME_STEP);
  
  int key;
  float distance_sensor;

  /*
   * You should declare here WbDeviceTag variables for storing
   * robot devices like this:
   *  WbDeviceTag my_sensor = wb_robot_get_device("my_sensor");
   *  WbDeviceTag my_actuator = wb_robot_get_device("my_actuator");
   */
  WbDeviceTag wheel_left = wb_robot_get_device("motor_left");
   WbDeviceTag wheel_right = wb_robot_get_device("motor_right");
  /* main loop
   * Perform simulation steps of TIME_STEP milliseconds
   * and leave the loop when the simulation is over
   */
  while (wb_robot_step(TIME_STEP) != -1) {
  
  //lee la tecla que presione y la guarda en la variable key
  key=wb_keyboard_get_key();
  
  

    /*
     * Read the sensors :
     * Enter here functions to read sensor data, like:
     *  double val = wb_distance_sensor_get_value(my_sensor);
     */

    /* Process sensor data here */

    /*
     * Enter here functions to send actuator commands, like:
     * wb_differential_wheels_set_speed(100.0,100.0);
     */
  };

  /* Enter your cleanup code here */

  /* This is necessary to cleanup webots resources */
  wb_robot_cleanup();

  return 0;
}
