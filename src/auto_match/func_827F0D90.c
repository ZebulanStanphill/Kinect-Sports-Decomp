extern int fn_827F0898();


void fn_827F0D90(__int64 param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned short uVar7;
  
  iVar1 = (int)param_1;
  uVar6 = (unsigned __int64)*(unsigned short *)(iVar1 + 0xe8) - 1;
  if (-1 < (__int64)uVar6) {
    lVar5 = ((unsigned __int64)*(unsigned short *)(iVar1 + 0xe8) + 0x27) * 4 + param_1;
    do {
      if (*(int *)lVar5 == param_2) {
        uVar6 = uVar6 & 0xffff;
        goto LAB_827f0ddc;
      }
      uVar6 = uVar6 - 1;
      lVar5 = lVar5 + -4;
    } while (-1 < (__int64)uVar6);
  }
  uVar6 = 0xffff;
LAB_827f0ddc:
  if (uVar6 != 0xffff) {
    if (((*(unsigned short *)(iVar1 + 0xea) >> 1 & 1) != 0) &&
       (*(unsigned short *)(iVar1 + 0xea) = *(unsigned short *)(iVar1 + 0xea) & 0xfffe,
       *(unsigned int *)(iVar1 + 0xf0) == uVar6)) {
      *(unsigned short *)(iVar1 + 0xea) = *(unsigned short *)(iVar1 + 0xea) & 0xfffd;
    }
    fn_827F0898(param_1);
    uVar7 = *(short *)(iVar1 + 0xe8) - 1;
    *(unsigned short *)(iVar1 + 0xe8) = uVar7;
    if (uVar6 < uVar7) {
      uVar4 = (unsigned int)uVar6 & 0xf;
      uVar2 = (unsigned int)(uVar6 >> 3) & 0x1ffffffe;
      *(unsigned int *)(((unsigned int)uVar6 + 0x28) * 4 + iVar1) =
           *(unsigned int *)((uVar7 + 0x28) * 4 + iVar1);
      uVar3 = (unsigned int)(uVar6 >> 3) & 0x1ffffffe;
      *(unsigned short *)(uVar2 + iVar1 + 0xec) =
           (unsigned short)((*(unsigned short *)(((*(unsigned short *)(iVar1 + 0xe8) >> 4) + 0x76) * 2 + iVar1) >>
                     (*(unsigned short *)(iVar1 + 0xe8) & 0xf) & 1) << uVar4) |
           *(unsigned short *)(uVar2 + iVar1 + 0xec) & ~(unsigned short)(1 << uVar4);
      *(unsigned short *)(uVar3 + iVar1 + 0xee) =
           (unsigned short)((*(unsigned short *)(((*(unsigned short *)(iVar1 + 0xe8) >> 4) + 0x77) * 2 + iVar1) >>
                     (*(unsigned short *)(iVar1 + 0xe8) & 0xf) & 1) << uVar4) |
           *(unsigned short *)(uVar3 + iVar1 + 0xee) & ~(unsigned short)(1 << uVar4);
    }
  }
  return;
}

