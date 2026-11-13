typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_822ABA88();
extern int fn_822CFA38();
extern int fn_823737B8();
extern int fn_82375CA8();
extern int fn_823814C0();
extern int fn_82381548();
extern int fn_823815D0();
extern int fn_82381B20();
extern unsigned int lbl_831CB188;


unsigned __int64
fn_82381948(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar4;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  
  iVar5 = fn_823814C0(param_1,param_3);
  iVar5 = *(int *)(&lbl_831CB188 + iVar5 * 0x10);
  iVar6 = fn_823814C0(param_1,param_2);
  if (iVar6 == 3) {
    return 0;
  }
  iVar8 = *(int *)(param_1 + 4);
  iVar7 = fn_823737B8(iVar8);
  if ((iVar6 == 0xf) || (bVar2 = false, iVar6 == 0x10)) {
    bVar2 = true;
  }
  if ((iVar7 == 0) || (bVar2)) {
    uVar9 = fn_82381B20(param_1,param_2,param_4);
    bVar3 = false;
    if ((bVar2) && (uVar4 = fn_82381548(param_1,param_2), (int)uVar9 != (int)uVar4)) {
      piVar1 = *(int **)(**(int **)(iVar8 + 8) + (int)((param_2 & 0xffffffff) << 2));
      iVar6 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),uVar4);
      iVar6 = fn_82375CA8(iVar8,*(unsigned int *)(iVar6 + 0x2c),1);
      if (iVar6 != 0) {
        bVar3 = true;
        uVar9 = uVar4;
      }
    }
    piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 4) + 8) + (int)((param_2 & 0xffffffff) << 2));
    iVar6 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),uVar9);
    if ((param_5 == 0) || (iVar8 = fn_822CFA38(iVar6,0xb), iVar8 == 0)) {
      if (bVar3) {
        fn_82375CA8(*(unsigned int *)(param_1 + 4),*(unsigned int *)(iVar6 + 0x2c),1);
      }
      if (!bVar2) {
        return 0;
      }
      fn_823815D0(param_1,param_2,0xffffffffffffffff,3);
      return 0;
    }
    uVar10 = 0xe;
    if (iVar5 == 0) {
      uVar10 = 0xd;
    }
  }
  else {
    if (iVar5 == 0) {
      return 1;
    }
    uVar9 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x28);
    uVar10 = 0xe;
  }
  fn_823815D0(param_1,param_2,uVar9,uVar10);
  return 1;
}

