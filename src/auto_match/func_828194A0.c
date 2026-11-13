#define true 1


void fn_828194A0(int param_1,__int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  short sVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  
  sVar1 = *(short *)(param_1 + 0x84);
  do {
    if (sVar1 == -1) {
      return;
    }
    iVar2 = sVar1 * 0x40 + *(int *)(param_1 + 0x7c);
    lVar4 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x24) - param_2;
    if (-1 < lVar4) {
      uVar5 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x20) + param_4;
      if (((param_3 & 0xffff) - 1 & uVar5) != 0) {
        uVar3 = (param_3 & 0xffff) - 1;
        lVar4 = (uVar5 - (uVar3 + uVar5 & ~uVar3)) + lVar4;
      }
      if (-1 < (int)lVar4) {
        return;
      }
    }
    sVar1 = *(short *)(iVar2 + 0x30);
  } while( true );
}

