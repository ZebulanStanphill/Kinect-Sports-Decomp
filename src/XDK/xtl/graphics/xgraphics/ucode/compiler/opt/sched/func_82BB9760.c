extern int fn_82AB15D0();
extern int fn_82BB5C08();
extern int fn_82BB6DE8();
extern int fn_82BB7C70();
extern int fn_82BB8880();
extern int fn_82BB9628();
extern int fn_82BBFD48();
extern int fn_82BBFDD0();
extern int fn_82BC0088();


void fn_82BB9760(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int *piVar4;
  char cVar6;
  int iVar5;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  int iVar10;
  int *piVar11;
  
  fn_82BB6DE8();
  fn_82BB7C70(param_1);
  puVar1 = *(unsigned int **)(param_1 + 0x74);
  iVar5 = *(int *)(param_2 + 100);
  uVar8 = 0;
  if (*puVar1 != 0) {
    puVar7 = puVar1 + 2;
    do {
      uVar8 = uVar8 + 1;
      *puVar7 = *(unsigned int *)((iVar5 - (int)puVar1) + (int)puVar7);
      puVar7 = puVar7 + 1;
    } while (uVar8 < *puVar1);
  }
  uVar9 = 0;
  if (*(int *)(*(int *)(param_1 + 0x14) + 4) != 0) {
    iVar5 = 0;
    do {
      iVar10 = *(int *)(param_1 + 0x14);
      if ((uVar9 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar10 + 4)) {
        piVar4 = (int *)(*(int *)(iVar10 + 8) + iVar5);
      }
      else {
        piVar4 = (int *)fn_82BC0088(iVar10,uVar9);
      }
      iVar10 = *(int *)(*piVar4 + 0x28);
      if ((*(unsigned int *)(iVar10 + 0xe4) >> 6 & 1) != 0) {
        if ((*(unsigned int *)(((*(unsigned int *)(iVar10 + 0x38) >> 5) + 2) * 4 + *(int *)(param_2 + 100)) >>
             (*(unsigned int *)(iVar10 + 0x38) & 0x1f) & 1) == 0) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0768,0xffffffff820e0168,0x4f7);
        }
        if ((*(unsigned int *)(((*(unsigned int *)(iVar10 + 0x38) >> 5) + 2) * 4 + *(int *)(param_2 + 0x68)) >>
             (*(unsigned int *)(iVar10 + 0x38) & 0x1f) & 1) != 0) {
          iVar10 = *(int *)(param_1 + 0x14);
          if ((uVar9 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar10 + 4)) {
            piVar4 = (int *)(*(int *)(iVar10 + 8) + iVar5);
          }
          else {
            piVar4 = (int *)fn_82BC0088(iVar10,uVar9);
          }
          *(int *)(*piVar4 + 0x3c) = *(int *)(*piVar4 + 0x3c) + 1;
        }
      }
      uVar9 = uVar9 + 1;
      iVar5 = iVar5 + 4;
    } while ((uVar9 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x14) + 4));
  }
  (**(int (***)())**(unsigned int **)(param_1 + 8))();
  puVar2 = *(unsigned int **)(param_1 + 0xc);
  uVar9 = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0xffffffff;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x78) = 0;
  *(unsigned int *)(param_1 + 0x70) = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  if (0 < iVar5) {
    iVar10 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x18);
      if ((uVar9 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar3 + 4)) {
        piVar4 = (int *)(*(int *)(iVar3 + 8) + iVar10);
      }
      else {
        piVar4 = (int *)fn_82BC0088(iVar3,uVar9);
      }
      if (*(int *)(*piVar4 + 0x24) == 0) {
        fn_82BB5C08(param_1);
      }
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 4;
    } while ((int)uVar9 < iVar5);
  }
  piVar11 = (int *)0x0;
  piVar4 = *(int **)(*(int *)(param_1 + 0x10) + 0x1c);
  if (piVar4[2] != 0) {
    do {
      if ((piVar4[0x39] & 1U) != 0) {
        cVar6 = (**(int (***)())(*piVar4 + 0x24))(piVar4);
        if (((cVar6 == '\0') && (cVar6 = (**(int (***)())(*piVar4 + 0x28))(piVar4), cVar6 == '\0')) &&
           (iVar5 = (**(int (***)())(*piVar4 + 0x2c))(piVar4), iVar5 == 0)) {
          fn_82BBFDD0(piVar4);
        }
        else {
          iVar5 = (**(int (***)())(*piVar4 + 0x2c))(piVar4);
          if (iVar5 == 0) {
            uVar8 = piVar4[0x39] & 0xfffffffb;
          }
          else {
            uVar8 = piVar4[0x39] | 4;
            piVar11 = piVar4;
          }
          piVar4[0x39] = uVar8;
        }
      }
      piVar4 = (int *)piVar4[2];
    } while (piVar4[2] != 0);
    if (piVar11 != (int *)0x0) {
      piVar11[0x39] = piVar11[0x39] & 0xfffffffb;
    }
  }
  while (cVar6 = fn_82BBFD48(param_1 + 0x24), cVar6 == '\0') {
    fn_82BB9628(param_1);
  }
  if (*(int *)(*(int *)(param_1 + 0xc) + 8) <= *(int *)(*(int *)(param_1 + 0xc) + 0xc)) {
    iVar5 = 0;
    for (uVar8 = 1; uVar8 <= *(unsigned int *)(*(int *)(param_2 + 0x38) + 4); uVar8 = uVar8 + 1) {
      *(unsigned char *)(*(int *)(*(int *)(*(int *)(param_2 + 0x38) + 8) + iVar5) + 0x7c) = 1;
      iVar5 = iVar5 + 4;
    }
  }
  fn_82BB8880(param_1);
  return;
}

