extern int fn_826323F8();


typedef struct { char pad[0x26b8]; int a; int b; char pad2[0x10]; } Slot_82636398;
struct Obj_82636398;
typedef struct { void *f0; void (*f4)(struct Obj_82636398 *); } VT_82636398;
typedef struct Obj_82636398 { VT_82636398 *vt; } Obj_82636398;
typedef struct {
  char pad0[0x10];
  Slot_82636398 slot[2];
  int f4db0, f4db4;
  Obj_82636398 *f4db8;
  int f4dbc, f4dc0;
  char pad2[0x4ddc - 0x4dc4];
  int f4ddc, f4de0, f4de4, f4de8, f4dec, f4df0;
} Ctx_82636398;

void fn_82636398(Ctx_82636398 *p)
{
  unsigned i;
  int n;
  Slot_82636398 *s;
  int *q;
  p->f4db0 = 1;
  q = &p->slot[0].b;
  i = 0;
  do {
    fn_826323F8((char *)q - 0x26bc);
    q[-1] = i == 0;
    i++;
    *q = 1;
    q += 0x9b4;
  } while (i < 2);
  p->f4dbc = 0;
  s = p->slot;
  p->f4db4 = 0;
  n = 2;
  do {
    fn_826323F8(s);
    s->b = 1;
    n--;
    s++;
  } while (n != 0);
  if (p->f4db8 != 0) {
    p->f4db8->vt->f4(p->f4db8);
    p->f4db8 = 0;
  }
  p->f4dc0 = 0;
  p->f4ddc = 0;
  p->f4de0 = -1;
  p->f4de8 = 0;
  p->f4df0 = 0;
}
