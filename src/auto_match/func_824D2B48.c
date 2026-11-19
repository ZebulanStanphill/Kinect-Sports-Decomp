extern int fn_823B78E0();
extern int fn_8265CA20();
extern unsigned int lbl_821B5BEC;


unsigned int * fn_824D2B48(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821B5BEC;
  if (self[1] != 0) {
    fn_823B78E0(self[1],self);
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

