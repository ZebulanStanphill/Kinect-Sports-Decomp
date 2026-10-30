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
typedef struct Obj_827F9300 { int p0; void *f4; char pad[0x14]; unsigned f1c; unsigned f20; char pad2[0x6c]; int f90; } Obj_827F9300;
extern void fn_827F7268(Obj_827F9300 *);
extern void fn_827F77A8(Obj_827F9300 *, int);
extern void fn_827F8190(Obj_827F9300 *, int);
extern void fn_827F87A0(Obj_827F9300 *, int);
extern void fn_827F8B30(Obj_827F9300 *, int);
extern void fn_827F9090(Obj_827F9300 *, int);

void fn_827F9300(Obj_827F9300 *o)
{
  if (o->f1c != 0) {
    if (o->f4 != 0 && o->f90 == 0) {
      fn_827F8190(o, 0);
    } else {
      fn_827F9090(o, 0);
    }
  } else if (o->f20 != 0) {
    fn_827F8B30(o, 0);
  } else if (o->f4 != 0 && o->f90 == 0) {
    fn_827F77A8(o, 0);
  } else {
    fn_827F87A0(o, 0);
  }
  fn_827F7268(o);
}
