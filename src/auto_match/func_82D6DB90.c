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


struct Obj_82D6DB90;
typedef struct Vt_82D6DB90 { char pad[0x24]; void (*f24)(struct Obj_82D6DB90 *, void *); } Vt_82D6DB90;
typedef struct Obj_82D6DB90 { Vt_82D6DB90 *vt; } Obj_82D6DB90;
typedef struct Own_82D6DB90 { char pad[0xc]; Obj_82D6DB90 *fc; Obj_82D6DB90 *f10; } Own_82D6DB90;

void fn_82D6DB90(Own_82D6DB90 *o, void *a)
{
  o->fc->vt->f24(o->fc, a);
  if (o->f10 != 0) {
    o->f10->vt->f24(o->f10, a);
  }
}
