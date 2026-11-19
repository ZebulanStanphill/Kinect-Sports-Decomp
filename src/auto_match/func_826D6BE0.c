extern int fn_8265CA20();


int * fn_826D6BE0(int *self,unsigned int flags)

{
  int *piVar1;
  
  piVar1 = (int *)*self;
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 8))(piVar1,self[1]);
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

