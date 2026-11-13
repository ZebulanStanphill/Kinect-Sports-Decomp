extern int fn_82772400();


void fn_82772470(int *param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  
  if ((param_3 & 0xffffffff) != 0) {
    uVar1 = param_1[1];
    fn_82772400(param_1,param_1,uVar1 + param_3);
    puVar3 = (unsigned int *)(uVar1 * 0x10 + *param_1);
    uVar2 = param_3 & 0xffffffff;
    while (uVar2 != 0) {
      if (puVar3 != (unsigned int *)0x0) {
        *puVar3 = *param_2;
        puVar3[1] = param_2[1];
        puVar3[2] = param_2[2];
        puVar3[3] = param_2[3];
      }
      param_2 = param_2 + 4;
      puVar3 = puVar3 + 4;
      param_3 = param_3 - 1;
      uVar2 = param_3;
    }
  }
  return;
}

