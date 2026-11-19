extern int fn_8265CA20();
extern unsigned int lbl_821C1424;


unsigned int * fn_824E4780(unsigned int *self,unsigned int flags)

{
  self[3] = 0;
  *self = &lbl_821C1424;
  if ((flags & 1) != 0) {
    fn_8265CA20();
  }
  return self;
}

