extern int fn_8251FA58();
extern int fn_827F5F50();
extern int fn_827F6010();
extern unsigned int lbl_821C52A4;


unsigned int * fn_8255FA10(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821C52A4;
  if (self[0x77] != 0) {
    fn_8251FA58(self[0x78]);
    self[0x77] = 0;
  }
  fn_827F6010(self);
  if ((flags & 1) != 0) {
    fn_827F5F50(self);
  }
  return self;
}

