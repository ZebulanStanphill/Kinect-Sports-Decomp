extern int fn_8265CA20();
extern int fn_82893C48();
extern int fn_828B2848();
extern int fn_828B2BF8();
extern unsigned int lbl_82197D98;


unsigned int * fn_8224C418(unsigned int *self,unsigned int flags)

{
  unsigned int uVar1;
  
  *self = &lbl_82197D98;
  uVar1 = fn_828B2BF8();
  fn_828B2848(uVar1,self);
  fn_82893C48(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

