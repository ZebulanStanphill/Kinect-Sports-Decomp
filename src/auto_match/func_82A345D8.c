extern unsigned int lbl_820893C4;


__int64 fn_82A345D8(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  
  lVar4 = 0;
  uVar2 = *(unsigned int *)(param_1 + 0xc) >> 6;
  uVar6 = (unsigned __int64)uVar2 & 0xffff;
  if ((uVar2 & 0xffff) != 0) {
    iVar5 = 0;
    if ((uVar2 & 0xffff) != 0) {
      do {
        uVar7 = (__int64)(int)*(unsigned int *)(&lbl_820893C4 + (*(unsigned int *)(param_1 + 0xc) >> 0x16 & 3) * 4)
                * (__int64)iVar5;
        uVar3 = uVar7 & 0x1f;
        piVar1 = (int *)(((unsigned int)((uVar7 & 0xffffffff) >> 3) & 0x1ffffffc) + param_1 + 0x10);
        uVar7 = 0x20 - uVar3;
        iVar5 = iVar5 + 1;
        lVar4 = (((unsigned __int64)((unsigned int)piVar1[1] >> (uVar7 & 0x7f)) &
                  ((uVar7 & 0xffffffff) >> 5) - 1 & 0xffffffff |
                 (unsigned __int64)(unsigned int)(*piVar1 << (int)uVar3)) >>
                (0x20 - (unsigned __int64)
                        *(unsigned int *)(&lbl_820893C4 + (*(unsigned int *)(param_1 + 0xc) >> 0x16 & 3) * 4) & 0x7f
                )) + lVar4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return lVar4;
}

