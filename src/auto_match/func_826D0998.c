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
extern int fn_8267B890();
extern int fn_826C6958();
extern unsigned int lbl_831E7E64;

typedef struct Obj {
  int a;
  int b;
  int c[7];
} Obj;

typedef struct Owner {
  char pad[0x1b4];
  Obj *obj;
} Owner;

static Obj *Obj_Init(Obj *o)
{
  o->c[0] = 0;
  o->c[1] = 0;
  o->c[2] = 0;
  o->c[3] = 0;
  o->c[4] = 0;
  o->c[5] = 0;
  o->c[6] = 0;
  o->a = 100;
  o->b = 0;
  return o;
}

void fn_826D0998(Owner *param_1,int param_2)

{
  Obj *o;
  
  if (param_1->obj == 0) {
    o = (Obj *)fn_8267B890(lbl_831E7E64,0x24,0);
    param_1->obj = o ? Obj_Init(o) : 0;
  }
  param_1->obj->a = param_2;
  fn_826C6958(param_1);
}
