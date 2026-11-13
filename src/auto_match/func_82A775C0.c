void fn_82A775C0(int param_1,int param_2)

{
  unsigned int *puVar1;
  __int64 lVar2;
  int *piVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  
  puVar1 = *(unsigned int **)(param_1 + 0xb8);
  uVar6 = 0;
  if (puVar1 != (unsigned int *)0x0) {
    if (puVar1[7] == 0xff) {
code_r0x82a77664:
      uVar6 = 0xffffffffffffffff;
      goto code_r0x82a77668;
    }
    uVar6 = ((__int64)(int)puVar1[7] * (__int64)*(int *)(param_1 + 0xc0) -
            (unsigned __int64)*(unsigned int *)(param_1 + 0xbc)) + (unsigned __int64)puVar1[5] + (unsigned __int64)puVar1[4] +
            (unsigned __int64)*puVar1;
    if ((int)uVar6 == -1) goto code_r0x82a77668;
  }
  piVar3 = *(int **)(param_1 + 0xa8);
  while (piVar3 != (int *)0x0) {
    if (piVar3 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar3;
      piVar3 = (int *)piVar3[1];
    }
    if (*(int *)(iVar5 + 0x20) == 0xff) goto code_r0x82a77664;
    uVar6 = (__int64)*(int *)(iVar5 + 0x1c) * (__int64)*(int *)(iVar5 + 0x20) +
            (unsigned __int64)*(unsigned int *)(iVar5 + 0x14) + uVar6;
  }
code_r0x82a77668:
  uVar4 = (__int64)(int)(unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x78) + 0xc) * (__int64)param_2;
  lVar2 = uVar4 - uVar6;
  if ((uVar4 & 0xffffffff) <= (uVar6 & 0xffffffff)) {
    lVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x82a77698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(**(int **)(param_1 + 0x108) + 0x18))(*(int **)(param_1 + 0x108),uVar6,lVar2);
  return;
}

