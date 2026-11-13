extern int fn_827196D8();


void fn_827197F8(int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int iVar4;
  
  uVar1 = param_1[1];
  fn_827196D8(param_1,param_1,param_2);
  if (param_2 > uVar1) {
    iVar4 = uVar1 * 0x10 + *param_1;
    param_2 = param_2 - uVar1;
    uVar3 = 0;
    if (param_2 != 0) {
      puVar2 = (unsigned int *)(iVar4 + 0xc);
      do {
        if (iVar4 != 0) {
          puVar2[-2] = 0;
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x10;
        puVar2 = puVar2 + 4;
      } while (uVar3 < param_2);
    }
  }
  return;
}

