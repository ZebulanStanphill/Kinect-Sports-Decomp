extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82CEA4B8();
extern int fn_82CEAAA0();
extern int fn_82CEAB00();
extern int fn_82D27D00();
extern int fn_82D2D320();
extern int fn_82D2D400();
extern int iRam8323b6bc;
extern int iRam8323b6c0;
extern unsigned int uRam8323b6c4;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


int fn_82D28488(int param_1)

{
  unsigned int uVar1;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  __int64 lVar9;
  int *piVar10;
  int *piVar11;
  unsigned int *puVar12;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  
  iVar3 = fn_82CE5410();
  iVar3 = (**(int (***)())(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x7e0);
  *(unsigned short *)(iVar3 + 4) = 0x7e0;
  iVar3 = fn_82D27D00();
  stack_pair_70.first = 0;
  stack_pair_70.second = 0;
  uStack_68 = 0xffffffff;
  iVar4 = fn_82CE5410();
  fn_82CEAB00(&stack_pair_70.first,*(unsigned int *)(iVar4 + 0x10),0);
  *(unsigned int *)(iVar3 + 0x38) = *(unsigned int *)(param_1 + 0x38);
  piVar11 = *(int **)(param_1 + 0x14);
  if (piVar11 != (int *)0x0) {
    do {
      uVar2 = fn_82D2D320(iVar3 + 8,piVar11);
      iVar4 = fn_82CE5410();
      fn_82CEA160(&stack_pair_70.first,*(unsigned int *)(iVar4 + 0x10),piVar11,uVar2);
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)0x0);
  }
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0xffffffff;
  iVar4 = fn_82CE5410();
  fn_82CEAB00(&uStack_80,*(unsigned int *)(iVar4 + 0x10),0);
  piVar11 = *(int **)(param_1 + 0x2c);
  if (piVar11 != (int *)0x0) {
    do {
      iVar4 = fn_82D2D400(iVar3 + 0x20,piVar11);
      lVar9 = 3;
      puVar12 = (unsigned int *)(iVar4 + 8);
      iVar8 = (int)piVar11 - iVar4;
      do {
        uVar5 = fn_82CEA280(&stack_pair_70.first,*(unsigned int *)(iVar8 + (int)puVar12),0);
        *puVar12 = uVar5;
        lVar9 = lVar9 + -1;
        puVar12 = puVar12 + 1;
      } while (lVar9 != 0);
      piVar10 = (int *)(iVar4 + 0x14);
      lVar9 = 3;
      do {
        uVar1 = *(unsigned int *)((int)piVar10 + iVar8);
        if ((uVar1 & 0xfffffffc) == 0) {
          if ((uRam8323b6c4 & 1) == 0) {
            uRam8323b6c4 = uRam8323b6c4 | 1;
            iRam8323b6bc = 0;
            iRam8323b6c0 = 0;
          }
          *piVar10 = iRam8323b6c0 + iRam8323b6bc;
          if (iRam8323b6bc != 0) {
            *(int *)((iRam8323b6c0 + 5) * 4 + iRam8323b6bc) = iVar4;
          }
        }
        else {
          uVar6 = fn_82CEA280(&uStack_80,(uVar1 & 3) + (uVar1 & 0xfffffffc),0);
          uVar1 = uVar6 & 0xfffffffc;
          if (uVar1 == 0) {
            iVar7 = fn_82CE5410();
            fn_82CEA160(&uStack_80,*(unsigned int *)(iVar7 + 0x10),iVar4 + iVar8,iVar4);
          }
          else {
            *piVar10 = (uVar6 & 3) + uVar1;
            *(int *)(((uVar6 & 3) + 5) * 4 + uVar1) = iVar4;
            fn_82CEAAA0(&uStack_80,iVar4 + iVar8);
          }
        }
        lVar9 = lVar9 + -1;
        piVar10 = piVar10 + 1;
        iVar4 = iVar4 + 1;
      } while (lVar9 != 0);
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)0x0);
  }
  iVar4 = fn_82CE5410();
  fn_82CEA4B8(&uStack_80,*(unsigned int *)(iVar4 + 0x10));
  fn_82BA02A8(&uStack_80);
  iVar4 = fn_82CE5410();
  fn_82CEA4B8(&stack_pair_70.first,*(unsigned int *)(iVar4 + 0x10));
  fn_82BA02A8(&stack_pair_70.first);
  return iVar3;
}

