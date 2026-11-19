extern int fn_8267BE38();
extern int fn_82687EE0();


unsigned int * fn_82688A80(unsigned int *self,unsigned int flags)

{
  fn_82687EE0(*self,self[1]);
  fn_8267BE38(*self);
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

