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
typedef struct Item { void *p; int pad[7]; } Item;
typedef struct Obj { void *vt; Item *items; int f8; int fc; unsigned int count; } Obj;
extern int fn_8265CA20(void *p);
extern int fn_8265CAA0(void *p);
extern unsigned int lbl_821BAE9C;

void fn_8245CE28(Obj *param_1)
{
  unsigned int i;

  param_1->vt = &lbl_821BAE9C;
  if (param_1->items != 0) {
    for (i = 0; i < param_1->count; i++) {
      if (param_1->items[i].p != 0) {
        fn_8265CA20(param_1->items[i].p);
        param_1->items[i].p = 0;
      }
    }
    fn_8265CAA0(param_1->items);
    param_1->items = 0;
  }
}
