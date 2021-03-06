/********************************************************************************
 * Copyright (c) 2016 Advanced Micro Devices, Inc. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ********************************************************************************/


/*! \file cl_copy_utils.h
 * common functions to context agnostic copies
 */

#ifndef __CL_COPY_UTILS_H
#define __CL_COPY_UTILS_H

#define CL_USE_DEPRECATED_OPENCL_2_0_APIS
#include <CL/cl.h>

/*!
 * data for copy callback cleanup
 */
typedef struct
{
    void* host_ptr;
} copy_asset;

/*!
 * callback for cleaning up buffers / pointers created during a buffer_copy
 * executes in a new thread
 *
 * \param event
 *      unused
 * \param status
 *      unused
 * \param data
 *      free this data
 */
void cleanup_copy(cl_event event, cl_int status, void* data);

#endif // __CL_COPY_UTILS_H
