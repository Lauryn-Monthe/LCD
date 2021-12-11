/**
  ******************************************************************************
  * @file    	main.c
  * @author		Florian von Zabiensky
  * @version 	V1.0
  * @date		14.03.2019
  * @brief  	Template using the LCD
  ******************************************************************************
*/


#include <lcd/lcd.h>
#include "stm32f4xx.h"
#include <stdio.h>
#include <Bargraph/bargraph.h>
#include<stdlib.h>


int main(void)
{
	HAL_Init();

	/* Initialization of the LCD */
	lcd_init();

	char buf[64];

	/* Draw text to LCD*/


	while(1) {
		for(int i = 1024; i > 0; i= i-100){
			sprintf(buf, "Zahl = %4d", i);
			lcd_draw_text_at_line(buf, 2, BLACK, 2, WHITE);
		    lcd_Draw_Bargraph(2, 100, 250, 15 , i, BLACK, RED);
			HAL_Delay(1000);

		}
	/*for(int i = 50; i < 200; i++){
		lcd_draw_pixel(i, 100, BLACK);
		lcd_draw_pixel(120, i, BLACK);

	}*/
	//lcd_draw_horizontal_line(50, 30, 100, RED);
	//lcd_draw_vertical_line(100, 10, 100, RED);
		//lcd_draw_circle(100, 100, 50, BLUE, 1);
	}
}
