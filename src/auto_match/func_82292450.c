extern int fn_822315A0();
extern int fn_8229A230();
extern int fn_8265CA20();
extern int fn_82672660();


unsigned int * fn_82292450(unsigned int *self,unsigned int flags)

{
  fn_82672660(*self,self);
  fn_8229A230(self);
  if (self[1] != 0) {
    fn_822315A0(self[1]);
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

