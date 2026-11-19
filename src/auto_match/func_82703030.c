extern int fn_8267BE38();
extern int fn_826A27D8();


int * fn_82703030(unsigned int *self,unsigned int flags)

{
  if (*self != 0) {
    fn_8267BE38(*self);
  }
  fn_826A27D8(self + 2);
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

