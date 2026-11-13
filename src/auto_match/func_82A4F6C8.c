/* WARNING: Removing unreachable block (ram,0x82a68c34) */

unsigned __int64 fn_82A4F6C8(int param_1,unsigned __int64 param_2)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  trapWord(6,(unsigned __int64)*(unsigned short *)(param_1 + 0x28),0);
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x34) / (unsigned __int64)*(unsigned short *)(param_1 + 0x28);
  if (uVar2 < (param_2 & 0xffffffff)) {
    uVar1 = *(unsigned short *)(param_1 + 0x24);
    if ((int)(unsigned int)*(unsigned short *)(param_1 + 0x26) < (int)((unsigned int)uVar1 * 8 - (unsigned int)uVar1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (__int64)(int)(((unsigned int)*(unsigned short *)(param_1 + 0x26) << 1) / (unsigned int)uVar1) + 0xfff4U &
              0xffff;
    }
    return ((uVar3 + (param_2 - uVar2)) - 1 & 0xffffffff) / uVar3;
  }
  return 0;
}

