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
typedef struct VT_82F34870 { int pad[2]; void (*f8)(void *); } VT_82F34870;
typedef struct Obj_82F34870 { VT_82F34870 *vt; } Obj_82F34870;
typedef struct Hold_82F34870 { void *vt; Obj_82F34870 *f4; unsigned count; Obj_82F34870 **arr; } Hold_82F34870;
extern void fn_82E4FE40(void *);
extern int lbl_82162AA8;

void fn_82F34870(Hold_82F34870 *o)
{
  unsigned i;
  o->vt = &lbl_82162AA8;
  if (o->f4 != 0) {
    o->f4->vt->f8(o->f4);
    o->f4 = 0;
  }
  if (o->arr != 0 && o->count != 0) {
    for (i = 0; i < o->count; i++) {
      if (o->arr[i] != 0) {
        o->arr[i]->vt->f8(o->arr[i]);
        o->arr[i] = 0;
      }
    }
  }
  if (o->arr != 0) {
    fn_82E4FE40(o->arr);
  }
  o->arr = 0;
}
