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
typedef struct Sub_822B8030 { struct { char pad[0x18]; void (*f18)(void *); } *vt; } Sub_822B8030;
typedef struct Dev2_822B8030 {
  struct { char pad[0xac]; int (*fac)(void *); } *vt;
  char pad[0x1b4 - 4];
  Sub_822B8030 *f1b4;
} Dev2_822B8030;
typedef struct X_822B8030 { char pad[0x44]; int idx; } X_822B8030;
typedef struct Ctx_822B8030 { char pad[0x4c]; X_822B8030 *f4c; char pad2[0x8c0 - 0x50]; Dev2_822B8030 *f8c0; } Ctx_822B8030;
typedef struct Obj_822B8030 { Ctx_822B8030 *ctx; int f4; char pad[0x368 - 8]; int f368; char f36c[1]; } Obj_822B8030;
extern void fn_82532F98(int *, char *);
extern void fn_8255EBE0(int, char *);
extern void fn_8255EDD0(int, char *);
extern void fn_827F0180(int, int, int, int, int);
extern char lbl_82190260[];

void fn_822B8030(Obj_822B8030 *o)
{
  Dev2_822B8030 *d;
  int *e;

  if (o->f368 != 0) {
    fn_8255EDD0(o->f4, o->f36c);
  } else {
    fn_8255EBE0(o->f4, o->f36c);
  }
  d = o->ctx->f8c0;
  e = ((int **)d)[o->ctx->f4c->idx + 0x20];
  if (d->vt->fac(d) == 0) {
    fn_827F0180(o->f4, e[0], 1, 0, 0);
  } else {
    fn_827F0180(o->f4, e[1], 1, 0, 0);
    d->f1b4->vt->f18(d->f1b4);
    fn_82532F98(e, lbl_82190260);
  }
}
