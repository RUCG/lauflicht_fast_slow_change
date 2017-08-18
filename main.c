#include <stdlib.h>
#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 8000000UL
#define GESCHWINDIGKEIT !(PINB & (1<<PB1))// Taster für die Geschwindigkeit
#define RICHTUNG (PINB & (1<<PB2))// Taster für den Richtungswechsel


int main()
{

	DDRD = 0xFF;
	PORTD = 0x00;

	DDRB &= ~(1<<PB1);					//Eingang1
	PORTB |= (1<<PB1);					//Pull-up Widerstand
	DDRB &= ~(1<<PB2);					//Eingang2
	PORTB |= (1<<PB2);					//Pull-up Widerstand
	DDRB &= ~(1<<PB3);					//Eingang2
	PORTB |= (1<<PB3);					//Pull-up Widerstand
	
	unsigned int zeit1 = 250;
	unsigned int zeit2 = 1000;
		
		while(1)
		{
		
		
			if(RICHTUNG)
			{
					if(GESCHWINDIGKEIT)
					{
						while(GESCHWINDIGKEIT)
						{
							_delay_ms(zeit1);
							
							PORTD = 1;
							
							_delay_ms(zeit1);
							
							PORTD = 2;
							
							_delay_ms(zeit1);
										
							PORTD = 4;
							
							_delay_ms(zeit1);
											
							PORTD = 8;
							
							_delay_ms(zeit1);
											
							PORTD = 16;
							
							_delay_ms(zeit1);
											
							PORTD = 32;
							
							_delay_ms(zeit1);
											
							PORTD = 64;
							
							_delay_ms(zeit1);
											
							PORTD = 128;
						}
					}
					else
					{		
						
							_delay_ms(zeit2);
							
							PORTD = 1;
							
							_delay_ms(zeit2);
							
							PORTD = 2;
							
							_delay_ms(zeit2);
										
							PORTD = 4;
							
							_delay_ms(zeit2);
											
							PORTD = 8;
							
							_delay_ms(zeit2);
											
							PORTD = 16;
							
							_delay_ms(zeit2);
											
							PORTD = 32;
							
							_delay_ms(zeit2);
											
							PORTD = 64;
							
							_delay_ms(zeit2);
											
							PORTD = 128;
						
				
					}		
			}
			else
			{
					if(GESCHWINDIGKEIT)
					{
						while(GESCHWINDIGKEIT)
						{
							_delay_ms(zeit1);
							
							PORTD = 128;
							
							_delay_ms(zeit1);
							
							PORTD = 64;
							
							_delay_ms(zeit1);
										
							PORTD = 32;
							
							_delay_ms(zeit1);
											
							PORTD = 16;
							
							_delay_ms(zeit1);
											
							PORTD = 8;
							
							_delay_ms(zeit1);
											
							PORTD = 4;
							
							_delay_ms(zeit1);
											
							PORTD = 2;
							
							_delay_ms(zeit1);
											
							PORTD = 1;
						}
					}
					else
					{		
						
							_delay_ms(zeit2);
							
							PORTD = 128;
							
							_delay_ms(zeit2);
							
							PORTD = 64;
							
							_delay_ms(zeit2);
										
							PORTD = 32;
							
							_delay_ms(zeit2);
											
							PORTD = 16;
							
							_delay_ms(zeit2);
											
							PORTD = 8;
							
							_delay_ms(zeit2);
											
							PORTD = 4;
							
							_delay_ms(zeit2);
											
							PORTD = 2;
							
							_delay_ms(zeit2);
											
							PORTD = 1;
						
				
					}
			}
		}	
			
return 0;/*#define LED6_AUS PORTD &= ~(1<<PD6);	//löscht bit PD6
#define LED6_EIN PORTD |= (1<<PD6);		//setzt PD6

#define LED7_AUS PORTD &= ~(1<<PD7);	//löscht bit PD7
#define LED7_EIN PORTD |= (1<<PD7);		//setzt PD7

int main(void)
{
	
	DDRD = 0xFF;						//Port D als Ausgang setzen
	PORTD = 0x00;						// alle Pins an Port D auf high setzen
	
	
	DDRB &= ~(1<<PB1);					//Eingang1
	PORTB |= (1<<PB1);					//Pull-up Widerstand
	DDRB &= ~(1<<PB2);					//Eingang2
	PORTB |= (1<<PB2);					//Pull-up Widerstand
	DDRB &= ~(1<<PB3);					//Eingang2
	PORTB |= (1<<PB3);					//Pull-up Widerstand
	
	
	
	
	short zeita=200;
	short zeitb=25;
	
	while(1) {
	
		if(TASTE2){
		
			if(TASTE1){
			
			LED0_EIN;
			
			_delay_ms(zeita);
			
			
			LED0_AUS;
			LED1_EIN;
			
			
			_delay_ms(zeita);		
			
			
			LED1_AUS;
			LED2_EIN;
			
			
			_delay_ms(zeita);
			
			
			LED2_AUS;
			LED3_EIN;
			
			
			_delay_ms(zeita);
			
			
			LED3_AUS;
			LED4_EIN;
			
			
			_delay_ms(zeita);
			
			
			LED4_AUS;
			LED5_EIN;
			
			
			_delay_ms(zeita);
			
			
			LED5_AUS;
			LED6_EIN;
			
			
			_delay_ms(zeita);
			
			
			LED6_AUS;
			LED7_EIN;
			
			
			_delay_ms(zeita);
			
			LED7_AUS;
			
			}
			
			else{

			LED0_EIN;
			
			_delay_ms(zeitb);
			
			
			LED0_AUS;
			LED1_EIN;
			
			
			_delay_ms(zeitb);		
			
			
			LED1_AUS;
			LED2_EIN;
			
			
			_delay_ms(zeitb);
			
			
			LED2_AUS;
			LED3_EIN;
			
			
			_delay_ms(zeitb);
			
			
			LED3_AUS;
			LED4_EIN;
			
			
			_delay_ms(zeitb);
			
			
			LED4_AUS;
			LED5_EIN;
			
			
			_delay_ms(zeitb);
			
			
			LED5_AUS;
			LED6_EIN;
			
			
			_delay_ms(zeitb);
			
			
			LED6_AUS;
			LED7_EIN;
			
			
			_delay_ms(zeitb);
			
			LED7_AUS;
			
			}
		}
		
		else{
			
			if(TASTE1){
			
			LED7_EIN;
			
			_delay_ms(zeita);
			
			
			LED7_AUS;
			LED6_EIN;
			
			
			_delay_ms(zeita);		
			
			
			LED6_AUS;
			LED5_EIN;
			
			
			_delay_ms(zeita);
			
			
			LED5_AUS;
			LED4_EIN;
			
			
			_delay_ms(zeita);
			
			
			LED4_AUS;
			LED3_EIN;
			
			
			_delay_ms(zeita);
			
			
			LED3_AUS;
			LED2_EIN;
			
			
			_delay_ms(zeita);
			
			
			LED2_AUS;
			LED1_EIN;
			
			
			_delay_ms(zeita);
			
			
			LED1_AUS;
			LED0_EIN;
			
			
			_delay_ms(zeita);
			
			LED0_AUS;
			
			}
			
			else{

			LED7_EIN;
			
			_delay_ms(zeitb);
			
			
			LED7_AUS;
			LED6_EIN;
			
			
			_delay_ms(zeitb);		
			
			
			LED6_AUS;
			LED5_EIN;
			
			
			_delay_ms(zeitb);
			
			
			LED5_AUS;
			LED4_EIN;
			
			
			_delay_ms(zeitb);
			
			
			LED4_AUS;
			LED3_EIN;
			
			
			_delay_ms(zeitb);
			
			
			LED3_AUS;
			LED2_EIN;
			
			
			_delay_ms(zeitb);
			
			
			LED2_AUS;
			LED1_EIN;
			
			
			_delay_ms(zeitb);
			
			
			LED1_AUS;
			LED0_EIN;
			
			
			_delay_ms(zeitb);
			
			LED0_AUS;
			
			}
			
		}
		
	}//end of while*/
}