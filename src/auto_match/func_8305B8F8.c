extern int fn_83057318();
extern int fn_8305B7D8();
extern unsigned int lbl_8217E650;


unsigned int * fn_8305B8F8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217E650;
  fn_8305B7D8();
  if ((flags & 1) != 0) {
    fn_83057318(self);
  }
  return self;
}

