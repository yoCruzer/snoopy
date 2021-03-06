/*
 * SNOOPY LOGGER
 *
 * File: misc.c
 *
 * Copyright (c) 2014 bostjan@a2o.si
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */



/*
 * Include all required C resources
 */
#include <stdio.h>
#include <stdlib.h>



/*
 * Include all snoopy-related resources
 */
#include "snoopy.h"
#include "misc.h"
#include "configuration.h"



/*
 * snoopy_init
 *
 * Description:
 *     Handles snoopy initialization/startup specifics
 *
 * Params:
 *     (none)
 *
 * Return:
 *     void
 */
void snoopy_init ()
{
    snoopy_configuration_ctor();
}



/*
 * snoopy_cleanup
 *
 * Description:
 *     Handles all snoopy deinitialization/shutdown specifics
 *
 * Params:
 *     (none)
 *
 * Return:
 *     void
 */
void snoopy_cleanup ()
{
    snoopy_configuration_dtor();
}
