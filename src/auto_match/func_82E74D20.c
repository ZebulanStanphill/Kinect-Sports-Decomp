extern unsigned int *auStack_30;
extern int fn_82E5A140();
extern int fn_82E5A150();
extern int fn_82E5A190();
extern int fn_82E5A1C0();
extern int fn_82E5A1F0();
extern int fn_82EEAF80();


__int64 fn_82E74D20(int *param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int auStack_30 [12];
  
  if ((param_2 & 0xffffffff) == 0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    lVar1 = fn_82E5A140(param_2,*(__int64 *)(param_1 + 2) + *(__int64 *)(param_1 + 0xc));
    if (-1 < lVar1) {
      lVar4 = *(__int64 *)(param_1 + 0x10) + *(__int64 *)(param_1 + 0xe) +
              *(__int64 *)(param_1 + 2);
      lVar1 = fn_82E5A150(param_2,lVar4);
      if ((-1 < lVar1) && (lVar1 = fn_82E5A1C0(param_2,param_1[0x16]), -1 < lVar1)) {
        iVar2 = (**(int (***)())(*param_1 + 0x24))(param_1);
        if ((iVar2 == 0) && (uVar3 = *(unsigned __int64 *)(param_1 + 0x12), uVar3 != 0)) {
          trapDoubleWordImmediate(6,uVar3,0);
          lVar1 = fn_82E5A1F0(param_2,(unsigned __int64)
                                          ((lVar4 - *(__int64 *)(param_1 + 0xc)) * 10000) / uVar3);
          if (lVar1 < 0) {
            return lVar1;
          }
        }
        if (param_1[0x17] != 0) {
          auStack_30[0] = 0;
          lVar1 = fn_82EEAF80(param_1[0x17],auStack_30);
          if (-1 < lVar1) {
            lVar1 = fn_82E5A190(param_2,(unsigned __int64)(unsigned int)param_1[6] + (unsigned __int64)auStack_30[0]);
          }
        }
      }
    }
  }
  return lVar1;
}

