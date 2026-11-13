typedef struct O_826FA490 O_826FA490;
typedef struct { int pad[0x78 / 4]; unsigned m78; } Q_826FA490;
typedef struct { void *p; int rest[21]; } L_826FA490;
struct O_826FA490 { struct { int pad[8]; void (*f20)(O_826FA490 *, L_826FA490 *); int pad2[14]; Q_826FA490 *(*f5c)(O_826FA490 *); } *vt; };
extern void fn_8267C498(void *);
extern void fn_826C6248(L_826FA490 *);
extern void fn_826D2B68(O_826FA490 *, L_826FA490 *, unsigned, int, int, int, int, int, int);

void fn_826FA490(O_826FA490 *a, O_826FA490 *b)
{
  L_826FA490 l;
  unsigned t;
  fn_826C6248(&l);
  a->vt->f20(a, &l);
  t = b->vt->f5c(b)->m78;
  fn_826D2B68(b, &l, t + 8, 0, 0, -1, 4, 0, 0);
  if (l.p != 0) {
    fn_8267C498(l.p);
  }
}
