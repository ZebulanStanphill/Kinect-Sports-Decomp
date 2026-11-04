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
typedef struct Obj { struct OVt *vt; } Obj;
struct OVt { void *f0, *f4, *f8, *fc; int (*f10)(Obj *); };
typedef struct { int a; Obj **b; int c; int d; int e; int f; int g; } Msg;
typedef struct { char pad[8]; int m8; char pad2[0x24]; char sub[0x54]; unsigned char m84; } Self;
extern void fn_82D71478(void *, Msg *);

void fn_82D5D618(Self *self, Obj **o, int a, int b, int c)
{
  Msg m;
  if (self->m84 == 0) {
    m.a = a;
    m.b = o;
    m.f = self->m8;
    m.e = b;
    m.g = c;
    m.d = (*m.b)->vt->f10(*m.b);
    fn_82D71478(self->sub, &m);
  }
}
