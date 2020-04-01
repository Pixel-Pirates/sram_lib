/*
 * sram.h
 *
 *  Created on: Mar 28, 2020
 *      Author: Raymond Bernardo
 */

#ifndef BSP_DEVICE_DRIVER_SRAM_H_
#define BSP_DEVICE_DRIVER_SRAM_H_



void sram_init();
void sram_write(uint32_t addr, uint16_t data);
uint16_t sram_read(uint32_t addr);

#endif /* BSP_DEVICE_DRIVER_SRAM_H_ */
