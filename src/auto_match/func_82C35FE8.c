extern unsigned int *auStack_40;
extern int fn_82C30370();


unsigned __int64 fn_82C35FE8(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  short sVar6;
  unsigned int auStack_40;
  
  iVar3 = *(int *)(param_3 + 0x38);
  uVar5 = 0;
  sVar1 = **(short **)(*(int *)(param_3 + 0x1a8) + 0xc);
  sVar2 = *(short *)(**(short **)(param_1 + 0x248) * 0x6f0 + *(int *)(param_1 + 0x140) + 0x76);
  if (*(int *)(param_2 + 0x48) == 0) {
    *(unsigned int *)(param_2 + 0x48) = 10;
  }
  else if (*(int *)(param_2 + 0x48) != 10) {
    return 0;
  }
  if ((int)*(char *)(param_1 + 200) < (int)(unsigned int)*(unsigned short *)(param_1 + 0x6e)) {
    if (*(short *)(param_1 + 0xca) < sVar2) {
      do {
        uVar5 = fn_82C30370(param_2 + 0xe0,
                              (unsigned __int64)*(unsigned short *)(param_1 + 0x6e) -
                              (__int64)*(char *)(param_1 + 200),&auStack_40);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        uVar4 = 1 << (((unsigned int)*(unsigned short *)(param_1 + 0x6e) - (int)*(char *)(param_1 + 200)) - 1 & 0x3f
                     );
        if ((uVar4 & auStack_40) != 0) {
          auStack_40 = auStack_40 | ~(uVar4 - 1);
        }
        *(unsigned int *)(*(short *)(param_1 + 0xca) * 4 + sVar1 * 4 + iVar3) = auStack_40;
        sVar6 = *(short *)(param_1 + 0xca) + 1;
        *(short *)(param_1 + 0xca) = sVar6;
      } while (sVar6 < sVar2);
    }
    *(unsigned int *)(param_2 + 0x48) = 0xb;
  }
  else {
    uVar5 = 0xffffffff80040002;
  }
  return uVar5;
}

