//
// Created by William Kim on 6/12/25.
//

#ifndef USB_SPI_CONTROL_H
#define USB_SPI_CONTROL_H

#include "gpio.h"
#include "main.h"
#include "spi.h"
#include "usb_device.h"

// uint8_t CDC_Receive_FS(uint8_t* Buf, uint32_t *Len)
// {
//   if (*Len < 2) return USBD_OK;

//   uint8_t regAddr = Buf[0] & 0x7F; // 7-bit address
//   uint8_t data    = Buf[1];       // 8-bit data
//   uint8_t spiTx[2] = {regAddr, data};

//   // SPI Write Transaction
//   HAL_GPIO_WritePin(CS_GPIO_Port, CS_Pin, GPIO_PIN_RESET);
//   HAL_SPI_Transmit(&hspi1, spiTx, 2, HAL_MAX_DELAY);
//   HAL_GPIO_WritePin(CS_GPIO_Port, CS_Pin, GPIO_PIN_SET);

//   // Optional: Echo back to PC
//   CDC_Transmit_FS(spiTx, 2);

//   return USBD_OK;
// }

#endif // USB_SPI_CONTROL_H
