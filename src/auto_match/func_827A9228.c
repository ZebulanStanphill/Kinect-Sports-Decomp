extern int fn_8278FED0();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


unsigned int * fn_827A9228(unsigned int *param_1,int *param_2,unsigned int param_3)

{
  unsigned char bVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uStack00000024;
  
  if (param_2[1] != 0) {
    uStack00000024 = param_3;
    iVar4 = fn_8278FED0(param_2,0,param_2[1],&stack0x00000024,0xffffffff827a8328);
    if (iVar4 == param_2[1]) {
      iVar4 = iVar4 + -1;
    }
    piVar2 = *(int **)(iVar4 * 4 + *param_2);
    uVar5 = piVar2[2];
    if ((*piVar2 < 0) && (uVar5 = uVar5 & 0xffffff, uVar5 == 0xffffff)) {
      uVar5 = 0xffffffff;
    }
    if (uVar5 <= param_3) {
      if (*piVar2 < 0) {
        uVar6 = (unsigned int)*(unsigned char *)(piVar2 + 2);
      }
      else {
        uVar6 = piVar2[8];
      }
      if (param_3 <= uVar6 + uVar5) {
        bVar1 = *(unsigned char *)(param_2 + 0x1d);
        param_1[2] = iVar4;
        *param_1 = param_2;
        param_1[1] = 0;
        *(unsigned char *)(param_1 + 4) = bVar1 >> 2 & 1;
        uVar3 = lbl_821AAD20;
        goto LAB_827a9318;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = lbl_821AAD20;
  param_1[2] = 0;
  *(unsigned char *)(param_1 + 4) = 0;
LAB_827a9318:
  param_1[3] = uVar3;
  return param_1;
}

