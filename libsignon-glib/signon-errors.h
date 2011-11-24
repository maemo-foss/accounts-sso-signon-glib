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

#ifndef __LIBSIGNON_ERRORS_H__
#define __LIBSIGNON_ERRORS_H__

#include <glib.h>
#include <glib-object.h>
#include "signon-enum-types.h"

#define SIGNON_ERROR (signon_error_quark())

typedef enum {
    SIGNON_ERROR_UNKNOWN = 1,                  /*< nick=Unknown >*/
    SIGNON_ERROR_INTERNAL_SERVER = 2,          /*< nick=InternalServer >*/
    SIGNON_ERROR_INTERNAL_COMMUNICATION = 3,   /*< nick=InternalCommunication >*/
    SIGNON_ERROR_PERMISSION_DENIED = 4,        /*< nick=PermissionDenied >*/

    SIGNON_ERROR_METHOD_NOT_KNOWN = 101,       /*< nick=MethodNotKnown >*/
    SIGNON_ERROR_SERVICE_NOT_AVAILABLE,        /*< nick=ServiceNotAvailable >*/
    SIGNON_ERROR_INVALID_QUERY,                /*< nick=InvalidQuery >*/

    SIGNON_ERROR_METHOD_NOT_AVAILABLE = 201,  /*< nick=MethodNotAvailable >*/
    SIGNON_ERROR_IDENTITY_NOT_FOUND,          /*< nick=IdentityNotFound >*/
    SIGNON_ERROR_STORE_FAILED,                /*< nick=StoreFailed >*/
    SIGNON_ERROR_REMOVE_FAILED,               /*< nick=RemoveFailed >*/
    SIGNON_ERROR_SIGNOUT_FAILED,              /*< nick=SignOutFailed >*/
    SIGNON_ERROR_IDENTITY_OPERATION_CANCELED, /*< nick=IdentityOperationCanceled >*/
    SIGNON_ERROR_CREDENTIALS_NOT_AVAILABLE,   /*< nick=CredentialsNotAvailable >*/
    SIGNON_ERROR_REFERENCE_NOT_FOUND,         /*< nick=ReferenceNotFound >*/

    SIGNON_ERROR_MECHANISM_NOT_AVAILABLE = 301,   /*< nick=MechanismNotAvailable >*/
    SIGNON_ERROR_MISSING_DATA,                /*< nick=MissingData >*/
    SIGNON_ERROR_INVALID_CREDENTIALS,         /*< nick=InvalidCredentials >*/
    SIGNON_ERROR_NOT_AUTHORIZED,              /*< nick=NotAuthorized >*/
    SIGNON_ERROR_WRONG_STATE,                 /*< nick=WrongState >*/
    SIGNON_ERROR_OPERATION_NOT_SUPPORTED,     /*< nick=OperationNotSupported >*/
    SIGNON_ERROR_NO_CONNECTION,               /*< nick=NoConnection >*/
    SIGNON_ERROR_NETWORK,                     /*< nick=Network >*/
    SIGNON_ERROR_SSL,                         /*< nick=Ssl >*/
    SIGNON_ERROR_RUNTIME,                     /*< nick=Runtime >*/
    SIGNON_ERROR_SESSION_CANCELED,            /*< nick=SessionCanceled >*/
    SIGNON_ERROR_TIMED_OUT,                   /*< nick=TimedOut >*/
    SIGNON_ERROR_USER_INTERACTION,            /*< nick=UserInteraction >*/
    SIGNON_ERROR_OPERATION_FAILED,            /*< nick=OperationFailed >*/
    SIGNON_ERROR_ENCRYPTION_FAILED,           /*< nick=EncryptionFailed >*/
    SIGNON_ERROR_TOS_NOT_ACCEPTED,            /*< nick=TOSNotAccepted >*/
    SIGNON_ERROR_FORGOT_PASSWORD,             /*< nick=ForgotPassword >*/
    SIGNON_ERROR_METHOD_OR_MECHANISM_NOT_ALLOWED, /*< nick=MethodOrMechanismNotAllowed >*/
    SIGNON_ERROR_INCORRECT_DATE,             /*< nick=IncorrectDate >*/
    SIGNON_ERROR_USER_ERROR = 400            /*< nick=User >*/
} SignonError;

GQuark signon_error_quark (void);


#endif
