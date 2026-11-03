extern void fn_822709D0(void *);
extern void fn_824731D8(void *, unsigned, int);
extern void fn_8251FA58(void *);
extern void fn_82522ED8(void *);
extern int fn_8266F6B8(void);
extern void fn_822315A0(void *);
extern int lbl_832766D8;

struct Itf_82471FC8;
typedef struct VT_82471FC8 {
  void (*f0)(struct Itf_82471FC8 *, int);
  int p4;
  void (*f8)(struct Itf_82471FC8 *);
  int p[0x54 / 4 - 3];
  void (*f54)(struct Itf_82471FC8 *, int);
} VT_82471FC8;
typedef struct Itf_82471FC8 { VT_82471FC8 *vt; } Itf_82471FC8;
typedef struct Slot_82471FC8 { void *p; char pad[0x104 - 4]; } Slot_82471FC8;
typedef struct Obj_82471FC8 {
  char pad0[0xc];
  unsigned count;
  char pad1[0x1c - 0x10];
  Slot_82471FC8 slots[6];
  char pad2[0xf44 - 0x1c - 6 * 0x104];
  int pf44;
  void *pf48;
  char pad3[4];
  void *pf50;
  Itf_82471FC8 *pf54;
  int pf58;
  Itf_82471FC8 *pf5c;
  Itf_82471FC8 *pf60;
} Obj_82471FC8;

void fn_82471FC8(Obj_82471FC8 *o)
{
  unsigned i;
  Itf_82471FC8 *t;
  int k;
  Slot_82471FC8 *s;
  t = o->pf54;
  lbl_832766D8 = 0;
  fn_822709D0(t);
  o->pf54->vt->f54(o->pf54, o->pf58);
  { int *p58 = &o->pf58; *p58 = 0; }
  o->pf54->vt->f8(o->pf54);
  if (o->pf54 != 0) o->pf54->vt->f0(o->pf54, 1);
  t = o->pf5c;
  o->pf54 = 0;
  t->vt->f0(t, 0);
  fn_82522ED8(t);
  t = o->pf60;
  t->vt->f0(t, 0);
  fn_82522ED8(t);
  if (o->pf44 != 0) {
    for (i = 0; i < o->count; i++) {
      fn_824731D8(o, i, fn_8266F6B8());
    }
  }
  s = o->slots;
  k = 6;
  do {
    if (s->p != 0) {
      fn_8251FA58(s->p);
      s->p = 0;
    }
    k--;
    s++;
  } while (k != 0);
  if (o->pf50 != 0) fn_822315A0(o->pf50);
  if (o->pf48 != 0) fn_822315A0(o->pf48);
}
