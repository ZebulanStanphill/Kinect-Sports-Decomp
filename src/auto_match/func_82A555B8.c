extern int fn_82A53EF8();
extern int fn_82A54C78();


unsigned __int64 fn_82A555B8(int *param_1)

{
  int iVar1;
  int iVar2;
  int (**pcVar3)();
  int iVar4;
  int iVar5;
  short sVar6;
  
  iVar1 = *param_1;
  if ((*(int *)(iVar1 + 0x118) == 0) || (*(int *)(iVar1 + 0x28) != 0)) {
    pcVar3 = fn_82A53EF8;
  }
  else {
    pcVar3 = fn_82A54C78;
  }
  param_1[0x7e] = (int)pcVar3;
  if (*(short *)(iVar1 + 0x22) != 0) {
    iVar2 = 0;
    do {
      iVar5 = iVar2 * 0x6f0;
      iVar4 = *(int *)(iVar1 + 0x140) + iVar5;
      if (*(int *)(iVar1 + 0x118) == 0) {
        if (*(int *)(iVar1 + 0x1c0) == 0) {
          iVar5 = *(int *)(iVar1 + 0x100);
        }
        else {
          iVar5 = *(int *)(iVar1 + 0x100) << (*(unsigned int *)(iVar1 + 0x1c8) & 0x3f);
        }
        *(int *)(iVar4 + 0x34) = iVar2 * iVar5 * 4 + *(int *)(iVar1 + 0x1b4);
        iVar5 = *(int *)(iVar1 + 0x100);
        if (*(int *)(iVar1 + 0x1c0) != 0) {
          iVar5 = iVar5 << (*(unsigned int *)(iVar1 + 0x1c8) & 0x3f);
        }
        *(int *)(iVar4 + 0x94) = iVar2 * iVar5 * 4 + *(int *)(iVar1 + 0x1b4);
      }
      else {
        *(unsigned int *)(iVar4 + 0x34) = *(unsigned int *)(*(int *)(iVar1 + 0x140) + iVar5 + 4);
        *(unsigned int *)(iVar4 + 0x94) = *(unsigned int *)(*(int *)(iVar1 + 0x140) + iVar5 + 4);
      }
      sVar6 = (short)iVar2 + 1;
      iVar2 = (int)sVar6;
    } while ((int)sVar6 < (int)(unsigned int)*(unsigned short *)(iVar1 + 0x22));
  }
  return 0;
}

