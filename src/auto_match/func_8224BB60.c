extern int fn_822315A0();
extern int fn_8265CA20();
extern unsigned int lbl_82197048;


unsigned int * fn_8224BB60(unsigned int *self,unsigned int flags)

{
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
  if (self[0xb] != 0) {
    fn_822315A0(self[0xb]);
  }
  if (self[9] != 0) {
    fn_822315A0(self[9]);
  }
  *self = &lbl_82197048;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

