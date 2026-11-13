extern int fn_82ABDD90();
extern int fn_82AC9F80();
extern int fn_82AD1978();
extern int fn_82AD1A40();
extern int fn_82B1B3F8();
extern int fn_82B477E0();
extern int fn_82B4B498();
extern int fn_82B4BAA8();
extern int fn_82B4CB10();
extern int fn_82B841E8();
extern int fn_82B8F328();


void fn_82B4E148(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  
  if ((**(unsigned int **)(param_1 + 0x38) & 0x200) == 0) {
    uVar11 = fn_82B477E0(param_1);
  }
  else {
    if (((*(unsigned int **)(param_1 + 0x248))[1] & 1) == 0) {
      iVar5 = (**(unsigned int **)(param_1 + 0x248) & 0xfffffffe) - 4;
    }
    else {
      iVar5 = 0;
    }
    uVar11 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar5 + 8) * 0x20 + iVar5 + -4);
  }
  fn_82B8F328(*(unsigned int *)(param_1 + 0x234),uVar11,param_1);
  *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
  *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | 0x800000;
  *(unsigned int *)(*(int *)(param_1 + 0x234) + 0x44) =
       *(unsigned int *)(*(int *)(param_1 + 0x234) + 0x44) | 0x80000000;
  iVar5 = fn_82B841E8(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x234),
                            (unsigned __int64)*(unsigned int *)(param_1 + 0x234) + 0x18,0x75,0,0);
  *(unsigned int *)(iVar5 + 8) = *(unsigned int *)(iVar5 + 8) | 0x2000000;
  iVar6 = fn_82ABDD90(param_1,0x75,0,0);
  puVar10 = (unsigned int *)(iVar6 + iVar5 + -0x10);
  puVar10[1] = 2;
  *puVar10 = *puVar10 | 7;
  puVar10[2] = *(unsigned int *)(param_1 + 0x22c);
  puVar10[3] = param_3;
  iVar6 = fn_82B841E8(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x234),
                            (unsigned __int64)*(unsigned int *)(param_1 + 0x234) + 0x18,0x75,0,0);
  *(unsigned int *)(iVar6 + 8) = *(unsigned int *)(iVar6 + 8) | 0x2000000;
  fn_82AD1A40(iVar6,iVar5,param_1);
  if (*(unsigned int **)(param_1 + 0x38) != (unsigned int *)0x0) {
    uVar1 = **(unsigned int **)(param_1 + 0x38);
    if ((uVar1 & 0x500) != 0) {
      uVar9 = *(unsigned int *)(param_1 + 0x20);
      if ((uVar1 & 0x200) == 0) {
        fn_82B4B498(param_1);
      }
      iVar6 = fn_82B477E0(param_1);
      *(unsigned int *)(iVar6 + 0x44) = *(unsigned int *)(iVar6 + 0x44) | 0x40000000;
      *(unsigned int *)(iVar6 + 0x30) = *(unsigned int *)(iVar6 + 0x30) | 0x10000000;
      fn_82B8F328(*(unsigned int *)(param_1 + 0x234),iVar6,param_1);
      iVar7 = fn_82B477E0(param_1);
      *(unsigned int *)(iVar7 + 0x30) = *(unsigned int *)(iVar7 + 0x30) | 0x10000000;
      fn_82B8F328(iVar6,iVar7,param_1);
      fn_82B8F328(iVar7,uVar11,param_1);
      iVar8 = fn_82B841E8(param_1,iVar6,iVar6 + 0x20,0x75,0,0);
      *(unsigned int *)(iVar8 + 8) = *(unsigned int *)(iVar8 + 8) | 0x2000000;
      iVar6 = fn_82B841E8(param_1,iVar6,iVar6 + 0x20,0x75,0,0);
      *(unsigned int *)(iVar6 + 8) = *(unsigned int *)(iVar6 + 8) | 0x2000000;
      fn_82AD1A40(iVar6,iVar8,param_1);
      iVar6 = fn_82B841E8(param_1,iVar7,iVar7 + 0x20,0x75,0,0);
      *(unsigned int *)(iVar6 + 8) = *(unsigned int *)(iVar6 + 8) | 0x2000000;
      iVar7 = fn_82B841E8(param_1,iVar7,iVar7 + 0x20,0x75,0,0);
      *(unsigned int *)(iVar7 + 8) = *(unsigned int *)(iVar7 + 8) | 0x2000000;
      fn_82AD1A40(iVar7,iVar6,param_1);
      uVar3 = fn_82B4CB10(param_1,0,iVar5,param_2);
      uVar4 = fn_82AC9F80(param_1,uVar3,7);
      fn_82AD1978(iVar5,uVar4);
      *(unsigned int *)(iVar5 + 8) = *(unsigned int *)(iVar5 + 8) & 0xfff9ffff | 0x20000;
      uVar1 = *(unsigned int *)(param_1 + 0x234);
      uVar3 = fn_82AC9F80(param_1,uVar3,7);
      iVar6 = fn_82B1B3F8(param_1,*(unsigned int *)(param_1 + 0x234),(unsigned __int64)uVar1 + 0x20,
                                uVar3);
      uVar1 = *(unsigned int *)(iVar6 + 8);
      *(unsigned int *)(iVar6 + 8) = uVar1 | 0x60000;
      iVar5 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
      puVar2 = (unsigned int *)(iVar5 + iVar6 + -0x10);
      *puVar2 = (int)uVar11;
      puVar2[3] = puVar2[3] | 4;
      uVar1 = *(unsigned int *)(iVar6 + 8);
      iVar5 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
      iVar5 = iVar5 + iVar6 + -0x10;
      *(unsigned int *)(iVar5 + 8) = *(unsigned int *)(iVar5 + 8) & 0xfffffe00 | 0x20;
      *(unsigned int *)(param_1 + 0x20) = uVar9;
      *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 4;
      goto LAB_82b4e54c;
    }
  }
  iVar5 = fn_82B841E8(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x234),
                            (unsigned __int64)*(unsigned int *)(param_1 + 0x234) + 0x18,0x67,1,1);
  iVar6 = fn_82ABDD90(param_1,0x67,*(unsigned int *)(iVar5 + 8) >> 0x13 & 7,0);
  *(unsigned int *)(iVar6 + iVar5 + -4) = 0xf;
  uVar3 = fn_82B4BAA8(param_1,param_2);
  uVar9 = fn_82AD1978(iVar5,uVar3);
  *(unsigned int *)(iVar5 + 0x2c) = uVar9;
  *(unsigned int *)(iVar5 + 8) = *(unsigned int *)(iVar5 + 8) | 0x2000000;
  *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | 0x400;
LAB_82b4e54c:
  puVar10 = *(unsigned int **)(param_1 + 0x38);
  if ((*puVar10 & 0x200) == 0) {
    *(int *)(param_1 + 0x234) = (int)uVar11;
  }
  if (puVar10 != (unsigned int *)0x0) {
    puVar10[7] = 1;
  }
  return;
}

