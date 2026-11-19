extern int fn_8267BE38();
extern int fn_826C1AD8();
extern unsigned int lbl_8200B760;
extern unsigned int lbl_8200B7F0;


unsigned int * fn_826C2F78(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8200B760;
  self[4] = &lbl_8200B7F0;
  fn_826C1AD8();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

