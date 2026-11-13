extern unsigned int lbl_8322BCF8;
extern unsigned int lbl_8322FD1C;
extern unsigned int lbl_8322FD1E;
extern unsigned int lbl_8322FD2F;


unsigned __int64 fn_82BF90D0(unsigned int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  uVar5 = 0xffffffffffffffff;
  uVar1 = 0xffffffffffffffff;
  uVar4 = 0;
  uVar6 = (unsigned __int64)lbl_8322FD1E;
  if (param_1 != 0) {
    lVar3 = uVar6 * 2 + -0x7cdd4308;
    uVar2 = uVar1;
    do {
      uVar1 = uVar2;
      if (*(short *)lVar3 == -1) {
        uVar1 = uVar6;
        if ((int)uVar5 != -1) {
          *(short *)((int)&lbl_8322BCF8 + (int)((uVar5 & 0xffffffff) << 1)) = (short)uVar6;
          uVar1 = uVar2;
        }
        uVar4 = uVar4 + 1;
        uVar5 = uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar3 = lVar3 + 2;
      uVar2 = uVar1;
    } while (uVar4 < param_1);
  }
  lbl_8322FD1E = (short)uVar5 + 1;
  *(unsigned short *)((int)&lbl_8322BCF8 + (int)((uVar5 & 0xffffffff) << 1)) = 0xfffe;
  lbl_8322FD1C = lbl_8322FD1C - (short)param_1;
  lbl_8322FD2F = 1;
  return uVar1;
}

