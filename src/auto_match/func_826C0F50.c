extern int fn_8267BE38();
extern int fn_826C2EA0();
extern unsigned int lbl_8200B690;
extern unsigned int lbl_8200B6E8;


unsigned int * fn_826C0F50(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8200B6E8;
  self[4] = &lbl_8200B690;
  fn_826C2EA0();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

