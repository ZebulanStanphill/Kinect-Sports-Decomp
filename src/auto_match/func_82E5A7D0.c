extern int fn_82E4FE40();
extern int fn_82E569B0();
extern unsigned int lbl_82154D80;


unsigned int * fn_82E5A7D0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82154D80;
  if (self[1] == 0) {
    fn_82E569B0(self,0);
  }
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

