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
extern unsigned char fn_82773748(void *, unsigned);
extern unsigned char fn_827737E8(void *, unsigned, int);

unsigned char fn_82773860(void *o, unsigned a, unsigned b)
{
  unsigned c = a & 0xffff;
  unsigned char sp;
  if (c == 0) return 0;
  sp = c == 9 || c == 0xd || c == 0x20 || c == 0x3000;
  return (sp || fn_82773748(o, b) || fn_82773748(o, a) || c == 0x2d) &&
         fn_827737E8(o, b, 1) == 0 && fn_827737E8(o, a, 2) == 0;
}
