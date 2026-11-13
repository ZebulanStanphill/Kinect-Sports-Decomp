extern int fn_8260D428();
extern int fn_828A0D90();
extern int fn_828C1F70();
extern int fn_828C2EF8();
extern int fn_828C30F8();


unsigned int * fn_828C32C0(unsigned int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int *puVar4;
  int *piVar5;
  int * apiStack_50;
  
  puVar2 = (unsigned int *)(param_4 + 0xc);
  if (*(int *)(param_2 + 8) == 0) {
    fn_828C2EF8(param_1,param_2,1,*(unsigned int *)(param_2 + 4),param_4);
    return param_1;
  }
  piVar3 = *(int **)(param_2 + 4);
  if (param_3 == (int *)*piVar3) {
    piVar3 = param_3 + 3;
    if (0xf < (unsigned int)param_3[8]) {
      piVar3 = (int *)*piVar3;
    }
    iVar1 = fn_8260D428(puVar2,0,*(unsigned int *)(param_4 + 0x1c),piVar3,param_3[7]);
    if (iVar1 < 0) {
      fn_828C2EF8(param_1,param_2,1,param_3,param_4);
      return param_1;
    }
  }
  else if (param_3 == piVar3) {
    if (0xf < *(unsigned int *)(param_4 + 0x20)) {
      puVar2 = (unsigned int *)*puVar2;
    }
    iVar1 = fn_8260D428(piVar3[2] + 0xc,0,*(unsigned int *)(piVar3[2] + 0x1c),puVar2,
                         *(unsigned int *)(param_4 + 0x1c));
    if (iVar1 < 0) {
      fn_828C2EF8(param_1,param_2,0,*(unsigned int *)(*(int *)(param_2 + 4) + 8),param_4);
      return param_1;
    }
  }
  else {
    piVar5 = param_3 + 3;
    piVar3 = piVar5;
    if (0xf < (unsigned int)param_3[8]) {
      piVar3 = (int *)*piVar5;
    }
    iVar1 = fn_8260D428(puVar2,0,*(unsigned int *)(param_4 + 0x1c),piVar3,param_3[7]);
    if (iVar1 < 0) {
      apiStack_50 = param_3;
      fn_828C1F70(&apiStack_50);
      piVar3 = apiStack_50;
      puVar4 = puVar2;
      if (0xf < *(unsigned int *)(param_4 + 0x20)) {
        puVar4 = (unsigned int *)*puVar2;
      }
      iVar1 = fn_8260D428(apiStack_50 + 3,0,apiStack_50[7],puVar4,
                           *(unsigned int *)(param_4 + 0x1c));
      if (iVar1 < 0) {
        if (*(char *)(piVar3[2] + 0x39) != '\0') {
          fn_828C2EF8(param_1,param_2,0,piVar3,param_4);
          return param_1;
        }
        fn_828C2EF8(param_1,param_2,1,param_3,param_4);
        return param_1;
      }
    }
    puVar4 = puVar2;
    if (0xf < *(unsigned int *)(param_4 + 0x20)) {
      puVar4 = (unsigned int *)*puVar2;
    }
    iVar1 = fn_8260D428(piVar5,0,param_3[7],puVar4,*(unsigned int *)(param_4 + 0x1c));
    if (iVar1 < 0) {
      apiStack_50 = param_3;
      fn_828A0D90(&apiStack_50);
      piVar3 = apiStack_50;
      if (apiStack_50 != *(int **)(param_2 + 4)) {
        piVar5 = apiStack_50 + 3;
        if (0xf < (unsigned int)apiStack_50[8]) {
          piVar5 = (int *)*piVar5;
        }
        iVar1 = fn_8260D428(puVar2,0,*(unsigned int *)(param_4 + 0x1c),piVar5,apiStack_50[7]);
        if (-1 < iVar1) goto LAB_828c3570;
      }
      if (*(char *)(param_3[2] + 0x39) != '\0') {
        fn_828C2EF8(param_1,param_2,0,param_3,param_4);
        return param_1;
      }
      fn_828C2EF8(param_1,param_2,1,piVar3,param_4);
      return param_1;
    }
  }
LAB_828c3570:
  puVar2 = (unsigned int *)fn_828C30F8(&apiStack_50,param_2,param_4,0);
  *param_1 = *puVar2;
  return param_1;
}

