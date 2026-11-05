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
extern int fn_82CE4338(int *, int, int);
extern int fn_82D8E318(int *, int, int, void *);
extern int fn_82D8DBB8();

typedef struct VT_82D8DC48 { int pad[3]; void (*f0c)(void *, int); } VT_82D8DC48;
typedef struct Base_82D8DC48 { VT_82D8DC48 *vt; } Base_82D8DC48;
typedef struct Obj_82D8DC48 { int pad[10]; int *items; int count; } Obj_82D8DC48;

void fn_82D8DC48(Obj_82D8DC48 *self)
{
  int i;
  if (self->count != 0) {
    if (self->count > 1) fn_82D8E318(self->items, 0, self->count - 1, (void *)fn_82D8DBB8);
    for (i = 0; i < self->count; i++) {
      Base_82D8DC48 *b = (Base_82D8DC48 *)((char *)self - 0x10);
      b->vt->f0c(b, self->items[i]);
    }
    fn_82CE4338(self->items, self->count, 4);
    self->count = 0;
  }
}
