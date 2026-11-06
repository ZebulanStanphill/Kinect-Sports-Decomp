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
typedef unsigned __int64 unsigned;
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
extern int fn_826824B0();
struct Sub_8269ED78;
struct VT_8269ED78 { int pad[5]; unsigned (*f)(struct Sub_8269ED78 *, unsigned, unsigned, unsigned); };
struct Sub_8269ED78 { struct VT_8269ED78 *vt; };
struct Obj_8269ED78 { int a; int b; unsigned rc; int c; struct Sub_8269ED78 sub; };
unsigned fn_8269ED78(int param_1,unsigned param_2,unsigned param_3,unsigned param_4)
{
  struct Obj_8269ED78 *o; unsigned r; struct Sub_8269ED78 *s;
  o = (struct Obj_8269ED78*)(*(code *)(*(int *)(param_1 + -0x68) + 0xe4))(param_1 + -0x68);
  if (o != 0) {
    o->rc = (o->rc + 1) & 0x8fffffff;
    s = &o->sub;
    r = s->vt->f(s,param_2,param_3,param_4);
  } else r = 0;
  if (o != 0) fn_826824B0(o);
  return r;
}
