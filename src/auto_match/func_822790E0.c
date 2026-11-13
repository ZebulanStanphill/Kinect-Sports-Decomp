extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_12c;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82278E58();
extern int fn_8251F720();
extern int fn_82526C70();
extern int fn_82528EE0();
extern int fn_82672C20();
extern int fn_82837D98();
extern int fn_82F63108();
extern unsigned int iStack_108;
extern unsigned int iStack_118;
extern unsigned int iStack_f8;
extern unsigned int uStack_130;
extern unsigned int uStack_d8;
extern unsigned int uStack_e8;


void fn_822790E0(int param_1,int param_2)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  char *pcVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar6;
  unsigned int *puVar9;
  unsigned char *puVar10;
  __int64 lVar11;
  unsigned int uStack_130;
  unsigned int auStack_12c [3];
  unsigned char auStack_120 [8];
  int iStack_118;
  unsigned char auStack_110 [8];
  int iStack_108;
  unsigned char auStack_100 [8];
  int iStack_f8;
  unsigned char auStack_f0 [8];
  unsigned char uStack_e8;
  unsigned char auStack_e0 [8];
  unsigned char uStack_d8;
  unsigned char auStack_d0 [208];
  
  pcVar7 = (char *)(param_1 + 100);
  iVar5 = (param_2 + 0x88) - (int)pcVar7;
  do {
    if ((char *)(param_1 + 0xa4) <= pcVar7) break;
    cVar1 = pcVar7[iVar5];
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (pcVar7 == (char *)(param_1 + 0xa4)) {
    pcVar7[-1] = '\0';
  }
  puVar9 = (unsigned int *)(param_1 + 0x60);
  uVar2 = 0;
  uStack_130 = 0;
  *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(param_2 + 0xa8);
  if (*(int *)(param_1 + 0x270) == 0) {
    fn_82528EE0(param_1 + 0xa4,0x40,0xffffffff821a7c80,param_2 + 0x28);
    fn_82528EE0(param_1 + 0x124,0x40,0xffffffff821a7c80,param_2 + 0x48);
    fn_82528EE0(param_1 + 0x1a4,0x40,0xffffffff821a7c80,param_2 + 0x68);
  }
  else {
    if (*(int *)(param_1 + 0x270) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    uVar2 = (**(int (***)())(**(int **)(param_1 + 0x270) + 4))
                      (*(int **)(param_1 + 0x270),&uStack_130,param_2 + 0x28,param_1 + 0xa4,0x40);
    if (*(int *)(param_1 + 0x270) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    uVar3 = (**(int (***)())(**(int **)(param_1 + 0x270) + 4))
                      (*(int **)(param_1 + 0x270),&uStack_130,param_2 + 0x48,param_1 + 0x124,0x40);
    if (*(int *)(param_1 + 0x270) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    uVar4 = (**(int (***)())(**(int **)(param_1 + 0x270) + 4))
                      (*(int **)(param_1 + 0x270),&uStack_130,param_2 + 0x68,param_1 + 0x1a4,0x40);
    uVar2 = uVar4 | uVar3 | uVar2;
  }
  puVar8 = auStack_12c;
  lVar11 = 5;
  do {
    puVar8[3] = 0;
    puVar8 = puVar8 + 4;
    *puVar8 = 0;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  fn_82273CD8(auStack_120,5);
  iStack_118 = param_1 + 0xa4;
  fn_82273CD8(auStack_110,5);
  iStack_108 = param_1 + 0x124;
  fn_82273CD8(auStack_100,5);
  iStack_f8 = param_1 + 0x1a4;
  fn_82273CD8(auStack_f0,2);
  uStack_e8 = 1;
  fn_82273CD8(auStack_e0,2);
  uStack_d8 = 0;
  fn_82526C70(auStack_d0,0x80,0xffffffff821a81b8,param_1 + 0x18);
  fn_82672C20(*(unsigned int *)(param_1 + 8),auStack_d0,auStack_120,5);
  puVar10 = auStack_d0;
  lVar11 = 4;
  do {
    puVar10 = puVar10 + -0x10;
    fn_82273C88(puVar10);
    lVar11 = lVar11 + -1;
  } while (-1 < lVar11);
  if (uStack_130 != 0) {
    *puVar9 = uStack_130;
  }
  if (puVar9 != (unsigned int *)0x0) {
    uVar6 = (unsigned __int64)*puVar9;
    if (uVar6 != (uVar6 - 1) + (unsigned __int64)(uVar6 == 0)) {
      iVar5 = fn_8251F720(puVar9,0);
      *(int *)(param_1 + 0x58) = iVar5;
      fn_82837D98(*(unsigned int *)(iVar5 + 0x14),0,auStack_12c);
      fn_82278E58(param_1,auStack_12c[0]);
    }
  }
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_2 + 4);
  *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_2 + 4);
  *(unsigned int *)(param_1 + 0x5c) = *(unsigned int *)(param_2 + 0xb4);
  *(unsigned int *)(param_1 + 0x224) = (unsigned int)LZCOUNT(uVar2) >> 5;
  return;
}

