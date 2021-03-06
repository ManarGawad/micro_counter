#include "stdint.h"
#include "tm4c123gh6pm.h"
#include "MCAL.h"

void Port_SetPinPullUp (uint8_t port_index,uint8_t pins_mask,uint8_t enable){
	if (port_index == 0) // Port A
	{
		if(enable){
	  GPIO_PORTA_PUR_R |= pins_mask; 
	}
		else{
			GPIO_PORTA_PUR_R &=(!pins_mask);
		}
}
	else if (port_index == 1) // Port B
	{
		if(enable){
	  GPIO_PORTB_PUR_R |= pins_mask; 
	}
		else{
			GPIO_PORTB_PUR_R &=(!pins_mask);
		}
	}
	else if (port_index == 2) // Port C
	{
		if(enable){
	  GPIO_PORTC_PUR_R |= pins_mask; 
	}
		else{
			GPIO_PORTC_PUR_R &=(!pins_mask);
		}
	}
	else if (port_index == 3) // Port D
	{
		if(enable){
	  GPIO_PORTD_PUR_R |= pins_mask; 
	}
		else{
			GPIO_PORTD_PUR_R &=(!pins_mask);
		}
	}
	else if (port_index == 4) // Port E
	{
		if(enable){
	  GPIO_PORTE_PUR_R |= pins_mask; 
	}
		else{
			GPIO_PORTE_PUR_R &=(!pins_mask);
		}
	}
	else if (port_index == 5) // Port F
	{
		if(enable){
	  GPIO_PORTF_PUR_R |= pins_mask; 
	}
		else{
			GPIO_PORTF_PUR_R &=(!pins_mask);
		}
	}
}
