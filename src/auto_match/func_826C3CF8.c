extern int fn_8267BE38();
extern int fn_8274BA20();
extern unsigned int lbl_8200B88C;
extern unsigned int lbl_8200B890;
extern unsigned int lbl_8200B8E4;


unsigned int * fn_826C3CF8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8200B8E4;
  self[4] = &lbl_8200B890;
  self[0xc] = &lbl_8200B88C;
  fn_8274BA20();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

