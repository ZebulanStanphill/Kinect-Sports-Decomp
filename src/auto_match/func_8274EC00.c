extern int fn_8267BE38();
extern int fn_8274E378();
extern unsigned int lbl_82013790;
extern unsigned int lbl_820137E4;


unsigned int * fn_8274EC00(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820137E4;
  self[4] = &lbl_82013790;
  fn_8274E378();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

