extern unsigned int *auStack_3c;
extern int fn_82F2A8A8();
extern unsigned int uStack_40;


__int64 fn_82F1B2D8(int param_1,unsigned short *param_2,short *param_3,int param_4)

{
  short sVar1;
  __int64 lVar2;
  unsigned short *puVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int uStack_40;
  unsigned int auStack_3c;
  
  sVar1 = *param_3;
  lVar5 = 0;
  auStack_3c = 0;
  uStack_40 = 0;
  if (param_4 < 4) {
    if (2 < sVar1) {
      iVar4 = 2;
      puVar3 = param_2;
      if (2 < sVar1 + -2) {
        do {
          lVar2 = fn_82F2A8A8(param_1,puVar3[3],puVar3[2],
                               *(unsigned int *)((*(int *)(param_1 + 0x4e48) + 0x138b) * 4 + param_1),
                               &auStack_3c,&uStack_40);
          iVar4 = iVar4 + 2;
          lVar5 = lVar2 + lVar5;
          puVar3 = puVar3 + 2;
        } while (iVar4 < *param_3 + -2);
      }
      lVar2 = fn_82F2A8A8(param_1,(param_2 + iVar4)[1],param_2[iVar4],
                           *(unsigned int *)((*(int *)(param_1 + 0x4e48) + 0x138e) * 4 + param_1),
                           &auStack_3c,&uStack_40);
      return lVar2 + lVar5;
    }
  }
  else if (2 < sVar1) {
    iVar4 = 2;
    puVar3 = param_2;
    if (2 < sVar1 + -2) {
      do {
        lVar2 = fn_82F2A8A8(param_1,puVar3[3],puVar3[2],
                             *(unsigned int *)((*(int *)(param_1 + 0x4e44) + 0x1385) * 4 + param_1),
                             &auStack_3c,&uStack_40);
        iVar4 = iVar4 + 2;
        lVar5 = lVar2 + lVar5;
        puVar3 = puVar3 + 2;
      } while (iVar4 < *param_3 + -2);
    }
    lVar2 = fn_82F2A8A8(param_1,(param_2 + iVar4)[1],param_2[iVar4],
                         *(unsigned int *)((*(int *)(param_1 + 0x4e44) + 5000) * 4 + param_1),
                         &auStack_3c,&uStack_40);
    return lVar2 + lVar5;
  }
  return 0;
}

