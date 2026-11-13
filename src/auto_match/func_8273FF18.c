extern int fn_8265CA20();
extern int fn_8267BE38();
extern int fn_8269A608();


int * fn_8273FF18(int *param_1,unsigned int param_2)

{
  int *puVar1;
  int uVar2;
  
  puVar1 = (int *)*param_1;
  if (puVar1 != (int *)0x0) {
    uVar2 = *puVar1;
    *puVar1 = uVar2 - 1;
    if (uVar2 - 1 <= 0) {
      fn_8269A608(puVar1);
      fn_8267BE38(puVar1);
    }
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

