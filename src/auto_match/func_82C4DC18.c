typedef struct Q_82C4DC18 { char pad[8]; unsigned a; unsigned b; } Q_82C4DC18;
typedef struct R_82C4DC18 { int pad[2]; Q_82C4DC18 *q; } R_82C4DC18;
typedef struct O_82C4DC18 { int pad0; unsigned flags; int pad1; unsigned f0c; unsigned f10; int pad2; R_82C4DC18 *r; int h; } O_82C4DC18;
typedef struct P2_82C4DC18 { unsigned first, second; } P2_82C4DC18;
typedef struct P3_82C4DC18 { unsigned first, second, third; } P3_82C4DC18;
extern int fn_82C107F8(int, int, int, void *);

int fn_82C4DC18(O_82C4DC18 *p, int a2, unsigned n, unsigned *o1, unsigned *o2, unsigned *o3)
{
  struct { P2_82C4DC18 p90; P2_82C4DC18 p88; P3_82C4DC18 p80; } L;
  int h;
  Q_82C4DC18 *q;
  unsigned a, b, w, ht;
  int r;

  h = p->h;
  q = p->r->q;
  a = q->a;
  b = q->b;
  if ((p->flags & 2) != 0) {
    w = p->f0c;
  } else {
    w = a;
  }
  if ((p->flags & 4) != 0) {
    ht = p->f10;
  } else {
    ht = b;
  }
  if (w > a) {
    L.p88.first = w;
    L.p88.second = a;
    r = fn_82C107F8(a2, h, 0x90090, &L.p88);
    if (r < 0) {
      if ((unsigned)r != 0x80500003 && (unsigned)r != 0x805000b6) {
        return r;
      }
      goto L1;
    }
  } else {
L1:
    if (w != a) {
      return 0x80500002;
    }
  }
  L.p90.first = w;
  if (ht > b) {
    L.p88.first = ht;
    L.p88.second = b;
    r = fn_82C107F8(a2, h, 0x900a0, &L.p88);
    if (r >= 0) goto L2;
    if ((unsigned)r != 0x80500003 && (unsigned)r != 0x805000b6) {
      return r;
    }
  }
  if (w != a) {
    return 0x80500002;
  }
L2:
  L.p90.second = ht;
  r = fn_82C107F8(a2, h, 0x900b0, &L.p90);
  if (r < 0) {
    return r;
  }
  *o2 = L.p90.second;
  *o1 = L.p90.first;
  if ((L.p90.first & 1) == 0 && (L.p90.second & 1) == 0 && n == 0xc) {
    L.p80.third = L.p90.second;
    L.p80.first = 1;
    L.p80.second = (L.p90.first * 0xc + 7) >> 3;
    r = fn_82C107F8(a2, h, 0x90070, &L.p80);
    if (r >= 0) {
      *o3 = (L.p90.second * L.p90.first * 3 >> 1) & 0x1fffffff;
      return r;
    }
    return r;
  }
  return 0x80500002;
}
