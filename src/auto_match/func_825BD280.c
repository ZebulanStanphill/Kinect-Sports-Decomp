typedef struct {
  int a;
  int b;
} Pair;

typedef struct {
  char pad0[0x34];
  void *f34;
  char pad38[0x58 - 0x38];
  void *f58;
  char pad5c[0x88 - 0x5c];
  void *f88;
  char pad8c[0x214 - 0x8c];
  unsigned char f214;
  char pad215[0x21c - 0x215];
  Pair *begin;
  Pair *end;
} Obj;

extern int fn_82517978();
extern int fn_8256BF18();
extern int fn_8256C5D0();
extern int fn_82599418();
extern int fn_825BD360();
extern void *fn_827D5670();
extern int fn_827D5700();
extern int fn_827D9EA8();
extern int fn_827DA660();
extern int fn_827DC520();
extern int fn_82814F70();
extern int lbl_83265A24;

void fn_825BD280(Obj *p)
{
  Pair *it;
  Pair *end;
  struct { int first; int second; } tmp;

  fn_825BD360();
  for (it = p->begin, end = p->end; it != end; it++) {
    tmp.first = 0;
    tmp.second = 0;
    fn_82517978(&tmp, it->a, it->b, 0);
    fn_8256C5D0(fn_8256BF18(), &tmp);
  }
  while (fn_827D5670(lbl_83265A24, 1) != 0) {
    fn_827D5700(lbl_83265A24);
    fn_82599418();
  }
  if (p->f88 != 0) {
    if (p->f214 != 0) {
      fn_82814F70(p->f88);
    }
    else {
      fn_827DA660(p->f34, p->f88, fn_827D9EA8(p->f58));
    }
    p->f88 = 0;
  }
  if (p->f58 != 0) {
    fn_827DC520(p->f34, p->f58);
    p->f58 = 0;
  }
}
