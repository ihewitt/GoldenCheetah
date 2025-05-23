/*
 * Copyright (c) 2015 Mark Liversedge (liversedge@gmail.com)
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc., 51
 * Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */


// Web based services that offer an API typically require you to sign
// up to a terms of service and will provide an access token or 'secret'
// to use when making calls. 
//
// Because these are registered to the GoldenCheetah project they are
// not made public. If you want to build with these services enabled
// you will need to request a token from the provider and add a line
// to your gcconfig.pri file off the form:
//      DEFINES += GC_TWITTER_CONSUMER_SECRET="xxxxxxx"
//
// This file is modified by the travis build scripts to replace the
// __XXXX_SECRET__ token with the secret gem held within the travis
// build environment.
//
// ********* DO NOT MODIFY THIS FILE EXCEPT TO ADD NEW ************
// ********* API TOKENS SINCE THE DEFINES ARE UPDATED  ************
// ********* AUTOMATICALLY BY THE TRAVIS BUILD SYSTEM  ************

#ifndef _GC_SECRETS_H
#define _GC_SECRETS_H 1

#ifndef GC_CLOUD_OPENDATA_SECRET
#define OPENDATA_DISABLE
#define GC_CLOUD_OPENDATA_SECRET "__GC_CLOUD_OPENDATA_SECRET__"
#endif

#ifndef GC_NOKIA_CLIENT_SECRET
#define GC_NOKIA_CLIENT_SECRET "__GC_NOKIA_CLIENT_SECRET__"
#endif

#ifndef GC_AZUM_CLIENT_SECRET
#define GC_AZUM_CLIENT_SECRET "__GC_AZUM_CLIENT_SECRET__"
#endif

#ifndef GC_DROPBOX_CLIENT_SECRET
#define GC_DROPBOX_CLIENT_SECRET "__GC_DROPBOX_CLIENT_SECRET__"
#endif

//Strava / see also Athlete parameter, default value.
#ifndef GC_STRAVA_CLIENT_ID
#define GC_STRAVA_CLIENT_ID    "83" // client id
#endif


#ifndef GC_STRAVA_CLIENT_SECRET
#define GC_STRAVA_CLIENT_SECRET "__GC_STRAVA_CLIENT_SECRET__"
#endif

#ifndef GC_CYCLINGANALYTICS_CLIENT_SECRET
#define GC_CYCLINGANALYTICS_CLIENT_SECRET "__GC_CYCLINGANALYTICS_CLIENT_SECRET__"
#endif

// CloudDB auth and app name
#ifndef GC_CLOUD_DB_BASIC_AUTH
#define GC_CLOUD_DB_BASIC_AUTH "__GC_CLOUD_DB_BASIC_AUTH__"
#endif

#ifndef GC_CLOUD_DB_APP_NAME
#define GC_CLOUD_DB_APP_NAME "__GC_CLOUD_DB_APP_NAME__"
#endif

#ifndef GC_POLARFLOW_CLIENT_SECRET
#define GC_POLARFLOW_CLIENT_SECRET "__GC_POLARFLOW_CLIENT_SECRET__"
#endif

#ifndef GC_SPORTTRACKS_CLIENT_ID
#define GC_SPORTTRACKS_CLIENT_ID "goldencheetah"
#endif
#ifndef GC_SPORTTRACKS_CLIENT_SECRET
#define GC_SPORTTRACKS_CLIENT_SECRET "__GC_SPORTTRACKS_CLIENT_SECRET__"
#endif
#endif

#ifndef GC_RWGPS_API_KEY
#define GC_RWGPS_API_KEY "__GC_RWGPS_API_KEY__"
#endif

//Nolio
#ifndef GC_NOLIO_CLIENT_ID
#define GC_NOLIO_CLIENT_ID "__GC_NOLIO_CLIENT_ID__"
#endif

#ifndef GC_NOLIO_SECRET
#define GC_NOLIO_SECRET "__GC_NOLIO_SECRET__"
#endif

// XERT
#ifndef GC_XERT_CLIENT_SECRET
#define GC_XERT_CLIENT_SECRET "__GC_XERT_CLIENT_SECRET__"
#endif

#ifndef GC_TRAINERDAY_API_KEY
#define GC_TRAINERDAY_API_KEY "__GC_TRAINERDAY_API_KEY__"
#endif
