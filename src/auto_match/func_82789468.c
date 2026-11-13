typedef unsigned char bool;


__int64 fn_82789468(int *param_1,__int64 param_2,__int64 param_3,unsigned int *param_4,int param_5)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  bool bVar5;
  
  if (0 < param_3 - param_2) {
    lVar3 = param_3 - param_2;
    do {
      lVar2 = (__int64)((int)lVar3 >> 1);
      uVar1 = *(unsigned int *)((int)((lVar2 + param_2 & 0xffffffffU) << 2) + *param_1);
      puVar4 = (unsigned int *)(*(int *)((uVar1 >> 8 & 0xfffffc) + *(int *)(param_5 + 0xc)) +
                       (uVar1 & 0x3ff) * 0xc);
      uVar1 = *puVar4;
      if (uVar1 == *param_4) {
        bVar5 = param_4[1] <= puVar4[1];
      }
      else {
        bVar5 = *param_4 <= uVar1;
      }
      if (!bVar5) {
        param_2 = lVar2 + param_2 + 1;
        lVar2 = (lVar3 - lVar2) + -1;
      }
      lVar3 = lVar2;
    } while (0 < (int)lVar2);
  }
  return param_2;
}

