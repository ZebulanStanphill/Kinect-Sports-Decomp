extern int fn_8267BE38();
extern int fn_8274E378();
extern unsigned int lbl_82013998;
extern unsigned int lbl_820139EC;


unsigned int * fn_82750308(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820139EC;
  self[4] = &lbl_82013998;
  fn_8274E378();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

