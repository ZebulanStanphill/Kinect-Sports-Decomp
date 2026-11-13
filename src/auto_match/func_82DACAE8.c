#define TBLr 0
extern int fn_82D8A4F0();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_82DACAE8(int param_1)

{
  short sVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  
  iVar6 = *(int *)(param_1 + 0x214);
  if ((iVar6 != 0) && (uVar7 = (unsigned __int64)*(unsigned short *)(iVar6 + 0xc) - 1, -1 < (__int64)uVar7)) {
    lVar8 = (uVar7 & 0x3fffffff) << 2;
    do {
      if (*(int *)((int)lVar8 + *(int *)(iVar6 + 8)) != 0) {
        iVar5 = KeTlsGetValue(lbl_8323B4A0);
        puVar2 = *(unsigned int **)(iVar5 + 4);
        if (puVar2 < *(unsigned int **)(iVar5 + 0xc)) {
          *puVar2 = "TtentRemCb";
          uVar4 = TBLr;
          puVar2[1] = (int)uVar4;
          *(unsigned int **)(iVar5 + 4) = puVar2 + 3;
        }
        piVar3 = *(int **)((int)lVar8 + *(int *)(iVar6 + 8));
        (**(int (***)())(*piVar3 + 8))(piVar3,param_1);
        iVar5 = KeTlsGetValue(lbl_8323B4A0);
        puVar2 = *(unsigned int **)(iVar5 + 4);
        if (puVar2 < *(unsigned int **)(iVar5 + 0xc)) {
          *puVar2 = &lbl_82132BC4;
          uVar4 = TBLr;
          puVar2[1] = (int)uVar4;
          *(unsigned int **)(iVar5 + 4) = puVar2 + 3;
        }
      }
      uVar7 = uVar7 - 1;
      lVar8 = lVar8 + -4;
    } while (-1 < (__int64)uVar7);
  }
  sVar1 = *(short *)(param_1 + 0xb0);
  while (sVar1 != 0) {
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar6 + 4);
    if (puVar2 < *(unsigned int **)(iVar6 + 0xc)) {
      *puVar2 = "TtentRemCb";
      uVar4 = TBLr;
      puVar2[1] = (int)uVar4;
      *(unsigned int **)(iVar6 + 4) = puVar2 + 3;
    }
    (**(int (***)())(*(int *)**(unsigned int **)(param_1 + 0xac) + 0x10))
              ((int *)**(unsigned int **)(param_1 + 0xac),param_1);
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar6 + 4);
    if (puVar2 < *(unsigned int **)(iVar6 + 0xc)) {
      *puVar2 = &lbl_82132BC4;
      uVar4 = TBLr;
      puVar2[1] = (int)uVar4;
      *(unsigned int **)(iVar6 + 4) = puVar2 + 3;
    }
    sVar1 = *(short *)(param_1 + 0xb0);
  }
  fn_82D8A4F0(param_1);
  iVar6 = *(int *)(param_1 + 0xb8);
  while (iVar6 != 0) {
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar6 + 4);
    if (puVar2 < *(unsigned int **)(iVar6 + 0xc)) {
      *puVar2 = "TtentRemCb";
      uVar4 = TBLr;
      puVar2[1] = (int)uVar4;
      *(unsigned int **)(iVar6 + 4) = puVar2 + 3;
    }
    (**(int (***)())(*(int *)**(unsigned int **)(param_1 + 0xb4) + 0x10))
              ((int *)**(unsigned int **)(param_1 + 0xb4),param_1);
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar6 + 4);
    if (puVar2 < *(unsigned int **)(iVar6 + 0xc)) {
      *puVar2 = &lbl_82132BC4;
      uVar4 = TBLr;
      puVar2[1] = (int)uVar4;
      *(unsigned int **)(iVar6 + 4) = puVar2 + 3;
    }
    iVar6 = *(int *)(param_1 + 0xb8);
  }
  sVar1 = *(short *)(param_1 + 0x20c);
  while (sVar1 != 0) {
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar6 + 4);
    if (puVar2 < *(unsigned int **)(iVar6 + 0xc)) {
      *puVar2 = "TtentRemCb";
      uVar4 = TBLr;
      puVar2[1] = (int)uVar4;
      *(unsigned int **)(iVar6 + 4) = puVar2 + 3;
    }
    (**(int (***)())(*(int *)**(unsigned int **)(param_1 + 0x208) + 0x18))
              ((int *)**(unsigned int **)(param_1 + 0x208),param_1);
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar6 + 4);
    if (puVar2 < *(unsigned int **)(iVar6 + 0xc)) {
      *puVar2 = &lbl_82132BC4;
      uVar4 = TBLr;
      puVar2[1] = (int)uVar4;
      *(unsigned int **)(iVar6 + 4) = puVar2 + 3;
    }
    sVar1 = *(short *)(param_1 + 0x20c);
  }
  return;
}

