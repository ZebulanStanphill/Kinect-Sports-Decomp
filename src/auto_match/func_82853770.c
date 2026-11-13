extern int fn_826310E0();


void fn_82853770(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x6930);
  if ((*(char *)(param_2 + 10) == '\0') || (*(int *)(param_1 + 0x104) == 0)) {
    iVar5 = 0;
    if (*(short *)(param_2 + 8) != 0) {
      lVar4 = 0;
      do {
        uVar3 = lVar4 + (unsigned __int64)*(unsigned int *)(param_1 + 0x98);
        uVar2 = (uVar3 & 0xffffffff) >> 2;
        fn_826310E0(*(unsigned int *)(param_1 + 4),uVar3,
                     (unsigned __int64)*(unsigned char *)(*(int *)(param_2 + 4) + iVar5) * 0x40 +
                     (unsigned __int64)*(unsigned int *)(iVar1 * 0xd0 + param_1 + 0x1f0),3,
                     (unsigned __int64)
                     (-0x8000000000000000 >> (((uVar3 + 2 & 0xffffffff) >> 2) - uVar2 & 0x7f)) >>
                     (uVar2 & 0x7f));
        iVar5 = iVar5 + 1;
        lVar4 = lVar4 + 3;
      } while (iVar5 < (int)(unsigned int)*(unsigned short *)(param_2 + 8));
    }
    *(unsigned int *)(param_1 + 0x104) = 1;
    *(int *)(param_1 + 0x7c) = *(int *)(param_2 + 4);
    *(unsigned int *)(param_1 + 0x80) = (unsigned int)*(unsigned short *)(param_2 + 8);
  }
  return;
}

