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
typedef struct { int v[4]; } Member_82888AD8;
typedef struct { int f[6]; Member_82888AD8 m; } Sub_82888AD8;
typedef struct { int a; Sub_82888AD8 sub; int g0, g1, g2; unsigned char c0, c1; char pad[6]; __int64 q; } Obj_82888AD8;
extern void fn_82881168(Member_82888AD8 *, Member_82888AD8 *);

Obj_82888AD8 * fn_82888AD8(Obj_82888AD8 *param_1, Obj_82888AD8 *param_2)
{
  Sub_82888AD8 *d = &param_1->sub;
  Sub_82888AD8 *s = &param_2->sub;
  param_1->a = param_2->a;
  d->f[0] = s->f[0];
  d->f[1] = s->f[1];
  d->f[2] = s->f[2];
  d->f[3] = s->f[3];
  d->f[4] = s->f[4];
  d->f[5] = s->f[5];
  fn_82881168(&d->m, &s->m);
  param_1->g0 = param_2->g0;
  param_1->g1 = param_2->g1;
  param_1->g2 = param_2->g2;
  param_1->c0 = param_2->c0;
  param_1->c1 = param_2->c1;
  param_1->q = param_2->q;
  return param_1;
}
