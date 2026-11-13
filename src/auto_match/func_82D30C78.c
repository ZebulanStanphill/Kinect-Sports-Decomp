extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82CE5410();
extern int fn_82D2BA38();
extern int fn_82D2BAB0();
extern int fn_82D2D830();
extern int fn_82D2D908();
extern int fn_82D2E8C0();


void fn_82D30C78(int param_1,char param_2)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  unsigned char auStack_130 [32];
  unsigned char auStack_110 [32];
  unsigned char auStack_f0 [32];
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [48];
  unsigned char auStack_80 [48];
  
  fn_82D2BA38(param_1 + 0x10);
  fn_82D2BAB0(param_1 + 0x28);
  puVar8 = (unsigned int *)(param_1 + 600);
  lVar9 = 0x100;
  do {
    puVar8 = puVar8 + 1;
    *puVar8 = 0;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  if (*(int *)(param_1 + 0x24c) != 0) {
    iVar3 = fn_82CE5410();
    piVar1 = *(int **)(iVar3 + 0x10);
    fn_82D2E8C0(*(unsigned int *)(param_1 + 0x24c),0);
    (**(int (***)())(*piVar1 + 8))(piVar1,*(unsigned int *)(param_1 + 0x24c),0x10);
    *(unsigned int *)(param_1 + 0x24c) = 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x254)) {
    iVar5 = 0;
    do {
      uVar2 = *(unsigned int *)(iVar5 + *(int *)(param_1 + 0x250));
      iVar4 = fn_82CE5410();
      (**(int (***)())(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),uVar2,0x388);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x254));
  }
  *(unsigned int *)(param_1 + 0x254) = 0;
  if (param_2 != '\0') {
    iVar6 = param_1 + 0x10;
    iVar3 = fn_82D2D830(iVar6,auStack_d0);
    *(unsigned int *)(iVar3 + 8) = 0;
    *(unsigned int *)(iVar3 + 0xc) = 0;
    *(unsigned int *)(iVar3 + 0x10) = 0x7fffffff;
    iVar5 = fn_82D2D830(iVar6,auStack_f0);
    *(unsigned int *)(iVar5 + 8) = 0;
    *(unsigned int *)(iVar5 + 0xc) = 0x7fff;
    *(unsigned int *)(iVar5 + 0x10) = 0x7fffffff;
    iVar4 = fn_82D2D830(iVar6,auStack_130);
    *(unsigned int *)(iVar4 + 8) = 0x7fff;
    *(unsigned int *)(iVar4 + 0xc) = 0;
    *(unsigned int *)(iVar4 + 0x10) = 0x7fffffff;
    iVar6 = fn_82D2D830(iVar6,auStack_110);
    *(unsigned int *)(iVar6 + 8) = 0x7fff;
    *(unsigned int *)(iVar6 + 0xc) = 0x7fff;
    *(unsigned int *)(iVar6 + 0x10) = 0x7fffffff;
    iVar7 = fn_82D2D908(param_1 + 0x28,auStack_b0);
    *(unsigned short *)(iVar7 + 0x20) = 0;
    *(int *)(iVar7 + 8) = iVar3;
    *(int *)(iVar7 + 0xc) = iVar4;
    *(int *)(iVar7 + 0x10) = iVar6;
    *(unsigned short *)(iVar7 + 0x22) = 0;
    *(int *)((((*(int *)(iVar3 + 0xc) + *(int *)(iVar4 + 0xc) + *(int *)(iVar6 + 0xc)) / 3 >> 0xb) *
              0x10 + ((*(int *)(iVar3 + 8) + *(int *)(iVar4 + 8) + *(int *)(iVar6 + 8)) / 3 >> 0xb)
             + 0x97) * 4 + param_1) = iVar7;
    *(unsigned short *)(iVar7 + 0x20) = *(unsigned short *)(iVar7 + 0x20) | 0x1000;
    iVar4 = fn_82D2D908(param_1 + 0x28,auStack_80);
    *(unsigned short *)(iVar4 + 0x20) = 0;
    *(int *)(iVar4 + 8) = iVar3;
    *(int *)(iVar4 + 0xc) = iVar6;
    *(int *)(iVar4 + 0x10) = iVar5;
    *(unsigned short *)(iVar4 + 0x22) = 0;
    *(int *)((((*(int *)(iVar3 + 0xc) + *(int *)(iVar6 + 0xc) + *(int *)(iVar5 + 0xc)) / 3 >> 0xb) *
              0x10 + ((*(int *)(iVar3 + 8) + *(int *)(iVar6 + 8) + *(int *)(iVar5 + 8)) / 3 >> 0xb)
             + 0x97) * 4 + param_1) = iVar4;
    *(unsigned short *)(iVar4 + 0x20) = *(unsigned short *)(iVar4 + 0x20) | 0x1000;
    *(unsigned int *)(iVar7 + 0x1c) = 0;
    *(unsigned int *)(iVar7 + 0x18) = 0;
    *(unsigned int *)(iVar7 + 0x14) = 0;
    *(unsigned int *)(iVar4 + 0x1c) = 0;
    *(unsigned int *)(iVar4 + 0x18) = 0;
    *(unsigned int *)(iVar4 + 0x14) = 0;
    *(int *)(iVar7 + 0x1c) = iVar4;
    *(int *)(iVar4 + 0x14) = iVar7 + 2;
  }
  return;
}

