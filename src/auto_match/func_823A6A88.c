extern unsigned int fn_823A7AE8;
extern unsigned int fn_823A7AF8;
extern unsigned int lbl_821B5670;
extern unsigned int lbl_821B5688;
extern unsigned int lbl_821B56A0;
extern unsigned int stack0x00000000;
#define CONCAT44(a, b) ((unsigned __int64)(((unsigned __int64)(a) << 32) | (unsigned __int64)(unsigned int)(b)))

/* WARNING: Inlined function: __savegprlr_29 */
/* WARNING: Removing unreachable block (ram,0x823a6be0) */
/* WARNING: Removing unreachable block (ram,0x823a6c9c) */

unsigned int * fn_823A6A88(unsigned int *param_1,unsigned int param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  unsigned int auStack_130 [8];
  unsigned int auStack_110 [6];
  unsigned char auStack_f8 [16];
  unsigned char auStack_e8 [8];
  unsigned char auStack_e0 [8];
  unsigned char auStack_d8 [8];
  unsigned char auStack_d0 [12];
  unsigned int uStack_c4;
  unsigned char auStack_c0 [32];
  unsigned int auStack_a0 [8];
  unsigned char *puStack_80;
  unsigned __int64 uStack_7c;
  unsigned char **ppuStack_70;
  unsigned int auStack_60 [4];
  unsigned int *puStack_50;
  unsigned char *puStack_40;
  unsigned __int64 uStack_3c;
  unsigned char **ppuStack_30;
  
  *param_1 = param_2;
  param_1[2] = 0;
  uVar2 = fn_8265C9E0(0x10);
  if (uVar2 == 0) {
    puVar5 = (unsigned int *)__Raise_exception_stdext__QBAXXZ(&stack0x00000000 + -0xf8);
    return puVar5;
  }
  param_1[1] = uVar2;
  *(unsigned int *)uVar2 = uVar2;
  *(unsigned int *)(param_1[1] + 4) = param_1[1];
  param_1[5] = 0;
  uVar2 = fn_8265C9E0(0x10);
  if (uVar2 == 0) {
    puVar5 = (unsigned int *)__Raise_exception_stdext__QBAXXZ(&stack0x00000000 + -0xd0);
    return puVar5;
  }
  param_1[4] = uVar2;
  *(unsigned int *)uVar2 = uVar2;
  *(unsigned int *)(param_1[4] + 4) = param_1[4];
  param_1[8] = 0;
  uVar2 = fn_8265C9E0(0x10);
  if (uVar2 == 0) {
    puVar5 = (unsigned int *)__Raise_exception_stdext__QBAXXZ(&stack0x00000000 + -0xe8);
    return puVar5;
  }
  param_1[7] = uVar2;
  *(unsigned int *)uVar2 = uVar2;
  *(unsigned int *)(param_1[7] + 4) = param_1[7];
  param_1[10] = 0xffffffff;
  param_1[0xb] = 9;
  param_1[0xc] = 0;
  uVar2 = *param_1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if ((unsigned char *)(uVar2 + 0x78) != &stack0x00000000 + -0x110) {
    piVar1 = *(int **)(uVar2 + 0x88);
    if (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 0xc))(piVar1,(int *)(uVar2 + 0x78) != piVar1);
      *(unsigned int *)(uVar2 + 0x88) = 0;
      if (&stack0x00000000 == (unsigned char *)0x110) {
        *(unsigned int *)(uVar2 + 0x88) = 0;
        goto LAB_823a6be8;
      }
    }
    puVar3 = (unsigned int *)(&stack0x00000000 + -0x110);
    uVar4 = (**(int (***)())*puVar3)(puVar3,(int *)(uVar2 + 0x78));
    *(unsigned int *)(uVar2 + 0x88) = uVar4;
  }
LAB_823a6be8:
  fn_82359C18(&stack0x00000000 + -0x110);
  uVar2 = *param_1;
  if ((unsigned char *)(uVar2 + 0xe8) != &stack0x00000000 + -0x130) {
    piVar1 = *(int **)(uVar2 + 0xf8);
    if (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 0xc))(piVar1,(int *)(uVar2 + 0xe8) != piVar1);
      *(unsigned int *)(uVar2 + 0xf8) = 0;
      if (&stack0x00000000 == (unsigned char *)0x130) {
        *(unsigned int *)(uVar2 + 0xf8) = 0;
        goto LAB_823a6ca4;
      }
    }
    puVar3 = (unsigned int *)(&stack0x00000000 + -0x130);
    uVar4 = (**(int (***)())*puVar3)(puVar3,(int *)(uVar2 + 0xe8));
    *(unsigned int *)(uVar2 + 0xf8) = uVar4;
  }
LAB_823a6ca4:
  fn_82359C18(&stack0x00000000 + -0x130);
  puVar3 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar3 == (unsigned int *)0x0) {
    puVar5 = (unsigned int *)__Raise_exception_stdext__QBAXXZ(&stack0x00000000 + -0xd8);
    return puVar5;
  }
  *puVar3 = &lbl_821B5670;
  memcpy(puVar3 + 1,&stack0x00000000 + -0xc0,0x18);
  uVar2 = *param_1;
  puStack_50 = puVar3;
  if ((unsigned char *)(uVar2 + 0x158) != &stack0x00000000 + -0x60) {
    piVar1 = *(int **)(uVar2 + 0x168);
    if (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 0xc))(piVar1,(int *)(uVar2 + 0x158) != piVar1);
      *(unsigned int *)(uVar2 + 0x168) = 0;
    }
    if (puStack_50 == (unsigned int *)0x0) {
      *(unsigned int *)(uVar2 + 0x168) = 0;
    }
    else if (puStack_50 == (unsigned int *)(&stack0x00000000 + -0x60)) {
      uVar4 = (**(int (***)())*puStack_50)(puStack_50,(int *)(uVar2 + 0x158));
      *(unsigned int *)(uVar2 + 0x168) = uVar4;
    }
    else {
      *(unsigned int **)(uVar2 + 0x168) = puStack_50;
      puStack_50 = (unsigned int *)0x0;
    }
  }
  fn_82359C18(&stack0x00000000 + -0x60);
  puVar3 = (unsigned int *)fn_8265C9E0(0x18);
  if (puVar3 != (unsigned int *)0x0) {
    puVar7 = (unsigned int *)(&stack0x00000000 + -0xc4);
    *puVar3 = &lbl_821B5688;
    lVar8 = 5;
    puVar6 = puVar3;
    do {
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar7;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    uVar2 = *param_1;
    if ((unsigned char *)(uVar2 + 0x248) != &stack0x00000000 + -0xa0) {
      piVar1 = *(int **)(uVar2 + 600);
      if (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 0xc))(piVar1,(int *)(uVar2 + 0x248) != piVar1);
        *(unsigned int *)(uVar2 + 600) = 0;
      }
      if (puVar3 == (unsigned int *)0x0) {
        *(unsigned int *)(uVar2 + 600) = 0;
      }
      else if (puVar3 == (unsigned int *)(&stack0x00000000 + -0xa0)) {
        uVar4 = (**(int (***)())*puVar3)(puVar3,(int *)(uVar2 + 0x248));
        *(unsigned int *)(uVar2 + 600) = uVar4;
      }
      else {
        *(unsigned int **)(uVar2 + 600) = puVar3;
      }
    }
    fn_82359C18(&stack0x00000000 + -0xa0);
    ppuStack_70 = &puStack_80;
    puStack_80 = &lbl_821B56A0;
    uStack_7c = CONCAT44(fn_823A7AE8,param_1);
    fn_82383300((unsigned __int64)*param_1 + 400,&stack0x00000000 + -0x80);
    fn_82359C18(&stack0x00000000 + -0x80);
    ppuStack_30 = &puStack_40;
    puStack_40 = &lbl_821B56A0;
    uStack_3c = CONCAT44(fn_823A7AF8,param_1);
    fn_82383300((unsigned __int64)*param_1 + 0x278,&stack0x00000000 + -0x40);
    fn_82359C18(&stack0x00000000 + -0x40);
    return param_1;
  }
  puVar5 = (unsigned int *)__Raise_exception_stdext__QBAXXZ(&stack0x00000000 + -0xe0);
  return puVar5;
}
