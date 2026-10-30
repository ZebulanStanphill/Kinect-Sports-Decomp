typedef struct Vt_82FB6D90 { void *s0; void (*addref)(void *); } Vt_82FB6D90;
typedef struct Iface_82FB6D90 { Vt_82FB6D90 *vt; } Iface_82FB6D90;
extern void fn_82FABD78(void *self, int b);
extern void fn_82FAD0D0(void *self);
extern void fn_82FB7E88(void *self, Iface_82FB6D90 *p);
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8216D9C4;
extern unsigned int lbl_8216D9D8;
extern unsigned int lbl_8216D9E0;
extern unsigned int lbl_8216D9F8;

void *fn_82FB6D90(int *self, Iface_82FB6D90 *p, int b)
{
  fn_82FABD78(self, b);
  fn_82FAD0D0(self + 0x10);
  self[0x16] = (int)p;
  *self = (int)&lbl_8216D9F8;
  self[1] = (int)&lbl_8216D9E0;
  self[4] = (int)&lbl_8216D9D8;
  self[6] = (int)&lbl_8216CC7C;
  self[0x10] = (int)&lbl_8216D9C4;
  fn_82FB7E88(self + 0x17, p);
  if ((Iface_82FB6D90 *)self[0x16] != 0) {
    ((Iface_82FB6D90 *)self[0x16])->vt->addref((void *)self[0x16]);
  }
  return self;
}
