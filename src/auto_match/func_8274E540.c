extern int fn_8267BE38();
extern int fn_826C1AD8();
extern unsigned int lbl_82013688;
extern unsigned int lbl_820136DC;


unsigned int * fn_8274E540(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820136DC;
  self[4] = &lbl_82013688;
  fn_826C1AD8();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

