/*
 *  Copyright (c) 2019, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef QPG6100_MBEDTLS_CONFIG_H
#define QPG6100_MBEDTLS_CONFIG_H

// Use Qorvo HW crypto support
#undef MBEDTLS_ECP_WINDOW_SIZE
#undef MBEDTLS_ECP_FIXED_POINT_OPTIM

#define MBEDTLS_AES_ALT
#define MBEDTLS_CCM_ALT
#define MBEDTLS_ECP_ALT
#define MBEDTLS_ECJPAKE_ALT
#define MBEDTLS_SHA256_ALT

#if defined(QORVO_MBEDTLS_DEBUG)
#ifndef MBEDTLS_DEBUG_C
#define MBEDTLS_DEBUG_C
#endif // MBEDTLS_DEBUG_C
#else
#ifdef MBEDTLS_DEBUG_C
#undef MBEDTLS_DEBUG_C
#endif // MBEDTLS_DEBUG_C
#endif // QORVO_MBEDTLS_DEBUG

#include "mbedtls/check_config.h"

#endif // QPG6100_MBEDTLS_CONFIG_H
