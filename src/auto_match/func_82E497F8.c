extern unsigned int lbl_8214C000;
extern unsigned int lbl_8214C010;


unsigned __int64 fn_82E497F8(int param_1,unsigned char *param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  
  if (param_4 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  pbVar4 = &lbl_8214C000;
  *param_4 = 0;
  do {
    bVar1 = *pbVar4;
    bVar2 = *param_2;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar4 = pbVar4 + 1;
    param_2 = param_2 + 1;
  } while (pbVar4 != (unsigned char *)&lbl_8214C010);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x82e49864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(int (***)())**(unsigned int **)(param_1 + 0xb8))
                      (*(unsigned int **)(param_1 + 0xb8),param_3,param_4);
    return uVar3;
  }
  return 0xffffffffc00d36ba;
}

