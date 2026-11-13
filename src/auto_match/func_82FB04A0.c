extern int fn_82FB00A0();


int fn_82FB04A0(int *param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int uVar3;
  unsigned int uVar4;
  
  uVar3 = 1;
  uVar1 = *(unsigned int *)*param_2;
  *param_2 = (int)((unsigned int *)*param_2 + 1);
  if (((uVar1 != 0) && (uVar3 = fn_82FB00A0(param_1 + 0x1f,uVar1), uVar3 == 1)) &&
     (uVar4 = 0, uVar1 > 0)) {
    do {
      uVar2 = *(unsigned int *)*param_2;
      *param_2 = (int)((unsigned int *)*param_2 + 1);
      uVar3 = (*(int (**)())(*param_1 + 100))(param_1,uVar2);
      if (uVar3 != 1) {
        return uVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return uVar3;
}

