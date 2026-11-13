extern unsigned int *auStack_30;
extern int fn_8225F160();
extern int fn_8248C3D8();
extern int fn_824BF608();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8326B908;


unsigned __int64 fn_824BE400(double param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned char auStack_30 [48];
  
  if (param_2[0x151] == 0) {
    iVar1 = fn_8225F160();
    uVar3 = *(unsigned int *)(iVar1 + 0x68);
  }
  else {
    uVar3 = 3;
  }
  iVar1 = param_2[0x143];
  if (uVar3 < iVar1 + 1U) {
    return 0;
  }
  puVar6 = param_2 + 9;
  puVar5 = (unsigned int *)param_2[10];
  puVar4 = (unsigned int *)param_2[9];
  puVar7 = puVar4;
  if (puVar4 != puVar5) {
    do {
      if (((float)puVar7[9] < (float)puVar4[9]) && (puVar4[8] == iVar1)) {
        puVar7 = puVar4;
      }
      puVar4 = puVar4 + 10;
    } while (puVar4 != puVar5);
    if ((puVar7 != puVar5) && (lbl_8326B908 - lbl_821CA460 <= (float)puVar7[9])) {
      if (param_1 < (double)(float)puVar7[1]) {
        return 0;
      }
      goto LAB_824be4cc;
    }
  }
  uVar2 = 0;
  puVar4 = (unsigned int *)param_2[10];
  for (puVar5 = (unsigned int *)*puVar6; puVar5 != puVar4; puVar5 = puVar5 + 10) {
    if (puVar5[8] == iVar1) {
      uVar2 = uVar2 + 1;
    }
  }
  if ((unsigned __int64)(unsigned int)param_2[0x2b] / (unsigned __int64)uVar3 == 0) {
    return 0;
  }
  if ((uVar2 & 0xffffffff) < (unsigned __int64)(unsigned int)param_2[0x2b] / (unsigned __int64)uVar3) {
    return 1;
  }
  puVar7 = (unsigned int *)param_2[10];
  for (puVar5 = (unsigned int *)*puVar6; puVar5 != (unsigned int *)param_2[10]; puVar5 = puVar5 + 10) {
    if ((iVar1 == puVar5[8]) && ((puVar7 == puVar4 || ((float)puVar5[1] < (float)puVar7[1])))) {
      puVar7 = puVar5;
    }
  }
  if (puVar7 == puVar4) {
    return 0;
  }
  if (param_1 <= (double)(float)puVar7[1]) {
    return 0;
  }
LAB_824be4cc:
  fn_8248C3D8(*param_2,*puVar7);
  fn_824BF608(auStack_30,puVar6,puVar7);
  return 1;
}

