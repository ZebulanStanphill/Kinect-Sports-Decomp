extern int fn_8267BE38();
extern int fn_826C2EA0();
extern unsigned int lbl_82015C38;


int fn_827526E8(int self,unsigned int flags)

{
  *(unsigned char ***)(self + 0x34) = &lbl_82015C38;
  fn_826C2EA0();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

