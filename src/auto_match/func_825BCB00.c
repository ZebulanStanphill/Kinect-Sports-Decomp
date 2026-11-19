extern int fn_8252DB70();
extern int fn_8265CA20();
extern unsigned int lbl_821C8C58;


unsigned int * fn_825BCB00(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821C8C58;
  fn_8252DB70();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

