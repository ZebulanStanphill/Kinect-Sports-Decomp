extern int fn_8265CA20();
extern unsigned int lbl_821CAD1C;


unsigned int * fn_8261A200(unsigned int *self,unsigned int flags)

{
  self[1] = 0;
  *self = &lbl_821CAD1C;
  self[2] = 0;
  if ((flags & 1) != 0) {
    fn_8265CA20();
  }
  return self;
}

