extern int fn_8223B998();
extern int fn_8265CA20();
extern unsigned int lbl_82196A24;


unsigned int * fn_822320B0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82196A24;
  fn_8223B998();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

