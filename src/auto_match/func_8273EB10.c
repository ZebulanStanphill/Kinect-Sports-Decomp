typedef unsigned char bool;
extern unsigned int *auStack_1b0;
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_8268C6A8();
extern int fn_8268C6F8();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_82696958();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_826EF268();
extern int fn_826EF5E8();
extern int fn_826EF828();
extern int fn_826F0128();
extern int fn_8273D858();
extern int fn_8273E568();
extern unsigned int iStack_1dc;
extern unsigned int lbl_8200C4D4;
extern unsigned int uStack_1c8;
extern unsigned int uStack_1cc;
extern unsigned int uStack_1d0;
extern unsigned int uStack_1d4;
extern unsigned int uStack_1d8;
extern unsigned int uStack_1e0;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8273EB10(int param_1,int *param_2,unsigned char *param_3)

{
  bool bVar1;
  int (**pcVar2)();
  unsigned int uVar3;
  int iVar6;
  __int64 lVar4;
  int iVar7;
  unsigned __int64 uVar5;
  char cVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char bVar11;
  unsigned int uStack_1e0;
  int iStack_1dc;
  unsigned int uStack_1d8;
  unsigned int uStack_1d4;
  unsigned int uStack_1d0;
  unsigned int uStack_1cc;
  unsigned int uStack_1c8;
  unsigned int *puStack_1c4;
  int *piStack_1c0;
  int *piStack_1bc;
  unsigned char auStack_1b0 [12];
  unsigned char **appuStack_1a4 [105];
  
  fn_8268C6A8(&uStack_1e0,*(unsigned int *)*param_2,((unsigned int *)*param_2)[4]);
  bVar11 = *param_3;
  if (bVar11 == 0) {
    fn_8268C510(&uStack_1cc,0xffffffff82196582);
    (**(int (***)())(**(int **)(param_1 + 0xc) + 0x10))
              (*(int **)(param_1 + 0xc),&uStack_1e0,&uStack_1cc,0);
    lVar4 = ((unsigned __int64)uStack_1cc & 0xfffffffc) + 4;
    do {
      puVar9 = (unsigned int *)lVar4;
      uVar10 = (unsigned __int64)*puVar9;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar10 - 1,0,lVar4);
        *puVar9 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  else if (bVar11 == 1) {
    fn_8268C510(&uStack_1d4,0xffffffff82196582);
    (**(int (***)())(**(int **)(param_1 + 0xc) + 0x10))
              (*(int **)(param_1 + 0xc),&uStack_1e0,&uStack_1d4,1);
    lVar4 = ((unsigned __int64)uStack_1d4 & 0xfffffffc) + 4;
    do {
      puVar9 = (unsigned int *)lVar4;
      uVar10 = (unsigned __int64)*puVar9;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar10 - 1,0,lVar4);
        *puVar9 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  else if (bVar11 < 3) {
    cVar8 = fn_82695608(param_3,*(unsigned int *)(param_1 + 8));
    bVar11 = (cVar8 == '\0') << 1;
    if (cVar8 == '\0') {
      uVar5 = 0xffffffff82196f10;
    }
    else {
      uVar5 = 0xffffffff82196f18;
    }
    fn_8268C510(&uStack_1c8,uVar5);
    (**(int (***)())(**(int **)(param_1 + 0xc) + 0x10))
              (*(int **)(param_1 + 0xc),&uStack_1e0,&uStack_1c8,2);
    lVar4 = ((unsigned __int64)uStack_1c8 & 0xfffffffc) + 4;
    do {
      puVar9 = (unsigned int *)lVar4;
      uVar10 = (unsigned __int64)*puVar9;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar10 - 1,0,lVar4);
        *puVar9 = uVar3;
        bVar11 = 2;
      }
    } while (!(bool)(bVar11 >> 1 & 1));
  }
  else {
    if (bVar11 < 5) {
      fn_826972E0(param_3,*(unsigned int *)(param_1 + 8));
      fn_826F0128(auStack_1b0);
      fn_826EF5E8(auStack_1b0);
      uVar5 = fn_826EF828(auStack_1b0);
      fn_8268C6F8(&uStack_1d8,appuStack_1a4,uVar5);
      (**(int (***)())(**(int **)(param_1 + 0xc) + 0x10))
                (*(int **)(param_1 + 0xc),&uStack_1e0,&uStack_1d8,3);
      lVar4 = ((unsigned __int64)uStack_1d8 & 0xfffffffc) + 4;
      do {
        puVar9 = (unsigned int *)lVar4;
        uVar10 = (unsigned __int64)*puVar9;
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed(uVar10 - 1,0,lVar4);
          *puVar9 = uVar3;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      in_cr0 = (uVar10 == 1) << 1;
      if (uVar10 == 1) {
        fn_8267BE38();
      }
      appuStack_1a4[0] = &lbl_8200C4D4;
      fn_826EF268(auStack_1b0);
      goto LAB_8273eefc;
    }
    if (bVar11 != 5) {
      if (bVar11 < 7) {
        iVar6 = fn_82696958(param_3,*(unsigned int *)(param_1 + 8));
        iVar7 = param_1 + 4;
        iStack_1dc = iVar6;
        lVar4 = fn_8273E568(iVar7,&iStack_1dc);
        bVar1 = (-(unsigned __int64)(lVar4 != 0) & lVar4 + 4U) == 0;
        in_cr0 = bVar1 << 1;
        if (bVar1) {
          piStack_1c0 = &iStack_1dc;
          piStack_1bc = &iStack_1dc;
          fn_8273D858(iVar7,iVar7,&piStack_1c0,iVar6);
          iVar7 = (**(int (***)())(*(int *)(iStack_1dc + 0x10) + 8))();
          iVar6 = **(int **)(param_1 + 0xc);
          if (iVar7 == 7) {
            (**(int (***)())(iVar6 + 0xc))();
            (**(int (***)())(*(int *)(iStack_1dc + 0x10) + 0x20))
                      ((int *)(iStack_1dc + 0x10),(unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x78,param_1,0
                       ,0);
            pcVar2 = *(int (***)())(**(int **)(param_1 + 0xc) + 0x18);
          }
          else {
            (**(int (***)())(iVar6 + 8))(*(int **)(param_1 + 0xc),&uStack_1e0);
            (**(int (***)())(*(int *)(iStack_1dc + 0x10) + 0x20))
                      ((int *)(iStack_1dc + 0x10),(unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x78,param_1,0
                       ,0);
            pcVar2 = *(int (***)())(**(int **)(param_1 + 0xc) + 0x14);
          }
          (*pcVar2)();
        }
      }
      goto LAB_8273eefc;
    }
    fn_82696D38(&puStack_1c4,param_3,*(unsigned int *)(param_1 + 8),0xffffffffffffffff,0);
    fn_8268C510(&uStack_1d0,*puStack_1c4);
    lVar4 = (unsigned __int64)(unsigned int)puStack_1c4[2] - 1;
    bVar11 = (lVar4 == 0) << 1;
    puStack_1c4[2] = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8(puStack_1c4);
    }
    (**(int (***)())(**(int **)(param_1 + 0xc) + 0x10))
              (*(int **)(param_1 + 0xc),&uStack_1e0,&uStack_1d0,4);
    lVar4 = ((unsigned __int64)uStack_1d0 & 0xfffffffc) + 4;
    do {
      puVar9 = (unsigned int *)lVar4;
      uVar10 = (unsigned __int64)*puVar9;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar10 - 1,0,lVar4);
        *puVar9 = uVar3;
        bVar11 = 2;
      }
    } while (!(bool)(bVar11 >> 1 & 1));
  }
  in_cr0 = (uVar10 == 1) << 1;
  if (uVar10 == 1) {
    fn_8267BE38();
  }
LAB_8273eefc:
  lVar4 = ((unsigned __int64)uStack_1e0 & 0xfffffffc) + 4;
  do {
    puVar9 = (unsigned int *)lVar4;
    uVar10 = (unsigned __int64)*puVar9;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed(uVar10 - 1,0,lVar4);
      *puVar9 = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar10 == 1) {
    fn_8267BE38();
  }
  return;
}

