/*
 * lwns_sec.h
 *
 *  Created on: Sep 17, 2021
 *      Author: WCH
 */

#ifndef _LWNS_SEC_H_
#define _LWNS_SEC_H_

#include "lwns_config.h"

int lwns_msg_encrypt(uint8_t* src,uint8_t * to,uint8_t mlen);

int lwns_msg_decrypt(uint8_t* src,uint8_t * to,uint8_t mlen);

#endif /* _LWNS_SEC_H_ */
