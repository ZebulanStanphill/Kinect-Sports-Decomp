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
struct Obj_82EE8E58;
typedef struct VT_82EE8E58 {
  int pad[5];
  int (*f14)(struct Obj_82EE8E58 *, int);
  int pad2[3];
  int (*f24)(struct Obj_82EE8E58 *, __int64, int, int);
} VT_82EE8E58;
typedef struct Obj_82EE8E58 {
  VT_82EE8E58 *vt;
} Obj_82EE8E58;
typedef struct Host_82EE8E58 {
  char pad[0x98];
  int f98;
  int pad9c;
  Obj_82EE8E58 *fa0;
} Host_82EE8E58;
extern int fn_82EE88B0(void);

int fn_82EE8E58(Host_82EE8E58 *h, int a, __int64 b, int c)
{
  int r = 0;

  if (h->f98 != 0 || (r = fn_82EE88B0()) >= 0) {
    if (b == 0) {
      h->fa0->vt->f14(h->fa0, a);
    } else {
      r = h->fa0->vt->f24(h->fa0, b, a, c);
    }
  }
  return r;
}
