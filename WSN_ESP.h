// **********************************************************************************
// Author: Sunit Raut   github.com/SunitRaut
// **********************************************************************************
// License
// **********************************************************************************
// This program is free software; you can redistribute it 
// and/or modify it under the terms of the GNU General    
// Public License as published by the Free Software       
// Foundation; either version 3 of the License, or        
// (at your option) any later version.                    
//                                                        
// This program is distributed in the hope that it will   
// be useful, but WITHOUT ANY WARRANTY; without even the  
// implied warranty of MERCHANTABILITY or FITNESS FOR A   
// PARTICULAR PURPOSE. See the GNU General Public        
// License for more details.                              
//                                                        
// Licence can be viewed at                               
// http://www.gnu.org/licenses/gpl-3.0.txt
//
// Please maintain this license information along with authorship
// and copyright notices in any redistribution of this code
// **********************************************************************************

#ifndef WSN_ESP_h
#define WSN_ESP_h

#define PSIZE 200		//Size of packet buffer in bytes. Set this according to your hardware RAM limit and your estimated RAM usage
// 200 bytes is optimal for Arduino Nano, Uno, etc with 2kB RAM. For ESP8266 or other controllers with more RAM, ou can increase the packet buffer size. 
#define RETRY_TIMES 	1	// How many times to retry a transmission?
#define RETRY_INTERVAL	50	// At what intervals to retry?
#define NEIGHBOUR_RETRY_LIMIT 5	// How many neighbours to try in case of failure
#define ANALOG_RANDOM_PIN   A0  //Choose any analog pin to generate true random numbers.

class WSN_ESP
{

    
};

#endif
