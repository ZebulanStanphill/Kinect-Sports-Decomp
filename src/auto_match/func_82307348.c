extern int fn_822ABA88();
extern int fn_82306A50();
extern int fn_82307528();
extern int fn_82307E78();
extern int fn_823692A0();
extern int fn_8236ABC0();


void fn_82307348(unsigned __int64 param_1,int param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar9;
  unsigned __int64 uVar8;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x20c) = 0;
  if (*(int *)(param_2 + 0xd0) != 7) {
    iVar3 = *(int *)(*(int *)(param_2 + 0xc) + 0x24);
    if (iVar3 == 0) {
      iVar3 = fn_8236ABC0(*(unsigned int *)(param_2 + 0x10),
                                *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x2c));
      uVar9 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0xdc)) >> 5;
    }
    else if ((*(int *)(param_2 + 0xdc) == 0) || (*(int *)(param_2 + 0xdc) == iVar3)) {
      uVar9 = 1;
      *(int *)(param_2 + 0xdc) = iVar3;
    }
    else {
      uVar9 = 0;
    }
    if ((iVar3 == 0) || (iVar3 = 2, uVar9 == 0)) {
      iVar3 = 1;
    }
    iVar7 = *(int *)(param_2 + 0x10);
    uVar6 = *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x2c);
    iVar4 = fn_823692A0(iVar7,*(unsigned int *)(*(int *)(param_2 + 0xc) + 0x28));
    if (iVar4 == 0) {
      uVar8 = 0xffffffffffffffff;
    }
    else {
      uVar8 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x28);
    }
    uVar5 = (unsigned __int64)*(unsigned int *)(param_2 + 0xd8);
    if ((*(unsigned int *)(param_2 + 0xd8) != 0xffffffff) && ((int)uVar8 == -1)) {
      piVar1 = *(int **)(((unsigned int)LZCOUNT(uVar6) >> 3 & 4) + **(int **)(iVar7 + 8));
      iVar4 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1));
      uVar8 = uVar5;
    }
    if (iVar4 != 0) {
      if ((iVar3 != *(int *)(param_2 + 0xd4)) || ((uVar8 & 0xffffffff) != (uVar5 & 0xffffffff))) {
        if (iVar3 == 1) {
          fn_82306A50(param_2);
        }
        else if (iVar3 == 2) {
          puVar2 = (unsigned int *)(param_2 + 0xb0U & 0xfffffff0);
          *puVar2 = in_register_000104d0;
          puVar2[1] = in_register_000104d4;
          puVar2[2] = in_register_000104d8;
          puVar2[3] = in_vr77;
          *(unsigned int *)(param_2 + 0xa0) = 0;
          puVar2 = (unsigned int *)(param_2 + 0xc0U & 0xfffffff0);
          *puVar2 = in_register_000104d0;
          puVar2[1] = in_register_000104d4;
          puVar2[2] = in_register_000104d8;
          puVar2[3] = in_vr77;
          *(unsigned char *)(param_2 + 0x40) = 0;
          puVar2 = (unsigned int *)(param_2 + 0x80U & 0xfffffff0);
          *puVar2 = in_register_000104d0;
          puVar2[1] = in_register_000104d4;
          puVar2[2] = in_register_000104d8;
          puVar2[3] = in_vr77;
          *(unsigned int *)(param_2 + 0xd0) = 8;
          puVar2 = (unsigned int *)(param_2 + 0x90U & 0xfffffff0);
          *puVar2 = in_register_000104d0;
          puVar2[1] = in_register_000104d4;
          puVar2[2] = in_register_000104d8;
          puVar2[3] = in_vr77;
          puVar2 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
          *puVar2 = in_register_000104d0;
          puVar2[1] = in_register_000104d4;
          puVar2[2] = in_register_000104d8;
          puVar2[3] = in_vr77;
          puVar2 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
          *puVar2 = in_register_000104d0;
          puVar2[1] = in_register_000104d4;
          puVar2[2] = in_register_000104d8;
          puVar2[3] = in_vr77;
        }
        *(int *)(param_2 + 0xd4) = iVar3;
      }
      if (*(int *)(param_2 + 0xd4) == 1) {
        fn_82307E78(param_1,param_2);
      }
      else if (*(int *)(param_2 + 0xd4) == 2) {
        fn_82307528(param_2,iVar4);
      }
    }
    *(int *)(param_2 + 0xd8) = (int)uVar8;
  }
  return;
}

