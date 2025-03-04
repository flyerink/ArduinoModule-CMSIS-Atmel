/* ----------------------------------------------------------------------------
 *         SAM Software Package License
 * ----------------------------------------------------------------------------
 * Copyright (c) 2015, Atmel Corporation
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following condition is met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Atmel's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 */
#ifndef _SAME_INCLUDED_
#define _SAME_INCLUDED_

/* SAME70 series */
#if defined (__SAME70J19__)
#include "same70/include/same70.h"
#elif defined (__SAME70J20__)
#include "same70/include/same70.h"
#elif defined (__SAME70J21__)
#include "same70/include/same70.h"
#elif defined (__SAME70N19__)
#include "same70/include/same70.h"
#elif defined (__SAME70N20__)
#include "same70/include/same70.h"
#elif defined (__SAME70N21__)
#include "same70/include/same70.h"
#elif defined (__SAME70Q19__)
#include "same70/include/same70.h"
#elif defined (__SAME70Q20__)
#include "same70/include/same70.h"
#elif defined (__SAME70Q21__)
#include "same70/include/same70.h"

/* SAME51 series */
#elif defined(__SAME51G18A__)
#include "same51/include/same51g18a.h"
#elif defined(__SAME51G19A__)
#include "same51/include/same51g19a.h"
#elif defined(__SAME51J18A__)
#include "same51/include/same51j18a.h"
#elif defined(__SAME51J19A__)
#include "same51/include/same51j19a.h"
#elif defined(__SAME51J20A__)
#include "same51/include/same51j20a.h"
#elif defined(__SAME51N19A__)
#include "same51/include/same51n19a.h"
#elif defined(__SAME51N20A__)
#include "same51/include/same51n20a.h"

/* SAME53 series */
#elif defined(__SAME53J18A__)
#include "same53/include/same53j18a.h"
#elif defined(__SAME53J19A__)
#include "same53/include/same53j19a.h"
#elif defined(__SAME53J20A__)
#include "same53/include/same53j20a.h"
#elif defined(__SAME53N19A__)
#include "same53/include/same53n19a.h"
#elif defined(__SAME53N20A__)
#include "same53/include/same53n20a.h"

/* SAME54 series */
#elif defined(__SAME54N19A__)
#include "same54/include/same54n19a.h"
#elif defined(__SAME54N20A__)
#include "same54/include/same54n20a.h"
#elif defined(__SAME54P19A__)
#include "same54/include/same54n19a.h"
#elif defined(__SAME54P20A__)
#include "same54/include/same54n20a.h"
#endif

#endif /* _SAME_INCLUDED_ */
