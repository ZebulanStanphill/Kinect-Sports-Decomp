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
typedef struct Obj_826CCE78 Obj_826CCE78;
typedef struct Sub_826CCE78 Sub_826CCE78;
typedef struct SVt_826CCE78 { char pad[0xb8]; unsigned char (*fb8)(Sub_826CCE78 *); } SVt_826CCE78;
struct Sub_826CCE78 { SVt_826CCE78 *vt; };
typedef struct Vt_826CCE78 { char pad[0x50]; Sub_826CCE78 *(*f50)(Obj_826CCE78 *, int); } Vt_826CCE78;
struct Obj_826CCE78 {
  Vt_826CCE78 *vt;
  char pad[0x8c - 4];
  unsigned int : 23;
  unsigned int mode : 2;
  unsigned int : 7;
  char pad2[0xa0 - 0x90];
  int arg;
};
extern void fn_8269AD40(Obj_826CCE78 *, int);
extern void fn_826CBFF0(Obj_826CCE78 *, int);

void fn_826CCE78(Obj_826CCE78 *o, int v)
{
  if (v == 0) {
    o->mode = 3;
  }
  else if (v > 0) {
    Sub_826CCE78 *s = o->vt->f50(o, 0);
    if (s != 0) {
      if (s->vt->fb8(s) != 0) {
        o->mode = 3;
      }
      else {
        o->mode = 2;
      }
    }
  }
  fn_8269AD40(o, o->arg);
  fn_826CBFF0(o, o->arg);
}
