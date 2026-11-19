extern int fn_82E4FE40();
extern int fn_82EE3128();
extern unsigned int lbl_82162C1C;


unsigned int * fn_82F39EE8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82162C1C;
  if (self[1] == 0) {
    fn_82EE3128(self,0);
  }
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

