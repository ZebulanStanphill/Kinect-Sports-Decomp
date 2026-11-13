extern unsigned int *auStack_20;
extern unsigned int fStack_18;
extern int fn_822CEEC8();


unsigned __int64 fn_822CEF30(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar4;
  unsigned __int64 uVar3;
  double extraout_f1;
  double extraout_f1_00;
  double dVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_20 [8];
  float fStack_18;
  
  puVar1 = (unsigned int *)((int)param_1 + 0x80U & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  iVar4 = fn_822CEEC8();
  dVar5 = (double)fStack_18;
  if (((iVar4 != 0) && (-extraout_f1 < dVar5)) ||
     ((iVar4 = fn_822CEEC8(param_1), iVar4 == 0 && (dVar5 < extraout_f1_00)))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

