extern int fn_82681728();
extern int fn_82693A98();
extern int fn_82693B08();
extern int fn_826944C8();
extern int fn_82694A78();
extern int fn_82696D38();
extern int fn_826C1BA0();
extern int fn_8271D378();
extern int fn_8271DCB8();
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


unsigned __int64
fn_8271DF00(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned char bVar1;
  char cVar5;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  int iStack_50;
  int iStack_4c;
  struct { int first; int second; } stack_pair_48;

  
  bVar1 = *(unsigned char *)(param_2 + 0x7c);
  puVar8 = (unsigned int *)(param_2 + 0x78);
  fn_82681728(&stack_pair_48.first,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x254,0xffffffff8200feb8);
  cVar5 = fn_8271D378(&stack_pair_48.first,param_3,-(6 < bVar1) & 1);
  lVar7 = (unsigned __int64)*(unsigned int *)(stack_pair_48.first + 8) - 1;
  *(int *)(stack_pair_48.first + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(stack_pair_48.first);
  }
  if (cVar5 != '\0') {
    fn_82696D38(&iStack_50,param_4,param_2,0xffffffffffffffff,0);
    iVar2 = (**(int (***)())(**(int **)(param_1 + 0x24) + 0x70))();
    fn_82681728(&stack_pair_48.first,(unsigned __int64)*puVar8 + 0x254,0xffffffff8200ff84);
    cVar5 = fn_8271D378(&stack_pair_48.first,&iStack_50,0);
    lVar7 = (unsigned __int64)*(unsigned int *)(stack_pair_48.first + 8) - 1;
    *(int *)(stack_pair_48.first + 8) = (int)lVar7;
    if (lVar7 == 0) {
      fn_826944C8(stack_pair_48.first);
    }
    if (cVar5 == '\0') {
      fn_82681728(&stack_pair_48.first,(unsigned __int64)*puVar8 + 0x254,0xffffffff8200ff8c);
      cVar5 = fn_8271D378(&stack_pair_48.first,&iStack_50,0);
      lVar7 = (unsigned __int64)*(unsigned int *)(stack_pair_48.first + 8) - 1;
      *(int *)(stack_pair_48.first + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(stack_pair_48.first);
      }
      if (cVar5 == '\0') {
        fn_82681728(&stack_pair_48.first,(unsigned __int64)*puVar8 + 0x254,0xffffffff8200ff98);
        cVar5 = fn_8271D378(&stack_pair_48.first,&iStack_50,0);
        lVar7 = (unsigned __int64)*(unsigned int *)(stack_pair_48.first + 8) - 1;
        *(int *)(stack_pair_48.first + 8) = (int)lVar7;
        if (lVar7 == 0) {
          fn_826944C8(stack_pair_48.first);
        }
        iVar4 = (-(unsigned int)(cVar5 != '\0') & 2) + 1;
      }
      else {
        iVar4 = 2;
      }
    }
    else {
      iVar4 = 0;
    }
    (**(int (***)())(**(int **)(param_1 + 0x24) + 0x6c))(*(int **)(param_1 + 0x24),iVar4);
    iStack_4c = iStack_50;
    if ((iVar2 != iVar4) && (iVar4 == 0)) {
      fn_8271DCB8(param_1 + -0x10,param_2);
      iStack_4c = iStack_50;
    }
    goto LAB_8271e0f8;
  }
  bVar1 = *(unsigned char *)(param_2 + 0x7c);
  fn_82681728(&stack_pair_48.first,(unsigned __int64)*puVar8 + 0x254,0xffffffff8200feb0);
  cVar5 = fn_8271D378(&stack_pair_48.first,param_3,-(6 < bVar1) & 1);
  lVar7 = (unsigned __int64)*(unsigned int *)(stack_pair_48.first + 8) - 1;
  *(int *)(stack_pair_48.first + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(stack_pair_48.first);
  }
  if (cVar5 == '\0') {
    uVar6 = fn_826C1BA0(param_1,param_2,param_3,param_4,param_5);
    return uVar6;
  }
  fn_82696D38(&stack_pair_48.second,param_4,param_2,0xffffffffffffffff,0);
  fn_82694A78(&iStack_4c,&stack_pair_48.second);
  lVar7 = (unsigned __int64)*(unsigned int *)(stack_pair_48.second + 8) - 1;
  *(int *)(stack_pair_48.second + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(stack_pair_48.second);
  }
  iVar2 = 0;
  uVar3 = fn_82693A98(&iStack_4c);
  if (uVar3 == 0) {
LAB_8271e2b8:
    uVar6 = 0;
    goto LAB_8271e2bc;
  }
  iVar4 = fn_82693B08(&iStack_4c,0);
  if (1 < uVar3) {
    iVar2 = fn_82693B08(&iStack_4c,1);
  }
  if ((iVar4 == 0x54) && (iVar2 == 0x4c)) {
LAB_8271e218:
    uVar6 = 5;
  }
  else {
    if (iVar4 == 0x4c) {
      if (iVar2 != 0x54) {
        if (iVar2 == 0x42) {
LAB_8271e280:
          uVar6 = 7;
        }
        else {
          uVar6 = 3;
        }
        goto LAB_8271e2bc;
      }
      goto LAB_8271e218;
    }
    if ((iVar4 == 0x54) && (iVar2 == 0x52)) {
LAB_8271e240:
      uVar6 = 6;
    }
    else if (iVar4 == 0x52) {
      if (iVar2 == 0x54) goto LAB_8271e240;
      if (iVar2 == 0x42) {
LAB_8271e290:
        uVar6 = 8;
      }
      else {
        uVar6 = 4;
      }
    }
    else {
      if (iVar4 == 0x42) {
        if (iVar2 == 0x4c) goto LAB_8271e280;
        if (iVar2 == 0x52) goto LAB_8271e290;
      }
      if (iVar4 == 0x54) {
        uVar6 = 1;
      }
      else {
        if (iVar4 != 0x42) goto LAB_8271e2b8;
        uVar6 = 2;
      }
    }
  }
LAB_8271e2bc:
  (**(int (***)())(**(int **)(param_1 + 0x24) + 0x74))(*(int **)(param_1 + 0x24),uVar6);
LAB_8271e0f8:
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_4c + 8) - 1;
  *(int *)(iStack_4c + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_4c);
  }
  return 1;
}

