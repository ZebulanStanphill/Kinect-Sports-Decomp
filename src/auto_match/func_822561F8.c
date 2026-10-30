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
extern void *fn_8265C9E0(unsigned int);
extern void fn_82232B50(void *, void *);
extern void fn_8289D6D0(void *, int);
extern char lbl_82197080[];
extern char lbl_82198094[];

typedef struct Obj_822561F8 {
  void *vtbl;
  char pad4[0x9c8];
  void *vtbl9cc;
  char pad9d0[0x50];
  void *vtbla20;
} Obj_822561F8;

Obj_822561F8 *fn_822561F8(void *param_1)
{
  Obj_822561F8 *o;

  o = (Obj_822561F8 *)fn_8265C9E0(0xa74);
  if (o != 0) {
    fn_82232B50(o, param_1);
    o->vtbl = lbl_82198094;
    fn_8289D6D0(&o->vtbl9cc, 0);
    o->vtbl9cc = lbl_82197080;
    fn_8289D6D0(&o->vtbla20, 0);
    o->vtbla20 = lbl_82197080;
    return o;
  }
  return 0;
}
