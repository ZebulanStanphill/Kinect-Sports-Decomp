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
typedef struct { char pad[8]; int refs; } Rc_826C64E0;
typedef struct { Rc_826C64E0 *rc; char pad[0x44]; int f48; char pad4c[0xc]; unsigned char f58; } Cell_826C64E0;
typedef struct { char pad[0x14]; void *heap; } Ctx_826C64E0;
typedef struct {
  char pad0[0xa0];
  Ctx_826C64E0 *ctx;
  char pada4[0x148 - 0xa4];
  char f148[0x80];
  Cell_826C64E0 *cell;
} Obj_826C64E0;
extern void *fn_8267B890(void *, int, int);
extern void fn_826944C8(Rc_826C64E0 *);
extern Cell_826C64E0 *fn_826C5118(void *, void *);

void fn_826C64E0(Obj_826C64E0 *o, Rc_826C64E0 **param_2)
{
  Rc_826C64E0 *rc;
  Cell_826C64E0 *cell;
  void *mem;
  Rc_826C64E0 *t;

  if (o->cell == 0) {
    mem = fn_8267B890(o->ctx->heap, 0x5c, 0);
    o->cell = mem != 0 ? fn_826C5118(mem, o->f148) : 0;
  }
  rc = *param_2;
  cell = o->cell;
  rc->refs = rc->refs + 1;
  t = cell->rc;
  if (--t->refs == 0) {
    fn_826944C8(t);
  }
  cell->rc = rc;
  o->cell->f58 = o->cell->f58 | 1;
  o->cell->f48 = *(int *)o->cell->rc;
  t = *param_2;
  if (--t->refs == 0) {
    fn_826944C8(t);
  }
}
