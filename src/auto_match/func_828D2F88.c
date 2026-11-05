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
typedef struct Obj_828D2F88 { int pad[2]; int h; int f; } Obj_828D2F88;
extern unsigned char fn_828ACCE8(int);
extern unsigned char fn_828AD740(int);
extern void fn_828D2DB8(void *, int);

unsigned char fn_828D2F88(Obj_828D2F88 *self)
{
  unsigned char a = self->f == 0 && fn_828ACCE8(self->h) != 0;
  unsigned char r = a && fn_828AD740(self->h) != 0;
  if (r) {
    fn_828D2DB8(self, 3);
  }
  return r;
}
