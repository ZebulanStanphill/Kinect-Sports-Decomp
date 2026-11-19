extern int fn_8259C9E8();
extern int fn_8265CA20();


unsigned __int64 fn_8259C998(unsigned __int64 self,unsigned int flags)

{
  fn_8259C9E8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

