extern int fn_822315A0();
extern int fn_8265CA20();


int fn_827E4148(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 8) != 0) {
    fn_822315A0(*(int *)(self + 8));
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

