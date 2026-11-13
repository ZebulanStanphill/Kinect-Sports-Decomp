extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_824A09E8();
extern int fn_82672C20();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_60;


void fn_824A0720(int param_1,int param_2,__int64 param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  __int64 lVar4;
  int iStack0000001c;
  unsigned __int64 uStack_60;
  unsigned char auStack_50 [8];
  double dStack_48;
  unsigned char auStack_40 [8];
  char cStack_38;
  unsigned char auStack_30 [48];
  
  iStack0000001c = param_2;
  piVar1 = (int *)fn_824A09E8(param_1 + 0x88,&stack0x0000001c);
  if (*piVar1 != (int)param_3) {
    if (*(int *)(param_1 + 0x50) != 0) {
      puVar2 = (unsigned int *)((int)&uStack_60 + 4);
      lVar4 = 2;
      do {
        puVar2[3] = 0;
        puVar2 = puVar2 + 4;
        *puVar2 = 0;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      fn_82273CD8(auStack_50,3);
      uStack_60 = (__int64)param_2;
      dStack_48 = (double)uStack_60;
      fn_82273CD8(auStack_40,2);
      cStack_38 = '\x01' - (param_3 == 0);
      fn_82672C20(*(unsigned int *)(param_1 + 0x50),0xffffffff821bf13c,auStack_50,2);
      puVar3 = auStack_30;
      lVar4 = 1;
      do {
        puVar3 = puVar3 + -0x10;
        fn_82273C88(puVar3);
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
    piVar1 = (int *)fn_824A09E8(param_1 + 0x88,&stack0x0000001c);
    *piVar1 = (int)param_3;
  }
  return;
}

