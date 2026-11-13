extern unsigned int fn_8279AA48();
extern int fn_827A8610();


int fn_8279AE60(int param_1, unsigned int param_2)
{
  int piVar1;
  unsigned int uVar2;
  int r;

  r = 0;
  uVar2 = fn_8279AA48();
  if (param_2 > uVar2) {
    param_2 = uVar2;
  }
  if (*(unsigned int *)(param_1 + 0x38) != param_2) {
    fn_827A8610(param_1 + 0x24, param_2);
    piVar1 = *(int *)(param_1 + 0x10);
    if (piVar1 != 0) {
      (*(void (**)(int, int, unsigned))(*(int *)piVar1 + 0xc))(piVar1, param_1, param_2);
    }
    r = 1;
  }
  return r;
}
