typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
//BODY
extern int tolower(int);

unsigned int fn_82818520(unsigned char *p)
{
  unsigned int h = 0;
  unsigned int g;
  for (;;) {
    unsigned int c = *p;
    if (*p < 0x80) {
      c = tolower((char)*p);
    } else c = (char)*p;
    p++;
    if (c == 0) break;
    h = (h << 4) + c;
    g = h & 0xf0000000;
    if (g != 0) {
      h = (g >> 24 | g) ^ h;
    }
  }
  return h;
}
