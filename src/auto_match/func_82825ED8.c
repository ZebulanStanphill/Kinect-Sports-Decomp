extern int fn_8265CA20();


int * fn_82825ED8(unsigned int *self,unsigned int flags)

{
  if (*self != 0) {
    fn_8265CA20(*self);
  }
  *self = 0;
  self[1] = 0;
  self[2] = 0;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

