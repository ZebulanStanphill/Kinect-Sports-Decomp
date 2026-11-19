extern int fn_8265CA20();
extern unsigned int lbl_821C55A0;


unsigned int * fn_82580300(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821C55A0;
  if ((flags & 1) != 0) {
    fn_8265CA20();
  }
  return self;
}

