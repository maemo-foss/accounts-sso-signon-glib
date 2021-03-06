/* vi: set et sw=4 ts=4 cino=t0,(0: */
/* -*- Mode: C; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This file is part of libsignon-glib
 *
 * Copyright (C) 2009-2010 Nokia Corporation.
 *
 * Contact: Alberto Mardegan <alberto.mardegan@nokia.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */
#ifndef _SIGNON_UTILS_H_
#define _SIGNON_UTILS_H_

#include <glib-object.h>

G_GNUC_INTERNAL
GHashTable *signon_copy_variant_map (const GHashTable *old_map);
G_GNUC_INTERNAL
void signon_stringarray_to_value (gpointer key, gpointer value, gpointer user_data);
G_GNUC_INTERNAL
void signon_free_gvalue (gpointer val);

#endif //_SIGNON_UTILS_H_
