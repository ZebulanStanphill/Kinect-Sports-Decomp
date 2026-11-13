#define TBLr 0
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82DFE6F8();
extern int fn_82DFF728();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_82DFFAB0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int iVar7;
  unsigned int *puVar8;
  int iVar9;
  unsigned __int64 uVar6;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  struct { unsigned int first; unsigned int second; } stack_pair_90;

  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_7c;
  
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(unsigned int **)(iVar7 + 4);
  if (puVar2 < *(unsigned int **)(iVar7 + 0xc)) {
    *puVar2 = "TtDoVehicles";
    uVar5 = TBLr;
    puVar2[1] = (int)uVar5;
    *(unsigned int **)(iVar7 + 4) = puVar2 + 3;
  }
  uVar11 = *(unsigned int *)(param_1 + 0xc);
  uVar13 = (unsigned __int64)uVar11;
  fn_82DFF728(param_1,param_4,param_3);
  stack_pair_90.first = 0;
  stack_pair_90.second = 0;
  uStack_88 = 0x80000000;
  uVar10 = (unsigned __int64)uStack_7c;
  puVar8 = (unsigned int *)fn_82CE5410();
  stack_pair_90.first = *puVar8;
  *puVar8 = stack_pair_90.first + 0x600;
  uStack_88 = 0x80000010;
  uStack_84 = stack_pair_90.first;
  if (0 < (int)uVar11) {
    iVar7 = 0;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 8) + iVar7);
      bVar1 = *(unsigned char *)(*(int *)(iVar4 + 0x1c) + 0x20);
      iVar9 = fn_82CE5410();
      if ((uStack_88 & 0x3fffffff) < (unsigned int)bVar1) {
        uVar11 = (uStack_88 & 0x3fffffff) << 1;
        if (uVar11 <= bVar1) {
          uVar11 = (unsigned int)bVar1;
        }
        fn_82CE6310(*(unsigned int *)(iVar9 + 0x10),&stack_pair_90.first,uVar11);
      }
      uVar11 = (unsigned int)bVar1;
      uVar12 = 0;
      piVar3 = *(int **)(iVar4 + 0x3c);
      stack_pair_90.second = uVar11;
      if (uVar11 != 0) {
        do {
          iVar9 = (**(int (***)())(*piVar3 + 0x3c))(piVar3,uVar12,uVar10);
          if (iVar9 == 0) {
            (**(int (***)())(*piVar3 + 0x48))(piVar3,iVar4,uVar12,uVar12 * 0x60 + (unsigned __int64)stack_pair_90.first);
          }
          else {
            (**(int (***)())(*piVar3 + 0x44))();
          }
          (**(int (***)())(*piVar3 + 0x2c))(piVar3,iVar4,uVar12,uVar12 * 0x60 + (unsigned __int64)stack_pair_90.first);
          uVar6 = (**(int (***)())(*piVar3 + 0x34))(piVar3,uVar12);
          uVar12 = uVar12 + 1 & 0xff;
          uVar10 = (uVar6 + (uVar6 & 0x3fffffff) * 4 & 0xfffffff) * 0x10 + uVar10;
        } while ((unsigned int)uVar12 < uVar11);
      }
      fn_82DFE6F8(*(unsigned int *)(*(int *)(param_1 + 8) + iVar7),param_2,stack_pair_90.first);
      uVar13 = uVar13 - 1;
      iVar7 = iVar7 + 4;
    } while (uVar13 != 0);
  }
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  uVar11 = uStack_84;
  puVar2 = *(unsigned int **)(iVar7 + 4);
  if (puVar2 < *(unsigned int **)(iVar7 + 0xc)) {
    *puVar2 = &lbl_82132BC4;
    uVar5 = TBLr;
    puVar2[1] = (int)uVar5;
    *(unsigned int **)(iVar7 + 4) = puVar2 + 3;
  }
  stack_pair_90.second = -(unsigned int)(stack_pair_90.first != uStack_84) & stack_pair_90.second;
  puVar8 = (unsigned int *)fn_82CE5410();
  *puVar8 = uVar11;
  iVar7 = fn_82CE5410();
  stack_pair_90.second = 0;
  if ((uStack_88 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar7 + 0x10) + 0x10))
              (*(int **)(iVar7 + 0x10),stack_pair_90.first,uStack_88 & 0x3fffffff,0x60);
  }
  return;
}

