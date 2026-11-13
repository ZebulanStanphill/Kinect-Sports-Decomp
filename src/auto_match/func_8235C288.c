extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern int fn_822315A0();
extern int fn_8229ACA0();
extern int fn_8229AE10();
extern int fn_822ABA88();
extern int fn_822ACAD8();
extern int fn_822B67F8();
extern int fn_822B98A8();
extern int fn_8235D648();
extern int fn_82414950();
extern int fn_82418250();
extern int fn_82526C70();
extern int fn_826728E8();
extern int fn_82672C20();
extern unsigned int iStack_a4;
extern unsigned int iStack_ac;


void fn_8235C288(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  unsigned char auStack_b0 [4];
  int iStack_ac;
  unsigned char auStack_a8 [4];
  int iStack_a4;
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [128];
  
  puVar2 = (unsigned int *)fn_8229AE10(auStack_b0,*(unsigned int *)(param_1 + 0xd4));
  fn_82672C20(*puVar2,0xffffffff821aa69c,0,0);
  if (iStack_ac != 0) {
    fn_822315A0();
  }
  iVar6 = 0;
  if (((*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) & 0xfffffffcU) != 0) {
    do {
      piVar1 = *(int **)(iVar6 * 4 + **(int **)(param_1 + 8));
      fn_822ACAD8(*(unsigned int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x48),0xffffffff821ac494
                        ,0xffffffff821ac49c);
      uVar3 = 0;
      uVar4 = 0;
      iVar5 = *(int *)(piVar1[4] * 4 + *piVar1);
      if (*(int *)(iVar5 + 8) != 0) {
        do {
          fn_822ABA88(iVar5,uVar4);
          if ((int)uVar3 == 0) {
            iVar5 = *(int *)(param_1 + 0xd4);
            fn_822B67F8();
            uVar3 = fn_822B98A8();
            fn_82526C70(auStack_a0,0x20,0xffffffff821aa618,iVar6);
            puVar2 = (unsigned int *)fn_8229AE10(auStack_a8,iVar5);
            fn_826728E8(*puVar2,auStack_a0,uVar3);
            if (iStack_a4 != 0) {
              fn_822315A0();
            }
            puVar2 = *(unsigned int **)(iVar5 + 0xc);
            fn_82526C70(auStack_80,0x20,0xffffffff821ab74c,iVar6 + 1);
            fn_826728E8(*puVar2,auStack_80,uVar3);
            uVar3 = 1;
          }
          uVar4 = uVar4 + 1;
          iVar5 = *(int *)(piVar1[4] * 4 + *piVar1);
        } while ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar5 + 8));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) >> 2);
  }
  *(unsigned int *)(param_1 + 0xf0) = 1;
  *(unsigned int *)(param_1 + 0x2cc4) = *(unsigned int *)(param_1 + 0x2cc4) | 1;
  fn_8235D648(param_1);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0xc04)) {
    iVar5 = param_1 + 0x1ec0;
    do {
      fn_82418250(iVar5,((~(unsigned __int64)*(unsigned int *)(param_1 + 0x174) & 0xffffffff) >> 0x1f) +
                              (unsigned __int64)(1 < (unsigned __int64)*(unsigned int *)(param_1 + 0x174)) & 1,param_3);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x420;
    } while (iVar6 < *(int *)(param_1 + 0xc04));
  }
  if ((*(int *)(param_1 + 0x174) < 2) && (*(int *)(param_1 + 0xc38) == 0)) {
    fn_82414950(*(unsigned int *)(param_1 + 0x2b50),0,0);
  }
  *(unsigned int *)(param_1 + 0x174) = 2;
  fn_8229ACA0(*(unsigned int *)(param_1 + 0xd4),*(unsigned int *)(param_1 + 0xd0));
  return;
}

