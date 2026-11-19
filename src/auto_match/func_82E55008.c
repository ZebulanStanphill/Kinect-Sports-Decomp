extern int fn_82E4FE40();


int * fn_82E55008(unsigned int *self,unsigned int flags)

{
  if (*self != 0) {
    fn_82E4FE40(*self);
  }
  *self = 0;
  self[2] = 0;
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

