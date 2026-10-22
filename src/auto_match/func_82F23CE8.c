typedef unsigned int uint;
extern void fn_82F0F9A0(void *, int);
extern void fn_82F23A50(void *);
extern void fn_82F23C88(void *);

struct Ent { int pad; int v[6]; char rest[0x114 - 0x1c]; };
struct S {
  char pad0[0x2d8]; uint count;
  char pad1[0x630 - 0x2dc]; int x630;
  char pad2[0xaf0 - 0x634]; int state;
  char pad3[0x1e54 - 0xaf4]; struct Ent *ents;
};

void fn_82F23CE8(struct S *p)
{
  uint i;
  int j;
  struct Ent *e;

  if (p->x630 == 0 || (p->state != 0 && p->state != 4)) {
    int s = p->state;
    if (s == 0 || s == 4) {
      fn_82F0F9A0(p, 0xd);
      return;
    }
    if (s == 2) {
      e = p->ents;
      for (i = 0; i < p->count; i++, e++) {
        int *v = e->v;
        for (j = 0; j < 6; j++, v++) {
          if (*v > 0)
            *v = 1;
        }
      }
    }
    fn_82F23A50(p);
    fn_82F23C88(p);
  }
}
