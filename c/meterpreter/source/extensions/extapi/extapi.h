/*!
 * @file extapi.h
 * @brief Entry point and intialisation declrations for the extended API extension.
 */
#ifndef _METERPRETER_SOURCE_EXTENSION_EXTAPI_EXTAPI_H
#define _METERPRETER_SOURCE_EXTENSION_EXTAPI_EXTAPI_H

#include "../../common/common.h"

#define TLV_TYPE_EXTENSION_EXTAPI	0

#define TLV_TYPE_EXT_WINDOW_ENUM_GROUP              MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 1)
#define TLV_TYPE_EXT_WINDOW_ENUM_PID                MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 2)
#define TLV_TYPE_EXT_WINDOW_ENUM_HANDLE             MAKE_CUSTOM_TLV(TLV_META_TYPE_QWORD,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 3)
#define TLV_TYPE_EXT_WINDOW_ENUM_TITLE              MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 4)
#define TLV_TYPE_EXT_WINDOW_ENUM_INCLUDEUNKNOWN     MAKE_CUSTOM_TLV(TLV_META_TYPE_BOOL,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 5)

#define TLV_TYPE_EXT_SERVICE_ENUM_GROUP             MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 10)
#define TLV_TYPE_EXT_SERVICE_ENUM_NAME              MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 11)
#define TLV_TYPE_EXT_SERVICE_ENUM_DISPLAYNAME       MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 12)
#define TLV_TYPE_EXT_SERVICE_ENUM_PID               MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 13)
#define TLV_TYPE_EXT_SERVICE_ENUM_STATUS            MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 14)
#define TLV_TYPE_EXT_SERVICE_ENUM_INTERACTIVE       MAKE_CUSTOM_TLV(TLV_META_TYPE_BOOL,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 15)

#define TLV_TYPE_EXT_SERVICE_QUERY_STARTTYPE        MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 20)
#define TLV_TYPE_EXT_SERVICE_QUERY_DISPLAYNAME      MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 21)
#define TLV_TYPE_EXT_SERVICE_QUERY_STARTNAME        MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 22)
#define TLV_TYPE_EXT_SERVICE_QUERY_PATH             MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 23)
#define TLV_TYPE_EXT_SERVICE_QUERY_LOADORDERGROUP   MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 24)
#define TLV_TYPE_EXT_SERVICE_QUERY_INTERACTIVE      MAKE_CUSTOM_TLV(TLV_META_TYPE_BOOL,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 25)
#define TLV_TYPE_EXT_SERVICE_QUERY_DACL             MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 26)

#define TLV_TYPE_EXT_CLIPBOARD_DOWNLOAD             MAKE_CUSTOM_TLV(TLV_META_TYPE_BOOL,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 35)

#define TLV_TYPE_EXT_CLIPBOARD_TYPE_TEXT            MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 40)
#define TLV_TYPE_EXT_CLIPBOARD_TYPE_FILE            MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 41)
#define TLV_TYPE_EXT_CLIPBOARD_TYPE_FILE_NAME       MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 42)
#define TLV_TYPE_EXT_CLIPBOARD_TYPE_FILE_SIZE       MAKE_CUSTOM_TLV(TLV_META_TYPE_QWORD,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 43)

#define TLV_TYPE_EXT_CLIPBOARD_TYPE_IMAGE_JPG       MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 45)
#define TLV_TYPE_EXT_CLIPBOARD_TYPE_IMAGE_JPG_DIMX  MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 46)
#define TLV_TYPE_EXT_CLIPBOARD_TYPE_IMAGE_JPG_DIMY  MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 47)
#define TLV_TYPE_EXT_CLIPBOARD_TYPE_IMAGE_JPG_DATA  MAKE_CUSTOM_TLV(TLV_META_TYPE_RAW,       TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 48)

#endif
