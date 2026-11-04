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
extern unsigned char fn_82575E90(unsigned, unsigned);
unsigned char fn_82575DF0(unsigned base, unsigned obj)
{ unsigned u; unsigned t; unsigned char r;
  if (obj == 0) return 1;
    t = *(unsigned *)(obj + 0x1bc); 
    if (t != 0) u = t; else u = base;
    r = fn_82575E90(obj, u + 0x78) != 0 || fn_82575E90(obj, u + 0x70) != 0 || fn_82575E90(obj, u + 0x68) != 0;
  return r; }
