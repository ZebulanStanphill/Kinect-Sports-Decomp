void fn_827B5E10(int param_1,int param_2,int param_3,int param_4,__int64 param_5,unsigned int param_6)

{
  unsigned char *pbVar1;
  unsigned char *pbVar2;
  unsigned char *puVar3;
  unsigned int uVar4;
  __int64 lVar5;
  
  if ((*(int *)(param_1 + 0x2d0) != 0) && (uVar4 = 0, param_6 != 0)) {
    do {
      if ((int)param_5 != 0) {
        puVar3 = (unsigned char *)
                 ((uVar4 + param_4) * *(int *)(param_2 + 0x14) + param_3 + *(int *)(param_2 + 0x18)
                 + -1);
        pbVar2 = (unsigned char *)(*(int *)(*(int *)(param_1 + 0x2d0) + 0x14) * uVar4 +
                          *(int *)(*(int *)(param_1 + 0x2d0) + 0x18) + -1);
        lVar5 = param_5;
        do {
          pbVar2 = pbVar2 + 1;
          pbVar1 = puVar3 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = (char)((unsigned __int64)
                           ((__int64)(int)(unsigned int)*pbVar1 * (__int64)(int)(0xff - (unsigned int)*pbVar2) +
                           0xff) >> 8);
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_6);
  }
  return;
}

