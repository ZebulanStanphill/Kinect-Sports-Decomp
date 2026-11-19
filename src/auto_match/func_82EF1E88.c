extern int fn_82E4FE40();
extern int fn_82EF1C08();
extern unsigned int lbl_82160508;


unsigned int * fn_82EF1E88(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82160508;
  if (self[2] == 0) {
    fn_82EF1C08(self,0);
  }
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

