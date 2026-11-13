extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int uStack_50;


void fn_8229CF08(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned char *puVar2;
  __int64 lVar3;
  unsigned __int64 uStack_50;
  unsigned char auStack_40 [8];
  double dStack_38;
  unsigned char auStack_30 [8];
  double dStack_28;
  unsigned char auStack_20 [32];
  
  puVar1 = (unsigned int *)((int)&uStack_50 + 4);
  lVar3 = 2;
  do {
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fn_82273CD8(auStack_40,3);
  uStack_50 = (__int64)param_2;
  dStack_38 = (double)uStack_50;
  fn_82273CD8(auStack_30,3);
  uStack_50 = (__int64)param_3;
  dStack_28 = (double)uStack_50;
  fn_82672C20(*(unsigned int *)(param_1 + 8),0xffffffff821ab100,auStack_40,2);
  puVar2 = auStack_20;
  lVar3 = 1;
  do {
    puVar2 = puVar2 + -0x10;
    fn_82273C88(puVar2);
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  return;
}

