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
extern void fn_82414950(void *, int, int);
extern void fn_82536590(void *, int);
typedef struct Vec_82425060 { int pad[2]; char *first; char *last; } Vec_82425060;
typedef struct Obj_82425060 { char pad[0xc0c]; int f0c0c; char pad2[0xe2c - 0xc10]; char e2c[8]; char e34[0x2b20 - 0xe34]; Vec_82425060 *cur; char pad4[0x2b50 - 0x2b24]; void *h; } Obj_82425060;
typedef struct Hdr_82425060 { int pad; Vec_82425060 *vec; Obj_82425060 *obj; } Hdr_82425060;

void fn_82425060(Hdr_82425060 *p)
{
  Vec_82425060 *vec = p->vec;
  int id;
  if ((vec->last - vec->first) / 0x1ac == 1) {
    if (vec == p->obj->cur && p->obj->f0c0c != 0) {
      fn_82536590(p->obj->e2c, 0);
    }
    id = 0x1a;
  } else {
    if (vec == p->obj->cur && p->obj->f0c0c != 0) {
      fn_82536590(p->obj->e34, 0);
    }
    id = 0x1b;
  }
  fn_82414950(p->obj->h, 0, id);
}
