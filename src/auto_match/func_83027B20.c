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
typedef struct Obj Obj;
typedef struct ObjVtbl {
  void (*dtor)(Obj *self, int flags);
} ObjVtbl;
struct Obj {
  ObjVtbl *vtbl;
};
typedef struct Owner {
  char pad0[0x14];
  Obj *obj;
  char pad18[0x14];
  unsigned short id;
} Owner;
extern Obj *fn_82FA5060(int heap, int size);
extern void fn_82FA5190(int heap, Obj *p);
extern void fn_83021E58(Obj *p);
extern int fn_83022038(Obj *p, unsigned short id, int flag);
extern void fn_83022140(Obj *p);
extern int lbl_831BC768;


int fn_83027B20(Owner *param_1)

{
  Obj *o;
  int result;
  
  result = 1;
  o = fn_82FA5060(lbl_831BC768,0x30);
  param_1->obj = o;
  if (o != 0) {
    fn_83021E58(o);
  }
  if (param_1->obj == 0 || fn_83022038(param_1->obj,param_1->id,1) != 1) {
    result = 0;
    if (param_1->obj != 0) {
      fn_83022140(param_1->obj);
      param_1->obj->vtbl->dtor(param_1->obj,0);
      fn_82FA5190(lbl_831BC768,param_1->obj);
      param_1->obj = 0;
    }
  }
  return result;
}
