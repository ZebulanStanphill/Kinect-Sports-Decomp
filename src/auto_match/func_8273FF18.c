extern int fn_8265CA20();
extern int fn_8267BE38();
extern int fn_8269A608();


int * fn_8273FF18(int *self,unsigned int flags)

{
  int *puVar1;
  int uVar2;
  
  puVar1 = (int *)*self;
  if (puVar1 != (int *)0x0) {
    uVar2 = *puVar1;
    *puVar1 = uVar2 - 1;
    if (uVar2 - 1 <= 0) {
      fn_8269A608(puVar1);
      fn_8267BE38(puVar1);
    }
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

