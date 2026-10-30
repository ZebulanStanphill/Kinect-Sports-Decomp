extern void fn_8267C498(void *);
typedef struct Vt_826C6DA8 { char pad[0x18]; void (*f18)(void *, int, unsigned); char pad2[0x10]; void (*f2c)(void *, void *, unsigned); } Vt;
typedef struct Obj_826C6DA8 { Vt *vt; } Obj;
typedef struct Pair_826C6DA8 { Obj **arr; unsigned n; } Pair;
typedef struct Self_826C6DA8 { int f0; int rc; char pad[0x94]; Obj *mgr; } Self;
void fn_826C6DA8(Self *s, int a, unsigned lo, unsigned hi)
{
  Pair p;
  unsigned i, k;
  if (s != 0) s->rc = s->rc + 1;
  k = lo;
  if (k <= hi) {
    do {
      s->mgr->vt->f2c(&p, s->mgr, k);
      for (i = 0; i < p.n; i++)
        p.arr[i]->vt->f18(p.arr[i], a, k);
      k++;
    } while (k <= hi);
  }
  if (s != 0) fn_8267C498(s);
}
