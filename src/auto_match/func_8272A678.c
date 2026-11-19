extern int fn_8267BE38();
extern int fn_82725EF0();


unsigned int * fn_8272A678(unsigned int *self,unsigned int flags)

{
  fn_82725EF0(*self,self[1]);
  fn_8267BE38(*self);
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

