extern int fn_8267BE38();
extern int fn_8267C540();
extern unsigned int lbl_82005700;
extern unsigned int lbl_82006850;


unsigned int * fn_8269B820(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82006850;
  self[3] = &lbl_82005700;
  fn_8267C540();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

