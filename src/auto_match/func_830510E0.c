extern int fn_8304FCF0();


unsigned __int64
fn_830510E0(int param_1,int param_2,__int64 *param_3,unsigned int *param_4,unsigned int *param_5,
             unsigned __int64 param_6)

{
  unsigned char uVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  
  *(int *)(param_1 + 0x60) = param_2;
  if (*param_3 < 0) {
    return 0x1f;
  }
  *(__int64 *)(param_1 + 0x18) = *param_3;
  *(__int64 *)(param_1 + 0x20) = param_3[1];
  *(__int64 *)(param_1 + 0x28) = param_3[2];
  *(__int64 *)(param_1 + 0x30) = param_3[3];
  iVar3 = (**(int (***)())(**(int **)(param_2 + 0x80) + 8))
                    (*(int **)(param_2 + 0x80),(__int64 *)(param_1 + 0x18));
  *(int *)(param_1 + 0x6c) = iVar3;
  if (iVar3 == 0) {
    return 2;
  }
  *(unsigned int *)(param_1 + 0x9c) = 0;
  *(unsigned int *)(param_1 + 0xa4) = 0;
  *(unsigned int *)(param_1 + 0xa0) = 0;
  uVar2 = *(unsigned int *)(param_1 + 0x6c);
  uVar5 = (unsigned __int64)uVar2;
  lVar4 = *(__int64 *)(param_1 + 0x18);
  *(unsigned int *)(param_1 + 0x88) = *param_4;
  trapWord(6,uVar5,0);
  *(unsigned int *)(param_1 + 0x8c) = ((unsigned int)param_4[1] / uVar2) * uVar2;
  if (lVar4 < (__int64)(unsigned __int64)(unsigned int)param_4[2]) {
    *(int *)(param_1 + 0x90) = (int)lVar4;
  }
  else {
    *(unsigned int *)(param_1 + 0x90) = param_4[2];
  }
  iVar3 = param_4[3];
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x94) = iVar3;
  uVar1 = *(unsigned char *)(param_4 + 4);
  *(unsigned __int64 *)(param_1 + 0x80) =
       (__int64)*(int *)(param_1 + 0x20) * (__int64)(int)uVar2 & 0xffffffff;
  *(unsigned char *)(param_1 + 0x70) = uVar1;
  if (param_5 == (unsigned int *)0x0) {
    *(int *)(param_1 + 0x68) = (int)param_6;
    goto LAB_83051264;
  }
  uVar9 = *param_5;
  if ((unsigned __int64)uVar9 == 0) {
    uVar6 = (unsigned __int64)param_5[1];
    if ((unsigned __int64)param_5[1] <= (param_6 & 0xffffffff)) {
      uVar6 = param_6;
    }
    *(int *)(param_1 + 0x68) = (int)uVar6;
    uVar9 = param_5[2];
    uVar8 = (unsigned __int64)uVar9;
    if (uVar8 == 0) goto LAB_83051264;
    trapWord(6,uVar8,0);
    lVar7 = uVar6 - (__int64)(int)((uVar6 & 0xffffffff) / uVar8) * (__int64)(int)uVar9;
    if (lVar7 == 0) goto LAB_83051264;
    uVar9 = (uVar9 - (int)lVar7) + (int)uVar6;
  }
  else {
    param_6 = uVar9 - param_6;
    trapWord(6,uVar5,0);
    if (param_6 != (__int64)(int)((param_6 & 0xffffffff) / uVar5) * (__int64)(int)uVar2) {
      return 0x1f;
    }
  }
  *(unsigned int *)(param_1 + 0x68) = uVar9;
LAB_83051264:
  uVar9 = *(unsigned int *)(param_1 + 0x68);
  trapWord(6,uVar5,0);
  lVar7 = (unsigned __int64)uVar9 - (__int64)(int)(uVar9 / uVar2) * (__int64)(int)uVar2;
  if (lVar7 != 0) {
    *(unsigned int *)(param_1 + 0x68) = (uVar9 - (int)lVar7) + uVar2;
  }
  if (lVar4 == 0) {
    fn_8304FCF0(param_1,1);
  }
  return 1;
}

