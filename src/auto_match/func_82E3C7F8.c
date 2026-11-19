extern int fn_82E3BCC8();
extern int fn_82E4FE40();
extern unsigned int lbl_82152F14;


unsigned int * fn_82E3C7F8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82152F14;
  if (self[1] == 0) {
    fn_82E3BCC8(self,0);
  }
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

