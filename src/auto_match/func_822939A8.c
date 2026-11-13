#define true 1
extern unsigned int *auStack_28f0;
extern unsigned int *auStack_2908;
extern unsigned int *auStack_2910;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229AE10();
extern int fn_82526C70();
extern int fn_82672C20();
extern int fn_82672F30();
extern unsigned int iStack_2904;
extern unsigned int iStack_290c;
extern unsigned int lbl_82196582;
extern unsigned int uStack_2900;
extern unsigned int uStack_291c;
extern unsigned int uStack_2920;


void fn_822939A8(unsigned __int64 param_1,int param_2,short *param_3)

{
  char cVar1;
  unsigned int *puVar2;
  char *pcVar3;
  int iVar4;
  unsigned char *puVar5;
  char *pcVar6;
  __int64 lVar7;
  struct { unsigned int first; unsigned int second; } stack_pair_2920;

  double dStack_2918;
  unsigned char auStack_2910 [4];
  int iStack_290c;
  unsigned char auStack_2908 [4];
  int iStack_2904;
  unsigned __int64 uStack_2900;
  unsigned char auStack_28f0 [160];
  char acStack_2850 [10304];
  
  stack_pair_2920.first = 0;
  stack_pair_2920.second = 0;
  fn_82273CD8(&stack_pair_2920.first,3);
  uStack_2900 = (__int64)param_2;
  puVar2 = (unsigned int *)((int)&uStack_2900 + 4);
  dStack_2918 = (double)uStack_2900;
  lVar7 = 10;
  do {
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = 0;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  pcVar6 = acStack_2850;
  iVar4 = (int)&lbl_82196582 - (int)acStack_2850;
  puVar5 = auStack_28f0;
  lVar7 = 10;
  do {
    if (*param_3 == -1) {
      pcVar3 = pcVar6;
      do {
        if (pcVar6 + 0x400 <= pcVar3) break;
        cVar1 = pcVar3[iVar4];
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar3 == pcVar6 + 0x400) {
        pcVar3[-1] = '\0';
      }
    }
    else {
      fn_82526C70(pcVar6,0x400,0xffffffff821aa66c);
    }
    fn_82273CD8(puVar5,4);
    *(char **)(puVar5 + 8) = pcVar6;
    lVar7 = lVar7 + -1;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 0x10;
    iVar4 = iVar4 + -0x400;
    pcVar6 = pcVar6 + 0x400;
    if (lVar7 == 0) {
      puVar2 = (unsigned int *)fn_8229AE10(auStack_2908,param_1);
      fn_82672F30(*puVar2,0xffffffff821aa670,0,auStack_28f0,10,1);
      if (iStack_2904 != 0) {
        fn_822315A0();
      }
      puVar2 = (unsigned int *)fn_8229AE10(auStack_2910,param_1);
      fn_82672C20(*puVar2,0xffffffff821aa684,&stack_pair_2920.first,1);
      if (iStack_290c != 0) {
        fn_822315A0();
      }
      pcVar6 = acStack_2850;
      lVar7 = 9;
      do {
        pcVar6 = pcVar6 + -0x10;
        fn_82273C88(pcVar6);
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      fn_82273C88(&stack_pair_2920.first);
      return;
    }
  } while( true );
}

