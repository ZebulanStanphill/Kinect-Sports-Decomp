typedef struct Ar_82D594F0 { void **vt; } Ar_82D594F0;
typedef struct Obj_82D594F0 {
  char pad[0xc];
  void *contactMgrFactory[8][8];
  char pad10c[0x1e24 - 0x10c];
  void *shapeInheritance;
  int count;
  int flags;
} Obj_82D594F0;
extern unsigned fn_82CFF8D0(void *, unsigned);

void fn_82D594F0(Obj_82D594F0 *self, Ar_82D594F0 *ar)
{
  unsigned h; int i; int j; void **p;
  if ((self->flags & (int)0x80000000) == 0) {
    h = fn_82CFF8D0(self->shapeInheritance, self->flags << 3);
    ((void (*)(Ar_82D594F0 *, int, const char *, void *, int, unsigned))ar->vt[5])(ar, 3, "shapeInheritanceArray", self->shapeInheritance, self->count << 3, h);
  }
  for (i = 0; i < 8; i++) { p = self->contactMgrFactory[i]; for (j = 0; j < 8; j++) { ((void (*)(Ar_82D594F0 *, const char *, void *, int))ar->vt[3])(ar, "contactMgrFactory", p[j], 0); } }
}
