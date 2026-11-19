extern int fn_82268238();
extern int fn_8265CA20();
extern unsigned int lbl_821C097C;


unsigned int * fn_824C3768(unsigned int *self,unsigned int flags)

{
  unsigned int iVar1;
  
  iVar1 = self[4];
  if (iVar1 != 0) {
    fn_82268238(iVar1);
    fn_8265CA20(iVar1);
  }
  *self = &lbl_821C097C;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

