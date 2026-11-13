extern int fn_82E26138();
extern unsigned int lbl_83187510;
extern unsigned int lbl_83187518;
extern unsigned int lbl_83187524;


__int64 fn_82E26630(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  
  lVar1 = fn_82E26138(param_1,0);
  if ((int)lVar1 != 0) {
    iVar5 = 0;
    puVar3 = &lbl_83187510;
    uVar2 = 0;
    do {
      if ((param_1 & 0xffffffff) == (unsigned __int64)*puVar3) {
        uVar4 = (&lbl_83187524)[iVar5 * 9];
        uVar2 = (unsigned __int64)uVar4;
        trapWord(6,uVar2,0);
        lVar1 = param_2 - (__int64)(int)((param_2 & 0xffffffff) / uVar2) * (__int64)(int)uVar4;
        if (lVar1 != 0) {
          param_2 = (uVar2 - lVar1) + param_2;
        }
        uVar2 = ((unsigned __int64)uVar4 & 0x1fffffff) << 3;
        trapWord(6,uVar2,0);
        uVar4 = (unsigned int)(((__int64)*(int *)(iVar5 * 0x24 + -0x7ce78ae4) * (__int64)(int)param_2 &
                       0xffffffffU) / uVar2);
        if (((&lbl_83187518)[iVar5 * 9] == 0) || ((&lbl_83187518)[iVar5 * 9] == 3)) {
          uVar4 = uVar4 + 3 & 0xfffffffc;
        }
        return (__int64)(int)uVar4 * (__int64)param_3;
      }
      uVar2 = uVar2 + 0x24;
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 9;
      lVar1 = 0;
    } while ((uVar2 & 0xffffffff) != 0x804);
  }
  return lVar1;
}

