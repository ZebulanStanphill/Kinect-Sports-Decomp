extern void *memcpy(void *, const void *, unsigned int);
extern int fn_8269B930(void *, unsigned int);
extern int fn_826A1440(void *, void *, void *);

typedef struct VT_826A17F0 {
  int f0;
  void (*f4)(void *self);
} VT_826A17F0;

typedef struct Obj_826A17F0 {
  VT_826A17F0 *vt;
  int pad4[4];
  int f14;
  int pad18[3];
  unsigned char b24[0x20];
  float f44, f48, f4c, f50, f54, f58;
  char pad5c[0x84 - 0x5c];
  unsigned int f84;
  char f88[4];
} Obj_826A17F0;

void fn_826A17F0(Obj_826A17F0 *o, Obj_826A17F0 *s)
{
  o->f14 = s->f14;
  memcpy((unsigned char *)o + 0x24, (unsigned char *)s + 0x24, 0x20);
  o->vt->f4(o);
  o->f44 = s->f44;
  o->f48 = s->f48;
  o->f4c = s->f4c;
  o->f50 = s->f50;
  o->f54 = s->f54;
  o->f58 = s->f58;
  fn_826A1440(o->f88, o->f88, s->f88);
  if (s->f84 != 0) {
    fn_8269B930(o, s->f84);
  }
}
