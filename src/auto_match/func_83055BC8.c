extern int fn_8265CA20();
extern int fn_83050C48();
extern unsigned int lbl_8217E0C0;
extern unsigned int lbl_8217E0F0;


unsigned int * fn_83055BC8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217E0F0;
  self[0x1e] = &lbl_8217E0C0;
  fn_83050C48();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

