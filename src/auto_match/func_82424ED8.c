typedef unsigned char bool;
#define false 0
extern int fn_8225F160();
extern int fn_822622E8();


void fn_82424ED8(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  bool bVar11;
  double dVar12;
  
  iVar6 = param_1[1];
  if (iVar6 == *(int *)(param_1[2] + 0x2b20)) {
    iVar2 = *(int *)(iVar6 + 8);
    uVar1 = (*(int *)(iVar6 + 0xc) - iVar2) / 0x1ac;
    if (uVar1 < 4) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(unsigned int *)(iVar2 + 0x534);
    }
    if (uVar1 < 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(unsigned int *)(iVar2 + 0x388);
    }
    if (uVar1 < 2) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(unsigned int *)(iVar2 + 0x1dc);
    }
    if (uVar1 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(unsigned int *)(iVar2 + 0x30);
    }
    if (uVar1 < 2) {
      bVar11 = false;
    }
    else {
      bVar11 = *(int *)(iVar2 + 0x1b0) == 0;
    }
    dVar12 = (double)*(float *)(iVar6 + 0x2e4);
    iVar6 = fn_8225F160();
    uVar3 = *(unsigned int *)(iVar6 + 0x14);
    uVar4 = *(unsigned int *)(param_1[1] + 0x408);
    uVar5 = (**(int (***)())(*param_1 + 4))(param_1);
    fn_822622E8(dVar12,uVar4,uVar5,uVar3,bVar11,uVar10,uVar9,uVar8,uVar7);
  }
  return;
}

