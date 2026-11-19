extern int fn_8267BE38();
extern int fn_82757CE8();
extern unsigned int lbl_8200BD80;


unsigned int * fn_82758330(unsigned int *self,unsigned int flags)

{
  fn_82757CE8(self + 0xe);
  fn_8267BE38(self[0xe]);
  *self = &lbl_8200BD80;
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

