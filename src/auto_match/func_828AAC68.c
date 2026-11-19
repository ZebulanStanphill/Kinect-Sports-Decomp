extern int fn_8265CA20();
extern int fn_82893C48();
extern int fn_828AA8F8();
extern unsigned int lbl_820244C8;


unsigned int * fn_828AAC68(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820244C8;
  fn_828AA8F8();
  fn_82893C48(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

