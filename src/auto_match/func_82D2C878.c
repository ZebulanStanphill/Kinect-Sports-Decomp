extern unsigned int *auStack_28;
extern int fn_82D2BB28();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned int * fn_82D2C878(unsigned int *param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned char auStack_28 [1];

  uStack_30 = *param_3;
  uStack_2c = param_3[1];
  puVar3 = (unsigned int *)fn_82D2BB28(auStack_28,param_2,&uStack_30);
  uVar1 = *puVar3;
  *param_3 = uVar1;
  uVar5 = (unsigned __int64)puVar3[1];
  param_3[1] = puVar3[1];
  if (*(int *)((int)(((-(unsigned __int64)(uVar5 != 2) & uVar5 + 1) + 2 & 0xffffffff) << 2) + uVar1) !=
      param_5) {
    iVar2 = *(int *)((int)((uVar5 + 2 & 0xffffffff) << 2) + uVar1);
    iVar6 = *(int *)(iVar2 + 8);
    if ((((iVar6 == 0) || (iVar6 == 0x7fff)) || (iVar6 = *(int *)(iVar2 + 0xc), iVar6 == 0)) ||
       (iVar6 == 0x7fff)) {
      for (uVar1 = *(unsigned int *)((int)((uVar5 + 5 & 0xffffffff) << 2) + uVar1);
          (uVar1 & 0xfffffffc) != 0; uVar1 = *(unsigned int *)((uVar4 + 5) * 4 + uVar1)) {
        uVar1 = *(unsigned int *)((param_3[1] + 5) * 4 + *param_3);
        uVar4 = uVar1 & 3;
        uVar1 = uVar1 & 0xfffffffc;
        *param_3 = uVar1;
        uVar4 = -(unsigned int)(uVar4 != 2) & uVar4 + 1;
        param_3[1] = uVar4;
      }
    }
    iVar6 = *(int *)(((-(unsigned int)(param_3[1] != 2) & param_3[1] + 1) + 2) * 4 + *param_3);
    while (iVar6 != param_5) {
      if (param_3[1] == 0) {
        iVar6 = 2;
      }
      else {
        iVar6 = param_3[1] - 1;
      }
      uVar1 = *(unsigned int *)((iVar6 + 5) * 4 + *param_3);
      uVar4 = uVar1 & 3;
      uVar1 = uVar1 & 0xfffffffc;
      param_3[1] = uVar4;
      *param_3 = uVar1;
      iVar6 = *(int *)(((-(unsigned int)(uVar4 != 2) & uVar4 + 1) + 2) * 4 + uVar1);
    }
  }
  uVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  return param_1;
}
