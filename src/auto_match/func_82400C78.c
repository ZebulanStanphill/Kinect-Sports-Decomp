extern void fn_822315A0(unsigned int);
extern void fn_8265CA20(void *);
extern unsigned int lbl_82197048;


unsigned int *fn_82400C78(unsigned int *self, unsigned int flags)

{
  if (self[0x1f] != 0) {
    fn_822315A0(self[0x1f]);
  }
  if (self[0x1d] != 0) {
    fn_822315A0(self[0x1d]);
  }
  if (self[0x1b] != 0) {
    fn_822315A0(self[0x1b]);
  }
  if (self[0x19] != 0) {
    fn_822315A0(self[0x19]);
  }
  if (self[0x17] != 0) {
    fn_822315A0(self[0x17]);
  }
  if (self[0x15] != 0) {
    fn_822315A0(self[0x15]);
  }
  if (self[0x13] != 0) {
    fn_822315A0(self[0x13]);
  }
  if (self[0x11] != 0) {
    fn_822315A0(self[0x11]);
  }
  if (self[0xf] != 0) {
    fn_822315A0(self[0xf]);
  }
  if (self[0xd] != 0) {
    fn_822315A0(self[0xd]);
  }
  *self = (unsigned int)&lbl_82197048;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

