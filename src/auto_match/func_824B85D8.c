typedef struct { char pad[0x100]; unsigned *tab; } Inner_824B85D8;
typedef struct {
  char cs[0x1c];
  Inner_824B85D8 *f1c;
  unsigned f20;
  int f24;
  int f28;
  void (*f2c)(Inner_824B85D8 *, int, int);
  int f30;
  int f34;
} Obj_824B85D8;
extern unsigned char fn_828EA608(Inner_824B85D8 *);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

void fn_824B85D8(Obj_824B85D8 *o, int k)
{
  if (k == 0xb && o->f1c != 0 && fn_828EA608(o->f1c) != 0 && o->f20 != 0) {
    { if (o->f1c->tab[o->f20] != 0) o->f1c->tab[o->f20] = 0; }
    if (o->f2c != 0) o->f2c(o->f1c, o->f24, o->f28);
  }
  RtlEnterCriticalSection(o);
  o->f30 = 0;
  o->f1c = 0;
  o->f20 = 0;
  o->f24 = 4;
  o->f28 = 0;
  o->f2c = 0;
  if (k != 0xb) o->f34 = 1;
  RtlLeaveCriticalSection(o);
}
