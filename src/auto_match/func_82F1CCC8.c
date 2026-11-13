extern int fn_82E85220();


void fn_82F1CCC8(int param_1,int param_2,short *param_3,unsigned short *param_4,int param_5)

{
  int iVar1;
  unsigned short uVar2;
  unsigned short *puVar3;
  __int64 lVar4;
  
  if ((((param_2 == 0) || (param_2 == 2)) || (param_2 == 4)) || (param_2 == 5)) {
    uVar2 = fn_82E85220(param_1,(__int64)
                                 *(int *)(*(int *)(param_5 + -0xb4) * 0x34 +
                                          *(int *)(param_1 + 0x6d24) + 0x28) *
                                 (__int64)(int)*param_3,
                         *(unsigned int *)
                          (*(int *)(param_5 + 0x60) * 0x34 + *(int *)(param_1 + 0x6d24) + 0x28));
    param_4[8] = uVar2;
    *param_4 = uVar2;
    puVar3 = param_4 + 9;
    iVar1 = (int)param_3 - (int)param_4;
    lVar4 = 7;
    do {
      param_3 = param_3 + 1;
      uVar2 = fn_82E85220(param_1,(__int64)(int)*param_3 * (__int64)*(int *)(param_5 + -0xb4),
                           *(unsigned int *)(param_5 + 0x60));
      puVar3[-8] = uVar2;
      uVar2 = fn_82E85220(param_1,(__int64)(int)*(short *)((int)puVar3 + iVar1) *
                                   (__int64)*(int *)(param_5 + -0xb4),
                           *(unsigned int *)(param_5 + 0x60));
      *puVar3 = uVar2;
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  else {
    iVar1 = (int)param_3 - (int)param_4;
    lVar4 = 0x10;
    do {
      *param_4 = *(unsigned short *)(iVar1 + (int)param_4);
      param_4 = param_4 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

