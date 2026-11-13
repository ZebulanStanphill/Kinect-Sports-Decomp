extern unsigned int lbl_82002AE0;
extern unsigned int lbl_832643B0;
extern unsigned int lbl_832643B4;
extern unsigned int lbl_832643D0;
extern unsigned int uRam832643b8;
extern unsigned int uRam832643bc;
extern unsigned int uRam832643c0;
extern unsigned int uRam832643c4;
extern unsigned int uRam832643c8;
extern unsigned int uRam832643cc;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82FEBED0(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  if (param_1 == 0) {
    puVar2 = &lbl_832643B0;
    lVar3 = 8;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lbl_832643B4 = 1;
    uRam832643b8 = 4;
    uRam832643bc = 0x2000;
    lbl_832643D0 = lbl_82002AE0;
    uRam832643c0 = 0;
    uRam832643c4 = 4;
    uRam832643c8 = 0x2000;
    uRam832643cc = 0x1000000;
    return;
  }
  puVar2 = (unsigned int *)(param_1 + -4);
  puVar1 = &lbl_832643B0;
  lVar3 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar1 = (unsigned int *)(param_1 + -4);
  puVar2 = &lbl_832643B0;
  lVar3 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

