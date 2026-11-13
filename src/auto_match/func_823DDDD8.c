extern int fn_82250A18();
extern int fn_82359698();
extern int fn_8236B4F0();
extern int fn_824C97F0();
extern unsigned int lbl_82193CF0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_832975B0;


void fn_823DDDD8(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  
  iVar2 = *(int *)(param_2 + 8);
  if (*(int *)(param_2 + 0x10) == 0) {
    return;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0x14) + param_1);
  *(float *)(param_2 + 0x14) = fVar1;
  if (fVar1 < lbl_82193CF0) {
    return;
  }
  if (*(int *)(iVar2 + 0xe2c) == 0) {
    uVar6 = 0xffffffff821a6a9c;
  }
  else {
    uVar6 = 0xffffffff821a6b18;
  }
  piVar3 = (int *)(*(unsigned int **)(iVar2 + 0xa8))[1];
  for (piVar7 = (int *)**(unsigned int **)(iVar2 + 0xa8); piVar7 != piVar3; piVar7 = piVar7 + 2) {
    fn_824C97F0(*(unsigned int *)(*piVar7 + 0x28),uVar6);
  }
  if (*(int *)(iVar2 + 0xe6c) != 0) {
    iVar4 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar4 = fn_82250A18();
    }
    if (*(char *)(iVar4 + 4) == '\0') {
      *(unsigned int *)(iVar2 + 0xe7c) = *(unsigned int *)(param_2 + 0xc);
      uVar5 = 0x12;
      if (*(int *)(iVar2 + 0xe80) == 0) {
        uVar5 = 7;
      }
      *(unsigned int *)(iVar2 + 0xe78) = uVar5;
      iVar4 = *(int *)(iVar2 + 0x94);
      if (iVar4 != 0) {
        *(unsigned int *)(iVar4 + 0x3c) = 1;
        *(unsigned int *)(iVar4 + 0x48) = 0;
      }
      fn_82359698(iVar2,0x14);
      *(unsigned int *)(iVar2 + 0xe70) = 1;
      goto LAB_823ddf0c;
    }
  }
  fn_82359698(iVar2,0x12);
  if (*(int *)(*(int *)(iVar2 + 0x4b0) + 0xd4) == 0) {
    fn_8236B4F0((double)lbl_821CA460,iVar2);
  }
LAB_823ddf0c:
  *(unsigned int *)(param_2 + 0x10) = 0;
  return;
}

