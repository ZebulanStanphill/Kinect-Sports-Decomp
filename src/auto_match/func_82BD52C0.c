void fn_82BD52C0(int param_1,unsigned __int64 param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(unsigned int *)(param_1 + 8) != 0) {
    puVar1 = (unsigned int *)(param_1 + 0x60);
    do {
      if (param_2 == *(__int64 *)*puVar1) break;
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < *(unsigned int *)(param_1 + 8));
  }
  iVar3 = uVar2 * 3 + *(int *)(param_3 + 0xc);
  *param_4 = *(unsigned int *)((iVar3 + 200) * 4 + param_1);
  *param_5 = *(unsigned int *)((iVar3 + 0x62) * 4 + param_1);
  return;
}

