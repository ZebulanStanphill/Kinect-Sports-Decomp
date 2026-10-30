typedef struct Y { char pad[0x14]; unsigned char flag; } Y;
typedef struct X { char pad[0x10]; Y *y; } X;
typedef struct Obj Obj;
typedef struct VT { void *s0; void *s1; X *(*get)(Obj *o); } VT;
struct Obj { VT *vt; int pad[4]; int member; };
typedef struct Node { int a, b, c; int v; Obj *o; } Node;
typedef struct Tmp { int a, b; } Tmp;
typedef struct Out { int a[2]; } Out;
extern void fn_828B5580(Tmp *t, int *m);
extern int fn_828B55F8(Tmp *t);
extern Node *fn_8289EE00(void *list);
extern void fn_8288C978(Out *out, void *list, Node *n, int z);
extern void fn_828B55B0(Tmp *t);

void fn_82890F00(char *self, Obj *o)
{
  X *x = o->vt->get(o);
  if (x->y->flag != 0) {
    struct { Tmp t; Out out; } L;
    int *pv;
    Node *n;
    int v;
    fn_828B5580(&L.t, &o->member);
    v = fn_828B55F8(&L.t);
    n = fn_8289EE00(self + 0x6c);
    pv = &n->v;
    if (pv != 0) {
      pv[0] = v;
      pv[1] = (int)o;
    }
    fn_8288C978(&L.out, self + 0x6c, n, 0);
    fn_828B55B0(&L.t);
  }
}
