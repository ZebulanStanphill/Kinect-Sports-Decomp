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
typedef struct Obj_829E65C0 { int pad[6]; void *obj; } Obj_829E65C0;
extern unsigned char fn_829E82D0(void *);
extern void *fn_829E8378(void *);
extern void *fn_82A28568(void *, int, int);
extern char *lbl_832179FC;

int fn_829E65C0(Obj_829E65C0 *self)
{
  void *a = fn_82A28568(*(void **)(lbl_832179FC + 0x8f4cc), 0, 0x14);
  void *o;
  if (a != 0) {
    o = fn_829E8378(a);
  } else {
    o = 0;
  }
  self->obj = o;
  if (o == 0) {
    return 0x8007000e;
  }
  return fn_829E82D0(o) == 0 ? 0x8007000e : 0;
}
