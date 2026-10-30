typedef struct { void *s[5]; int (*m14)(void *, void *); } VT_825274F8;
typedef struct { VT_825274F8 *vt; } Q_825274F8;
typedef struct { char pad[0x1b4]; Q_825274F8 *f1b4; } M_825274F8;
typedef struct { char pad[0x8c0]; M_825274F8 *f8c0; } B_825274F8;
typedef struct { char b0; char b1; char b2; char pad; int f4; int f8; void *fc; } E_825274F8;
typedef struct { char pad[0x1b8]; E_825274F8 *f1b8; } A_825274F8;
extern unsigned int fn_82527F50(A_825274F8 *);
extern void fn_82528210(A_825274F8 *, void *);

int fn_825274F8(A_825274F8 *a, B_825274F8 *b, void *c)
{
  E_825274F8 *e;
  if (b != 0) {
    int v;
    Q_825274F8 *q;
    M_825274F8 *m = b->f8c0;
    v = m ? ((q = m->f1b4) != 0 ? q->vt->m14(q, c) : -1) : -1;
    if (v != -1 && fn_82527F50(a) != 0) {
      e = a->f1b8;
      e->b1 = 2;
      e->fc = b;
      e->b2 = 0;
      e->f4 = v;
    }
  }
  e = a->f1b8;
  if (e != 0) {
    e->b0 = e->b1;
    fn_82528210(a, e->fc);
    e->fc = 0;
  }
  return 1;
}
