extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int uStack_3c;


unsigned __int64 fn_82E6F878(int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned short auStack_40;
  unsigned int uStack_3c;
  unsigned int auStack_38 [2];
  unsigned __int64 auStack_30 [2];
  
  if (*(unsigned __int64 *)(param_1 + 0x12) < param_2) {
    uVar2 = 0xffffffffc00d36b2;
  }
  else {
    if ((param_2 < *(unsigned __int64 *)(param_1 + 0x12)) ||
       (uVar2 = (**(int (***)())(*(int *)param_1[0x16] + 0x50))
                          ((int *)param_1[0x16],(param_2 & 0xffffffff) + 1), -1 < (int)uVar2)) {
      auStack_30[0] = 0;
      uVar2 = (**(int (***)())(*param_1 + 0x24))(param_1,param_2,auStack_30,0);
      if (-1 < (int)uVar2) {
        uVar2 = (**(int (***)())(*(int *)param_1[0xb] + 0x1c))((int *)param_1[0xb],auStack_30[0]);
        if (-1 < (int)uVar2) {
          trapDoubleWordImmediate(6,(unsigned __int64)(unsigned int)param_1[0x17],0);
          uStack_3c = 0;
          uVar1 = *(unsigned __int64 *)(param_1 + 0x10) / (unsigned __int64)(unsigned int)param_1[0x17] & 0xffffffff;
          auStack_38[0] =
               (unsigned int)(uVar1 << 0x18) |
               (unsigned int)(uVar1 << 8) & 0xff0000 | (unsigned int)(uVar1 >> 8) & 0xff00 | (unsigned int)(uVar1 >> 0x18);
          uVar2 = (**(int (***)())(*(int *)param_1[0xb] + 0x30))
                            ((int *)param_1[0xb],auStack_38,4,&uStack_3c);
          if (-1 < (int)uVar2) {
            auStack_40 = *(unsigned short *)(param_1 + 0x18) << 8 | *(unsigned short *)(param_1 + 0x18) >> 8;
            uVar2 = (**(int (***)())(*(int *)param_1[0xb] + 0x30))
                              ((int *)param_1[0xb],&auStack_40,2,&uStack_3c);
          }
        }
      }
    }
    if (*(unsigned __int64 *)(param_1 + 0x12) <= param_2) {
      *(unsigned __int64 *)(param_1 + 0x12) = *(unsigned __int64 *)(param_1 + 0x12) + 1;
    }
  }
  return uVar2;
}

