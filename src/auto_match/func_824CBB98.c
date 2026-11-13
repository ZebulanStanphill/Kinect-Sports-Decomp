extern unsigned int *auStack_48;
extern int fn_824CB7E0();
extern int fn_824CC150();
extern int fn_824CC2A0();
extern int fn_824CC510();
extern int fn_8260D428();


unsigned int * fn_824CBB98(unsigned int *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  int *piVar7;
  int *apiStack_50 [2];
  unsigned char auStack_48 [72];
  
  apiStack_50[0] = (int *)0x0;
  puVar4 = (unsigned int *)(param_4 + 0x10);
  if (*(int *)(param_2 + 8) == 0) {
    param_3 = *(int **)(param_2 + 4);
  }
  else {
    piVar3 = *(int **)(param_2 + 4);
    if (param_3 != (int *)*piVar3) {
      if (param_3 == piVar3) {
        if (0xf < *(unsigned int *)(param_4 + 0x24)) {
          puVar4 = (unsigned int *)*puVar4;
        }
        iVar2 = fn_8260D428(piVar3[2] + 0x10,0,*(unsigned int *)(piVar3[2] + 0x20),puVar4,
                             *(unsigned int *)(param_4 + 0x20));
        if (-1 < iVar2) goto LAB_824cbde8;
        uVar5 = 0;
        param_3 = *(int **)(*(int *)(param_2 + 4) + 8);
        goto LAB_824cbbe0;
      }
      piVar7 = param_3 + 4;
      piVar3 = piVar7;
      if (0xf < (unsigned int)param_3[9]) {
        piVar3 = (int *)*piVar7;
      }
      iVar2 = fn_8260D428(puVar4,0,*(unsigned int *)(param_4 + 0x20),piVar3,param_3[8]);
      if (iVar2 < 0) {
        apiStack_50[0] = param_3;
        piVar3 = (int *)fn_824CC510(apiStack_50);
        puVar6 = puVar4;
        if (0xf < *(unsigned int *)(param_4 + 0x24)) {
          puVar6 = (unsigned int *)*puVar4;
        }
        iVar2 = fn_8260D428(*piVar3 + 0x10,0,*(unsigned int *)(*piVar3 + 0x20),puVar6,
                             *(unsigned int *)(param_4 + 0x20));
        if (-1 < iVar2) goto LAB_824cbd34;
        cVar1 = *(char *)(apiStack_50[0][2] + 0xb9);
        piVar3 = apiStack_50[0];
      }
      else {
LAB_824cbd34:
        puVar6 = puVar4;
        if (0xf < *(unsigned int *)(param_4 + 0x24)) {
          puVar6 = (unsigned int *)*puVar4;
        }
        iVar2 = fn_8260D428(piVar7,0,param_3[8],puVar6,*(unsigned int *)(param_4 + 0x20));
        if (-1 < iVar2) {
LAB_824cbde8:
          puVar4 = (unsigned int *)fn_824CC150(auStack_48,param_2,param_4);
          *param_1 = *puVar4;
          return param_1;
        }
        apiStack_50[0] = param_3;
        piVar3 = (int *)fn_824CB7E0(apiStack_50);
        if (*piVar3 != *(int *)(param_2 + 4)) {
          piVar3 = apiStack_50[0] + 4;
          if (0xf < (unsigned int)apiStack_50[0][9]) {
            piVar3 = (int *)*piVar3;
          }
          iVar2 = fn_8260D428(puVar4,0,*(unsigned int *)(param_4 + 0x20),piVar3,apiStack_50[0][8]);
          if (-1 < iVar2) goto LAB_824cbde8;
        }
        cVar1 = *(char *)(param_3[2] + 0xb9);
        piVar3 = param_3;
        param_3 = apiStack_50[0];
      }
      if (cVar1 == '\0') {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        param_3 = piVar3;
      }
      goto LAB_824cbbe0;
    }
    piVar3 = param_3 + 4;
    if (0xf < (unsigned int)param_3[9]) {
      piVar3 = (int *)*piVar3;
    }
    iVar2 = fn_8260D428(puVar4,0,*(unsigned int *)(param_4 + 0x20),piVar3,param_3[8]);
    if (-1 < iVar2) goto LAB_824cbde8;
  }
  uVar5 = 1;
LAB_824cbbe0:
  fn_824CC2A0(param_1,param_2,uVar5,param_3,param_4);
  return param_1;
}

