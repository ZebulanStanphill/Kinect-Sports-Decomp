extern int fn_8265C990();
extern int fn_82C06390();
extern int fn_82C0BB48();
extern unsigned int lbl_820ECDE0;


unsigned int * fn_82C0C1E0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820ECDE0;
  fn_82C0BB48();
  fn_82C06390(self);
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x208c800e);
  }
  return self;
}

