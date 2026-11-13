extern unsigned int *auStack_30;
extern int fn_82EEAE00();


unsigned __int64 fn_82E74E58(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 *param_4)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 auStack_30;
  
  if (param_4 == (unsigned __int64 *)0x0) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    lVar2 = *(__int64 *)(param_1 + 2);
    uVar1 = 0;
    if ((unsigned __int64)(*(__int64 *)(param_1 + 0xe) * 10000) <= param_2 + lVar2 * -10000) {
      *(unsigned __int64 *)(param_1 + 0xe) = param_2 / 10000 - lVar2;
    }
    uVar3 = *(unsigned __int64 *)(param_1[4] + 0x5b0);
    if ((param_2 < uVar3) && (lVar2 != 0)) {
      uVar1 = 0xffffffffc00d4652;
    }
    else {
      if (param_1[0x17] == 0) {
        auStack_30 = param_2 - ((unsigned __int64)(unsigned int)param_1[7] * 10000 & 0xffffffff);
        if (auStack_30 < uVar3) {
          *param_4 = uVar3;
          return 0;
        }
      }
      else {
        auStack_30 = 0;
        uVar1 = (**(int (***)())(*param_1 + 0xc))(param_1,param_3);
        uVar1 = fn_82EEAE00(param_1[0x17],uVar1,param_2,uVar3,&auStack_30);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
      }
      *param_4 = auStack_30;
    }
  }
  return uVar1;
}

