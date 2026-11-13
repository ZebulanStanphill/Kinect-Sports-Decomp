#define true 1


void fn_82819D38(int param_1,__int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  
  sVar1 = *(short *)(param_1 + 0x84);
  sVar2 = -1;
  while( true ) {
    if (sVar1 == -1) break;
    iVar3 = sVar1 * 0x40 + *(int *)(param_1 + 0x7c);
    lVar5 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x24) - param_2;
    if (-1 < lVar5) {
      uVar6 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x20) + param_4;
      if (((param_3 & 0xffff) - 1 & uVar6) != 0) {
        uVar4 = (param_3 & 0xffff) - 1;
        lVar5 = (uVar6 - (uVar4 + uVar6 & ~uVar4)) + lVar5;
      }
      if ((-1 < (int)lVar5) &&
         ((sVar2 == -1 ||
          ((unsigned __int64)*(unsigned int *)(sVar2 * 0x40 + *(int *)(param_1 + 0x7c) + 0x20) <
           (unsigned __int64)*(unsigned int *)(iVar3 + 0x20))))) {
        sVar2 = sVar1;
      }
    }
    sVar1 = *(short *)(iVar3 + 0x30);
  }
  return;
}

