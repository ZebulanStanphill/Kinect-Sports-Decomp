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
typedef struct { int x0, y0, x1, y1; } Rect_828384F8;
typedef struct { int w, h, z; } Size_828384F8;
typedef struct { char pad0[0x18]; int f18; char pad1[0x28 - 0x1c]; int f28; char pad2[0x34 - 0x2c]; int f34; } Self_828384F8;
extern void fn_82A999C8(int, int, int *, int *, int *);
extern void fn_82A99180(int, int, int, int, int, int, int, int);
extern void fn_82A99540(int, int, int, int, int, int, int, int, Rect_828384F8 *, int);

void fn_828384F8(Self_828384F8 *self, int x, int y, int w, int h, int a, int b, int c, int p9, int p10)
{
  Size_828384F8 sz;
  Rect_828384F8 r;
  fn_82A999C8(self->f28, self->f34, &sz.w, &sz.h, &sz.z);
  if (x == 0 && y == 0 && w == sz.w && h == sz.h) {
    fn_82A99180(a, b, c, p9, self->f18, 0, self->f28, self->f34);
  } else {
    r.x0 = x;
    r.x1 = x + w;
    r.y0 = y;
    r.y1 = y + h;
    fn_82A99540(a, b, c, p9, self->f18, 0, self->f28, self->f34, &r, p10);
  }
}
