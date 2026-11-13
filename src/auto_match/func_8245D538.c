extern int fn_8265C9E0();
extern unsigned int lbl_821BBC84;
extern unsigned int *lbl_83276594;


void fn_8245D538(void)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  lbl_83276594 = (unsigned int *)fn_8265C9E0(0x100);
  if (lbl_83276594 == (unsigned int *)0x0) {
    lbl_83276594 = (unsigned int *)0x0;
  }
  else {
    lbl_83276594[1] = 0;
    puVar1 = lbl_83276594 + 0x1a;
    *lbl_83276594 = &lbl_821BBC84;
    lVar3 = 3;
    puVar2 = lbl_83276594 + 0xb;
    lbl_83276594[2] = 0;
    lbl_83276594[3] = 0;
    lbl_83276594[4] = 0;
    lbl_83276594[0x15] = 0;
    lbl_83276594[0x16] = 0;
    lbl_83276594[0x14] = 0;
    lbl_83276594[5] = 0;
    lbl_83276594[6] = 0;
    lbl_83276594[7] = 0;
    lbl_83276594[8] = 0;
    lbl_83276594[0x12] = 0;
    lbl_83276594[0x13] = 0;
    lbl_83276594[0x37] = 0;
    lbl_83276594[0x38] = 0;
    lbl_83276594[0x35] = 0;
    lbl_83276594[0x36] = 0;
    lbl_83276594[0xb] = 0;
    lbl_83276594[10] = 0;
    do {
      puVar2[4] = 0;
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      puVar1[9] = 0;
      puVar1 = puVar1 + 7;
      *puVar1 = 0xffffffff;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lbl_83276594[0x1a] = 0xffffffff;
    lbl_83276594[0x1c] = 0;
    lbl_83276594[9] = 0;
  }
  RtlInitializeCriticalSection(lbl_83276594 + 0x39);
  return;
}

