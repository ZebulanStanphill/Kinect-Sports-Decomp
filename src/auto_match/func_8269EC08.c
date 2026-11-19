extern int fn_8267BE38();
extern int fn_8269A990();


unsigned int * fn_8269EC08(unsigned int *self,unsigned int flags)

{
  fn_8269A990(*self,self[1]);
  fn_8267BE38(*self);
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

