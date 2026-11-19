extern int fn_822315A0();
extern int fn_8265CA20();
extern unsigned int lbl_82197048;


unsigned int * fn_82400BD0(unsigned int *self,int flags)

{
  if (self[0x10] != 0) {
    fn_822315A0(self[0x10]);
  }
  if (self[0xe] != 0) {
    fn_822315A0(self[0xe]);
  }
  if (self[0xc] != 0) {
    fn_822315A0(self[0xc]);
  }
  if (self[10] != 0) {
    fn_822315A0(self[10]);
  }
  if (self[8] != 0) {
    fn_822315A0(self[8]);
  }
  *self = &lbl_82197048;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

