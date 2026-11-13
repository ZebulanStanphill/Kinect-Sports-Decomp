extern int fn_82BD8BE8();


unsigned __int64 fn_82BD4438(int param_1,__int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  uVar5 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar3 = 0xffffffff80004001;
  }
  else {
    uVar1 = *param_3;
    uVar2 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + 0x18);
    *param_3 = 0;
    uVar6 = (unsigned __int64)uVar2 + 2;
    uVar4 = (unsigned __int64)uVar1 / (uVar6 & 0xffffffff);
    trapWord(6,uVar6,0);
    if ((int)uVar4 != 0) {
      do {
        uVar3 = fn_82BD8BE8(*(unsigned int *)(param_1 + 0x4c),param_2,uVar6);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        if ((int)uVar3 == 1) {
          return uVar3;
        }
        uVar5 = uVar5 + 1;
        param_2 = param_2 + uVar6;
        *param_3 = *param_3 + (int)uVar6;
      } while ((uVar5 & 0xffffffff) < uVar4);
    }
  }
  return uVar3;
}

