extern int fn_8267BE38();
extern int fn_826C1AD8();
extern unsigned int lbl_820071D8;
extern unsigned int lbl_8200722C;


unsigned int * fn_826A8618(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8200722C;
  self[4] = &lbl_820071D8;
  fn_826C1AD8();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

