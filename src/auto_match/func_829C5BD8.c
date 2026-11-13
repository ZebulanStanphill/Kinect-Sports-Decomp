extern unsigned int *auStack_20;
extern int fn_829C5A38();
extern unsigned int lbl_82022FD0;
extern unsigned int lbl_820570A4;
extern unsigned int lbl_83214E18;
extern unsigned int lbl_83214F68;
extern unsigned int lbl_83214F80;


void fn_829C5BD8(void)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned short auStack_20 [8];
  
  puVar2 = (unsigned int *)0x83214f60;
  lVar3 = 7;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auStack_20[0] = 0;
  iVar1 = ExGetXConfigSetting(7,9,0xffffffff83214f64,0x1c,auStack_20);
  if (((iVar1 != 0) || ((lbl_83214F80 & 0x40) != 0)) || (lbl_83214F68 < lbl_82022FD0)) {
    lbl_83214F68 = lbl_820570A4;
  }
  lbl_83214E18 = lbl_83214F68;
  fn_829C5A38();
  return;
}

