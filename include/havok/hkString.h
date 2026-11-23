// hkString (Common/Base/Container/String/hkString.h): the static string and memory
// helpers, out of line in the game (hkString.cpp, 0x82CFBB18-0x82CFC288).
#ifndef HAVOK_HKSTRING_H
#define HAVOK_HKSTRING_H

#include "havok/hkBaseTypes.h"

class hkMemoryAllocator;


class hkString {
public:
    static char HK_CALL toUpper(char ch);
    static char HK_CALL toLower(char ch);
    static int HK_CALL vsnprintf(char *buf, int count, const char *format, char *args);
    static int HK_CALL sprintf(char *buf, const char *format, ...);
    static int HK_CALL snprintf(char *buf, int count, const char *format, ...);
    static int HK_CALL strCmp(const char *lhs, const char *rhs);
    static int HK_CALL strNcmp(const char *lhs, const char *rhs, int n);
    static int HK_CALL strCasecmp(const char *lhs, const char *rhs);
    static int HK_CALL strNcasecmp(const char *lhs, const char *rhs, int n);
    static void HK_CALL strCpy(char *dst, const char *src);
    static void HK_CALL strNcpy(char *dst, const char *src, int n);
    static int HK_CALL strLen(const char *str);
    static int HK_CALL atoi(const char *str, int base = 0);
    static hkReal HK_CALL atof(const char *str);
    static const char *HK_CALL strStr(const char *str, const char *needle);
    static const char *HK_CALL strChr(const char *str, int ch);
    static const char *HK_CALL strRchr(const char *str, int ch);
    static char *HK_CALL strDup(const char *src);
    static char *HK_CALL strDup(const char *src, hkMemoryAllocator &alloc);
    static void HK_CALL strFree(char *s, hkMemoryAllocator &alloc);
    static char *HK_CALL strNdup(const char *src, int maxlen);
    static char *HK_CALL strNdup(const char *src, int maxlen, hkMemoryAllocator &alloc);
    static char *HK_CALL strLwr(char *str);
    static char *HK_CALL strUpr(char *str);

    static void HK_CALL memCpy(void *dst, const void *src, int n);
    static void HK_CALL memMove(void *dst, const void *src, int n);
    static void HK_CALL memSet(void *dst, int ch, int n);
    static int HK_CALL memCmp(const void *lhs, const void *rhs, int n);

    static hkBool HK_CALL beginsWith(const char *str, const char *prefix);
    static hkBool HK_CALL endsWith(const char *str, const char *suffix);
};

#endif
