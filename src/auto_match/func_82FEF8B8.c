extern unsigned char fn_83015838();
extern unsigned int lbl_83264300;


void fn_82FEF8B8(int param_1,int param_2)

{
  float iVar1;
  unsigned int iVar2;
  unsigned char cVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int *piVar6;
  int *piVar7;
  
  uVar5 = 0;
  uVar4 = 0;
  piVar7 = (int *)(*(int *)(param_1 + 0x70) + 0x14);
  piVar6 = (int *)(param_2 + -4);
  do {
    iVar2 = *piVar7;
    if (iVar2 == 0) break;
    cVar3 = fn_83015838(lbl_83264300,iVar2);
    if (cVar3 == '\0') {
      iVar1 = *(float *)(piVar7 + 1);
      piVar6[1] = iVar2;
      piVar6 = piVar6 + 2;
      *(float *)piVar6 = iVar1;
      uVar5 = uVar5 + 1;
    }
    uVar4 = uVar4 + 1;
    piVar7 = piVar7 + 2;
  } while (uVar4 < 4);
  if (uVar5 < 4) {
    *(unsigned int *)(uVar5 * 8 + param_2) = 0;
  }
  return;
}

