extern int fn_8267BE38();
extern int fn_826AE560();


unsigned int * fn_826C2528(unsigned int *self,unsigned int flags)

{
  fn_826AE560(*self,self[1]);
  fn_8267BE38(*self);
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

