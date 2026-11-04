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
extern int tolower(int);


typedef struct Ctx { int a; char *end; } Ctx;
int fn_828FA428(Ctx *c, char *start, int *kind)
{
  char *p = start;
  int u = 0, l = 0;
  while (p < c->end) {
    if (u == 0 && tolower(*p) == 0x75) { u = 1; p++; continue; }
    if (l == 0 && tolower(*p) == 0x6c) { l = 1; p++; continue; }
    break;
  }
  if (kind != 0) {
    if (u) *kind = 4; else if (l) *kind = 3;
  }
  return p - start;
}
