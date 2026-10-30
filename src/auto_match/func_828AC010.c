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
extern int fn_8265C9E0();
extern unsigned int lbl_82024528;


typedef struct VT_828AC010 { void (*del)(void *, int); } VT_828AC010;
typedef struct Obj_828AC010 { VT_828AC010 *vt; int val; } Obj_828AC010;

Obj_828AC010 **fn_828AC010(Obj_828AC010 **param_1, int *param_2)
{
  Obj_828AC010 *n, *mem;
  Obj_828AC010 *old;

  mem = (Obj_828AC010 *)fn_8265C9E0(8);
  if (mem != 0) {
    n = mem;
    n->vt = (VT_828AC010 *)&lbl_82024528;
    n->val = *param_2;
  } else {
    n = 0;
  }
  old = *param_1;
  *param_1 = n;
  if (old != 0) {
    old->vt->del(old, 1);
  }
  return param_1;
}
