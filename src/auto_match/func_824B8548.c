extern void *fn_8265C9E0(int);
extern void RtlInitializeCriticalSection(void *);
extern void *lbl_83276744;

typedef struct Obj_824B8548 {
  char pad[0x1c];
  int f1c, f20, f24, f28, f2c, f30, f34;
} Obj_824B8548;

void *fn_824B8548(void)
{
  Obj_824B8548 *p;
  void *r;

  if (lbl_83276744 == 0) {
    p = fn_8265C9E0(0x38);
    if (p != 0) {
      p->f1c = 0;
      p->f20 = 0;
      p->f24 = 4;
      p->f28 = 0;
      p->f2c = 0;
      p->f30 = 0;
      p->f34 = 1;
      RtlInitializeCriticalSection(p);
      r = p;
    } else {
      r = 0;
    }
    lbl_83276744 = r;
    return r;
  }
  return lbl_83276744;
}
