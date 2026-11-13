typedef struct D_826F3F28 { char pad[0x20]; int v; } D_826F3F28;
typedef struct C_826F3F28 { char pad[0xc]; D_826F3F28 *d; } C_826F3F28;
typedef struct B_826F3F28 { char pad[0x1c]; C_826F3F28 *c; } B_826F3F28;
typedef struct A_826F3F28 { char pad[0x2c]; B_826F3F28 *b; } A_826F3F28;
typedef struct Out_826F3F28 { unsigned int result; A_826F3F28 *a; } Out_826F3F28;
typedef struct Obj2_826F3F28 Obj2_826F3F28;
typedef struct Vt2_826F3F28 { int pad[2]; unsigned int (*f8)(Obj2_826F3F28 *); } Vt2_826F3F28;
struct Obj2_826F3F28 { Vt2_826F3F28 *vt; };
typedef struct Sub_826F3F28 Sub_826F3F28;
typedef struct SVt_826F3F28 { int pad[6]; unsigned int (*f18)(Sub_826F3F28 *); } SVt_826F3F28;
struct Sub_826F3F28 { SVt_826F3F28 *vt; };
typedef struct Node_826F3F28 { char pad[0xc]; Sub_826F3F28 *sub; } Node_826F3F28;
typedef struct Src_826F3F28 { char pad[8]; int key; Node_826F3F28 *node; char data[1]; } Src_826F3F28;
typedef struct Loc_826F3F28 { int a50; int pad54; int first; unsigned int second; } Loc_826F3F28;
extern void fn_826DC448(int, int *, int *);
extern Obj2_826F3F28 *fn_826D7C00(int *, A_826F3F28 *);
extern void fn_82687270(unsigned int);
extern void fn_82689840(Sub_826F3F28 *, int);
extern unsigned int fn_8267B890(int, int, int);
extern unsigned int fn_826F3790(unsigned int, Node_826F3F28 *, int *, void *, int);

int fn_826F3F28(int a, Src_826F3F28 *src, Out_826F3F28 *out, int d, int e)
{
  Node_826F3F28 *n = src->node;
  Sub_826F3F28 *sub;
  unsigned int r;
  unsigned int mem;
  Loc_826F3F28 loc;
  if (n == 0) {
    Obj2_826F3F28 *o;
    loc.a50 = src->key;
    loc.first = 0;
    loc.second = 0;
    fn_826DC448(out->a->b->c->d->v, &loc.first, &loc.a50);
    o = fn_826D7C00(&loc.first, out->a);
    if (o != 0 && (o->vt->f8(o) & 0xff00) == 0x100) {
      n = (Node_826F3F28 *)o;
    }
    if (loc.first == 0 && loc.second != 0) {
      fn_82687270(loc.second);
    }
  }
  if (n != 0) {
    sub = n->sub;
    if (sub->vt->f18(sub) == 0) {
      fn_82689840(sub, 0);
    }
    mem = fn_8267B890(e, 0x30, 0);
    if (mem != 0) {
      loc.a50 = 0;
      r = fn_826F3790(mem, n, &loc.a50, src->data, e);
    }
    else {
      r = 0;
    }
    if (out->result != 0) {
      fn_82687270(out->result);
    }
    out->result = r;
    return 1;
  }
  return 0;
}
