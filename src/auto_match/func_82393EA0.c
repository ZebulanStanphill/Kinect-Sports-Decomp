extern int fn_822315A0();
extern int fn_8265CA20();
extern unsigned int lbl_82197048;


unsigned int * fn_82393EA0(unsigned int *self,int flags)

{
  if (self[0xd] != 0) {
    fn_822315A0(self[0xd]);
  }
  if (self[0xb] != 0) {
    fn_822315A0(self[0xb]);
  }
  if (self[9] != 0) {
    fn_822315A0(self[9]);
  }
  if (self[7] != 0) {
    fn_822315A0(self[7]);
  }
  *self = &lbl_82197048;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

