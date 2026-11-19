extern int fn_827E4458();
extern int fn_827E7BB0();
extern unsigned int lbl_8201DB60;


unsigned int * fn_827E80F0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8201DB60;
  fn_827E4458();
  if ((flags & 1) != 0) {
    fn_827E7BB0(self);
  }
  return self;
}

