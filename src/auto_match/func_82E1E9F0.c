typedef struct VT_82E1E9F0 {
  void *f0, *f4, *f8, *fc;
  void (*f10)(void *, unsigned, unsigned);
} VT_82E1E9F0;

typedef struct Obj_82E1E9F0 {
  char pad0[0xf];
  unsigned char fF;
  char pad10[0x54 - 0x10];
  unsigned char *p54;
  struct { VT_82E1E9F0 *vt; } *p58;
} Obj_82E1E9F0;

extern void fn_82E21B90(void *);
extern unsigned fn_82E21BB0(void *, unsigned, unsigned);
extern void *fn_8265CA60(void);
extern unsigned fn_82E21BC8(void *, unsigned, unsigned, unsigned, unsigned);
extern void fn_82E21BA0(void *);
extern void fn_82E1E768(void *, unsigned, unsigned);
extern void fn_82E1E6E0(void *, unsigned, unsigned);
extern void fn_8265CAA0(void *);

void fn_82E1E9F0(Obj_82E1E9F0 *self, unsigned param_2, unsigned p3in)
{
  unsigned param_3 = p3in;
  char buf[16];
  void *h = 0;
  unsigned t;
  if (self->p54[0] != 0) {
    fn_82E21B90(buf);
    t = fn_82E21BB0(buf, param_2, param_3);
    h = fn_8265CA60();
    param_3 = fn_82E21BC8(buf, param_2, param_3, (unsigned)h, t);
    param_2 = (unsigned)h;
    fn_82E21BA0(buf);
  }
  if (self->p54[1] != 0 && self->p58 != 0)
    self->p58->vt->f10(self->p58, param_2, param_3);
  if (self->fF != 0)
    fn_82E1E768(self, param_2, param_3);
  else
    fn_82E1E6E0(self, param_2, param_3);
  if (h != 0)
    fn_8265CAA0(h);
}
