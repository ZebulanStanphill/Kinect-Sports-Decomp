extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82528BF8();
extern int fn_82672C20();
extern unsigned int lbl_831E5F58;
extern unsigned int uStack_a0;


void fn_824A0808(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned char **ppuVar3;
  unsigned char *puVar4;
  __int64 lVar5;
  unsigned __int64 uStack_a0;
  unsigned char auStack_90 [8];
  double dStack_88;
  unsigned char auStack_80 [8];
  unsigned char *puStack_78;
  unsigned char auStack_70 [112];
  
  puVar1 = (unsigned int *)((int)&uStack_a0 + 4);
  lVar5 = 2;
  do {
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar2 = 1;
  ppuVar3 = &lbl_831E5F58;
  do {
    fn_82528BF8(*(unsigned int *)(param_1 + 0x58),*ppuVar3,auStack_70,0x20,0,0);
    fn_82273CD8(auStack_90,3);
    uStack_a0 = (__int64)iVar2;
    dStack_88 = (double)uStack_a0;
    fn_82273CD8(auStack_80,5);
    puStack_78 = auStack_70;
    fn_82672C20(*(unsigned int *)(param_1 + 0x50),0xffffffff821a89ac,auStack_90,2);
    ppuVar3 = ppuVar3 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)ppuVar3 < -0x7ce1a098);
  puVar4 = auStack_70;
  lVar5 = 1;
  do {
    puVar4 = puVar4 + -0x10;
    fn_82273C88(puVar4);
    lVar5 = lVar5 + -1;
  } while (-1 < lVar5);
  return;
}

