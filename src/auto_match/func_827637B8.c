extern int fn_8267BE38();
extern int fn_8275CEE0();
extern unsigned int lbl_820147E0;


unsigned int * fn_827637B8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820147E0;
  fn_8275CEE0();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

