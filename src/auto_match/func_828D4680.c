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
typedef struct { char pad0[8]; int state; char pad1[4]; int f10; int f14; int f18; } Obj_828D4680;
extern unsigned char fn_828AD0F8(int);
extern void fn_828AD188(int);
extern unsigned char fn_828AD488(int);
extern void fn_828AD4A0(int);
extern unsigned char fn_828D4600(Obj_828D4680 *);
extern void fn_828E0338(Obj_828D4680 *);
extern void fn_828E0390(Obj_828D4680 *, int);
extern void fn_828E0B48(Obj_828D4680 *);
extern void fn_828E0D30(Obj_828D4680 *);
extern void fn_82BA02A8(Obj_828D4680 *);

void fn_828D4680(Obj_828D4680 *o)
{
  if (fn_828AD0F8(o->f14) == 1) {
    if (fn_828AD0F8(o->f18) == 0) {
      fn_828AD188(o->f18);
    }
  } else {
    if (fn_828AD488(o->f14) == 1 && fn_828AD488(o->f18) == 0) {
      fn_828AD4A0(o->f18);
    }
  }
  if (o->state != 3) {
    if (fn_828D4600(o) != 0) {
      fn_828E0390(o, 3);
    }
  } else {
    if (fn_828D4600(o) == 0) {
      fn_828E0390(o, 0);
    }
  }
  switch ((unsigned)o->state) {
  case 0:
    fn_828E0B48(o);
    break;
  case 1:
    fn_828E0338(o);
    break;
  case 2:
    fn_828E0D30(o);
    break;
  case 3:
    fn_82BA02A8(o);
    break;
  }
}
