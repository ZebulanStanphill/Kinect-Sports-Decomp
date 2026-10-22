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
extern void fn_8265CA20(void *p);

typedef struct Inner {
  char pad[0x2c];
  void *p2c;
} Inner;

typedef struct Outer {
  char pad[0xb68];
  int fb68;
  char pad2[0xb7c - 0xb6c];
  Inner *fb7c;
  int fb80;
} Outer;

typedef struct Obj {
  struct { void (*f0)(struct Obj *, int); } *vt;
} Obj;

void fn_82525778(Outer *param_1, Obj *param_2)
{
  if (param_2 != 0) {
    param_2->vt->f0(param_2, 1);
  }
  if (param_1->fb7c != 0) {
    if (param_1->fb7c->p2c != 0) {
      fn_8265CA20(param_1->fb7c->p2c);
      param_1->fb7c->p2c = 0;
    }
    if (param_1->fb7c != 0) {
      fn_8265CA20(param_1->fb7c);
      param_1->fb7c = 0;
    }
  }
  param_1->fb80 = 0;
  param_1->fb68 = 0;
}
