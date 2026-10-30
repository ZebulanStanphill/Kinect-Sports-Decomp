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
typedef struct Vec_82BA06C8 {
  int pad0;
  unsigned size;
  unsigned *data;
} Vec_82BA06C8;
typedef struct Obj_82BA06C8 {
  char pad[0x814];
  Vec_82BA06C8 *vec;
} Obj_82BA06C8;
extern void fn_82BBFFC8(Vec_82BA06C8 *v, unsigned i);
extern unsigned *fn_82BC0088(Vec_82BA06C8 *v, unsigned i);

void fn_82BA06C8(Obj_82BA06C8 *o, unsigned key)
{
  unsigned *e;
  unsigned i;
  Vec_82BA06C8 *v;

  for (i = 0; i < o->vec->size; i++) {
    v = o->vec;
    if (i < v->size) {
      e = &v->data[i];
    } else {
      e = fn_82BC0088(v, i);
    }
    if (*e == key) {
      fn_82BBFFC8(o->vec, i);
    }
  }
}
