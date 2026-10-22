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
extern int fn_822315A0();
extern int fn_82232540();
extern unsigned char fn_8223AAC0();
extern int fn_8223B930();
extern int fn_82240688();
extern int fn_8265C9E0();
extern unsigned int lbl_82196BD0;
extern unsigned int lbl_821980A4;
extern unsigned int lbl_821AD588;

typedef struct Ptr { void *ptr; int *rep; } Ptr;

Ptr *fn_82256288(Ptr *param_1)
{
  int *rep;
  int *obj;
  int *mem;

  mem = (int *)fn_8265C9E0(0xb28);
  if (mem != 0) {
    mem[1] = 1;
    mem[0] = (int)&lbl_821AD588;
    mem[2] = 1;
    obj = mem + 3;
    if (obj != 0) {
      fn_82232540(obj);
      *obj = (int)&lbl_82196BD0;
      fn_8223B930(obj + 0x267);
      fn_8223B930(obj + 0x281);
      *obj = (int)&lbl_821980A4;
      fn_82240688(obj + 0x29b);
      fn_82240688(obj + 0x2b1);
    }
    rep = mem;
  }
  else {
    rep = 0;
  }
  obj = rep + 3;
  param_1->ptr = 0;
  param_1->rep = 0;
  if (rep != 0) {
    if (fn_8223AAC0(rep) != 0) {
      if (param_1->rep != 0) {
        fn_822315A0(param_1->rep);
      }
      param_1->rep = rep;
      param_1->ptr = obj;
    }
    fn_822315A0(rep);
  }
  return param_1;
}
