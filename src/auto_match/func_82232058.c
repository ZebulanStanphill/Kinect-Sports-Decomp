extern int fn_8223BC88();
extern int fn_8265CA20();
extern unsigned int lbl_82196A34;


unsigned int * fn_82232058(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82196A34;
  fn_8223BC88();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

