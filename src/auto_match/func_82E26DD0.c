void fn_82E26DD0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  uVar3 = param_2;
  uVar4 = param_1;
  if ((unsigned int)param_1 < (unsigned int)param_2) {
    uVar3 = param_1;
    uVar4 = param_2;
  }
  uVar2 = uVar3 & 0xffffffff;
  while (uVar1 = uVar3, uVar2 != 0) {
    trapWord(6,uVar1,0);
    uVar2 = uVar4 - (__int64)(int)((uVar4 & 0xffffffff) / (uVar1 & 0xffffffff)) *
                    (__int64)(int)uVar1;
    uVar3 = uVar2;
    uVar4 = uVar1;
  }
  trapWord(6,uVar4,0);
  trapWord(6,uVar4,0);
  *param_3 = (int)((param_1 & 0xffffffff) / (uVar4 & 0xffffffff));
  *param_4 = (int)((param_2 & 0xffffffff) / (uVar4 & 0xffffffff));
  return;
}

