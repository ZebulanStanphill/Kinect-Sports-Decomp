extern unsigned int iStack_5c;
extern unsigned int uStack_60;


__int64 fn_82E6F140(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,short *param_4)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned int uStack_60;
  int iStack_5c;
  __int64 alStack_58;
  
  if (param_4 == (short *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else if (*(short *)(param_1 + 2) == *param_4) {
    alStack_58 = 0;
    lVar1 = (**(int (***)())(*param_1 + 0x28))(param_1,param_4,&alStack_58);
    if (-1 < lVar1) {
      uStack_60 = 0;
      lVar1 = (**(int (***)())(*param_1 + 8))(param_1,&uStack_60);
      if (-1 < lVar1) {
        if (alStack_58 != 0) {
          uVar2 = (alStack_58 - 1U) / (unsigned __int64)uStack_60;
          trapDoubleWordImmediate(6,(unsigned __int64)uStack_60,0);
          if ((*(unsigned __int64 *)(param_1 + 0x12) < uVar2 + 1) && (*(__int64 *)(param_1 + 0x14) != 0))
          {
            lVar3 = uVar2 - *(unsigned __int64 *)(param_1 + 0x12);
            uVar2 = 0;
            if (lVar3 != -1) {
              do {
                lVar1 = (**(int (***)())(*param_1 + 0x2c))(param_1,*(unsigned __int64 *)(param_1 + 0x12));
                if (lVar1 < 0) {
                  return lVar1;
                }
                if ((param_1[0xe] != 0) &&
                   (lVar1 = (**(int (***)())(*param_1 + 0x14))(param_1), lVar1 < 0)) {
                  return lVar1;
                }
                uVar2 = uVar2 + 1;
              } while (uVar2 < lVar3 + 1U);
            }
            if ((int)lVar1 < 0) {
              return lVar1;
            }
          }
        }
        iStack_5c = 0;
        lVar1 = (**(int (***)())(*param_1 + 0x30))(param_1,param_2,param_3,param_4,&iStack_5c);
        if (-1 < lVar1) {
          if (iStack_5c != 0) {
            *(__int64 *)(param_1 + 0x14) = *(__int64 *)(param_1 + 0x14) + 1;
          }
          uVar2 = (**(int (***)())(*param_1 + 0x20))(param_1);
          if ((uVar2 & 0xffffffff) != 0) {
            lVar1 = fn_82E6F140(uVar2,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  else {
    lVar1 = -0x3ff2c94d;
  }
  return lVar1;
}

