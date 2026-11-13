extern int fn_8268E320();
extern int fn_8268E408();
extern int fn_8268E490();
extern int fn_8268E570();
extern int fn_8268E5C8();
extern int fn_8268E6F0();


void fn_8268EE18(unsigned int *param_1,int param_2,unsigned int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int iVar7;
  
  puVar5 = param_1 + 4;
  iVar7 = *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0x14);
  piVar3 = (int *)fn_8268E6F0(puVar5,iVar7 + -1);
  if (((piVar3 == (int *)0x0) || (piVar3[8] != param_2)) ||
     ((piVar3[9] << (*param_1 & 0x3f)) + (int)piVar3 != iVar7)) {
    uVar4 = *param_1;
    *(int *)(iVar7 + 0x20) = param_2;
    uVar4 = param_3 >> (uVar4 & 0x3f);
    *(unsigned int *)(iVar7 + 0x24) = uVar4;
    fn_8268E570(param_1 + 3,iVar7);
    fn_8268E320(puVar5,iVar7);
    uVar4 = param_1[5] + uVar4;
  }
  else {
    puVar6 = param_1 + 3;
    param_1[5] = param_1[5] - piVar3[9];
    piVar1 = (int *)*piVar3;
    if (piVar1 == piVar3) {
      fn_8268E490(puVar6,piVar3);
    }
    else {
      piVar2 = (int *)piVar3[1];
      *piVar2 = (int)piVar1;
      piVar1[1] = (int)piVar2;
      fn_8268E408(puVar6,piVar3);
    }
    fn_8268E5C8(puVar5,piVar3);
    uVar4 = *param_1;
    piVar3[8] = param_2;
    iVar7 = (param_3 >> (uVar4 & 0x3f)) + piVar3[9];
    piVar3[9] = iVar7;
    fn_8268E570(puVar6,piVar3);
    fn_8268E320(puVar5,piVar3);
    uVar4 = param_1[5] + iVar7;
  }
  param_1[5] = uVar4;
  *(unsigned int *)(param_2 + 0x14) = param_3 + *(int *)(param_2 + 0x14);
  return;
}

