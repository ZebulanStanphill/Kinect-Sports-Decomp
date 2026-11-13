extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int lbl_83296960;
extern unsigned int lbl_83296AE0;
extern unsigned int lbl_83296BA8;
extern unsigned int lbl_83296BAC;
extern unsigned int lbl_83296BB0;
extern unsigned int lbl_83296BB4;
extern unsigned int lbl_83296BB8;
extern unsigned int lbl_83296BBC;
extern unsigned int lbl_83296BD0;


void fn_82530620(void)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  lbl_83296BAC = 0;
  lbl_83296AE0 = &lbl_83296960;
  lbl_83296BB0 = 1;
  lbl_83296BB4 = 1;
  lbl_83296BB8 = 1;
  lbl_83296BA8 = 1;
  lbl_83296BBC = 1;
  if (lbl_8326B430 / lbl_8326B434 != 1) {
    lbl_83296BA8 = 3;
  }
  puVar1 = (unsigned int *)&lbl_83296BD0;
  lVar2 = 2;
  do {
    puVar1 = puVar1 + 0x2c;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

