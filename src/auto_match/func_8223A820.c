extern int fn_822315A0();
extern int fn_8265CA20();


int fn_8223A820(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 0xc) != 0) {
    fn_822315A0(*(int *)(self + 0xc));
  }
  if (*(unsigned int *)(self + 4) != 0) {
    fn_822315A0(*(unsigned int *)(self + 4));
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

