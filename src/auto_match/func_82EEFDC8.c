extern int fn_82E4FE40();
extern int fn_82EEF998();
extern unsigned int lbl_82160304;


unsigned int * fn_82EEFDC8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82160304;
  if (self[1] == 0) {
    fn_82EEF998(self,0);
  }
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

