extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82E74E58();
extern int fn_82E74F58();
extern int fn_82E75338();


__int64 fn_82E758E0(int *param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned int *param_5,unsigned int *param_6)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  __int64 lVar5;
  unsigned int auStack_50 [2];
  unsigned __int64 auStack_48 [9];
  
  if ((((param_2 == (int *)0x0) || ((param_4 & 0xffffffff) == 0)) || (param_5 == (unsigned int *)0x0))
     || (param_6 == (unsigned int *)0x0)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    auStack_50[0] = 0;
    auStack_48[0] = 0;
    lVar1 = fn_82E74F58();
    if (-1 < lVar1) {
      lVar5 = *(__int64 *)(param_1 + 2) * 10000 + auStack_48[0];
      lVar1 = (**(int (***)())(*param_2 + 0xb4))(param_2,auStack_50);
      if (-1 < lVar1) {
        lVar1 = fn_82E74E58(param_1,lVar5,auStack_50[0],param_4);
        uVar2 = (**(int (***)())(*param_1 + 0x10))(param_1,param_2);
        *(unsigned __int64 *)(param_1 + 0x10) = uVar2;
        uVar4 = fn_82E75338(param_1,param_2);
        *param_5 = uVar4;
        if (-1 < (int)lVar1) {
          uVar3 = (**(int (***)())(*param_2 + 0x1c))(param_2,0xffffffff82153458,auStack_48);
          if ((((uVar3 & 0xffffffff) >> 0x1f) - 1 & auStack_48[0] >> 0x20) != 0) {
            *param_6 = *param_6 | 1;
          }
          if (*(__int64 *)(param_1 + 0x12) == 0) {
            *(unsigned __int64 *)(param_1 + 0xc) =
                 (unsigned __int64)(lVar5 + *(__int64 *)(param_1 + 2) * -10000) / 10000;
          }
          *(__int64 *)(param_1 + 0x12) = *(__int64 *)(param_1 + 0x12) + 1;
          *(unsigned __int64 *)(param_1 + 0x14) = (unsigned __int64)auStack_50[0] + *(__int64 *)(param_1 + 0x14);
          if ((unsigned __int64)(unsigned int)param_1[0x16] < (unsigned __int64)auStack_50[0]) {
            param_1[0x16] = auStack_50[0];
          }
        }
      }
    }
  }
  return lVar1;
}

