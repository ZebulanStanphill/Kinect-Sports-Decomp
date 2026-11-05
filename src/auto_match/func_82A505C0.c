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
typedef struct Lock_82A505C0 Lock_82A505C0;
typedef struct LVT_82A505C0 {
  int pad[2];
  void (*f08)(Lock_82A505C0 *);
  int pad0c[2];
  void (*f14)(Lock_82A505C0 *);
} LVT_82A505C0;
struct Lock_82A505C0 { LVT_82A505C0 *vt; };
typedef struct Inner_82A505C0 {
  char pad[0x2c];
  Lock_82A505C0 lock;
} Inner_82A505C0;
typedef struct Obj_82A505C0 {
  char pad[0x30];
  Inner_82A505C0 *p30;
  char pad34[0x48 - 0x34];
  float f48;
} Obj_82A505C0;

void fn_82A505C0(Obj_82A505C0 *o, float *out)
{
  o->p30->lock.vt->f08(&o->p30->lock);
  *out = o->f48;
  o->p30->lock.vt->f14(&o->p30->lock);
}
