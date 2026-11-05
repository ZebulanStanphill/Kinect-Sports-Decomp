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
typedef struct Obj_82C07228 { char pad[0x218]; void *h; } Obj_82C07228;
extern int fn_82C114A0(void *, int, int, unsigned *);

int fn_82C07228(Obj_82C07228 *self, int a, int b, unsigned *c)
{
  int hr;
  if (self->h == 0) {
    return 0x805000a8;
  }
  hr = fn_82C114A0(self->h, a, b, c);
  if (hr >= 0 && *c == 0) {
    self->h = 0;
  }
  return hr;
}
