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
struct Obj_82E174C8;
typedef struct VT_82E174C8 {
  int pad[4];
  unsigned int (*f10)(struct Obj_82E174C8 *, int);
} VT_82E174C8;
typedef struct Obj_82E174C8 {
  VT_82E174C8 *vt;
} Obj_82E174C8;
typedef struct Host_82E174C8 {
  char pad[0x1c];
  Obj_82E174C8 *f1c;
} Host_82E174C8;
extern unsigned int fn_82D00450(void *, int, int);

unsigned int fn_82E174C8(Host_82E174C8 *h, int a)
{
  unsigned int r;

  r = fn_82D00450((char *)h + 0xc, a, 0);
  if (r == 0) {
    if (h->f1c != 0) {
      r = h->f1c->vt->f10(h->f1c, a);
    } else {
      r = 0;
    }
  }
  return r;
}
