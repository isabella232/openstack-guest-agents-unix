/*
 * vim: tabstop=4 shiftwidth=4 softtabstop=4
 *
 * Copyright (c) 2011 Openstack, LLC.
 * All Rights Reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License"); you may
 *    not use this file except in compliance with the License. You may obtain
 *    a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *    WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 *    License for the specific language governing permissions and limitations
 *    under the License.
 */

#ifndef __AGENTLIB_H__
#define __AGENTLIB_H__

#include <sys/types.h>
/* Stupid hack.  Python.h redefines this */
#undef _POSIX_C_SOURCE
#include <Python.h>

/* Support for older versions of Python */
#ifndef PyVarObject_HEAD_INIT
#define PyVarObject_HEAD_INIT(type, size)   \
        _PyObject_EXTRA_INIT            \
    1, type, size,
#endif

#ifndef PY_SSIZE_T_MAX
typedef ssize_t Py_ssize_t;
#endif

#define AGENTLIB_PUBLIC_API __attribute__ ((visibility("default")))

#include "logging.h"

#endif /* __AGENTLIB_H__ */
