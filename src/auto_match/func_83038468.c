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
extern void *memcpy(void *, const void *, unsigned int);
typedef struct Obj_83038468 { char pad[0x18c]; unsigned int cur; char pad2[0x40]; unsigned int mask; } Obj_83038468;
void fn_83038468(Obj_83038468 *o, void *src)
{
  unsigned int *p = &o->cur;
  unsigned int n;
  unsigned char hit;
  memcpy(p, src, 0x48);
  if (o->cur != 0) {
    do {
      n = *p - 1;
      if (n < 0x20) {
        hit = (o->mask & (1 << n)) != 0;
      } else {
        hit = 0;
      }
    } while (!hit && (*p = n, o->cur != 0));
  }
}
