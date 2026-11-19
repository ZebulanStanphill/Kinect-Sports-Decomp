extern int fn_8267BE38();
extern int fn_8274E378();
extern unsigned int lbl_82013B58;
extern unsigned int lbl_82013BAC;


unsigned int * fn_82751600(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82013BAC;
  self[4] = &lbl_82013B58;
  fn_8274E378();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

