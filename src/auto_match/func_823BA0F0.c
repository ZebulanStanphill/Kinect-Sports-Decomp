extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_822AF200();
extern int fn_8235A028();


unsigned int * fn_823BA0F0(unsigned int *param_1,int *param_2,int param_3,int *param_4)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned __int64 *puVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned char auStack_50 [8];
  unsigned __int64 auStack_48 [1];
  
  while (param_2[2] != *(int *)(param_3 + 8)) {
    iVar6 = 0;
    if ((int *)*param_2 != (int *)0x0) {
      iVar6 = *(int *)*param_2;
    }
    uVar8 = param_2[2];
    if (*(unsigned int *)(iVar6 + 8) <= uVar8) {
      uVar8 = uVar8 - *(unsigned int *)(iVar6 + 8);
    }
    iVar10 = 0;
    if ((int *)*param_4 != (int *)0x0) {
      iVar10 = *(int *)*param_4;
    }
    uVar11 = param_4[2];
    if (*(unsigned int *)(iVar10 + 8) <= uVar11) {
      uVar11 = uVar11 - *(unsigned int *)(iVar10 + 8);
    }
    uVar7 = 0;
    uVar9 = 0;
    puVar3 = *(unsigned __int64 **)(*(int *)(iVar6 + 4) + uVar8 * 4);
    puVar4 = *(unsigned __int64 **)(uVar11 * 4 + *(int *)(iVar10 + 4));
    *puVar4 = *puVar3;
    if (auStack_48 != puVar3 + 1) {
      uVar9 = *(unsigned int *)((int)puVar3 + 0xc);
      *(unsigned int *)((int)puVar3 + 0xc) = 0;
      uVar7 = *(unsigned int *)(puVar3 + 1);
      *(unsigned int *)(puVar3 + 1) = 0;
    }
    iVar6 = *(int *)((int)puVar4 + 0xc);
    *(unsigned int *)((int)puVar4 + 0xc) = uVar9;
    *(unsigned int *)(puVar4 + 1) = uVar7;
    if (iVar6 != 0) {
      fn_822315A0();
    }
    uVar5 = fn_8235A028(auStack_50,puVar3 + 2);
    fn_822AF200(puVar4 + 2,uVar5);
    param_4[2] = param_4[2] + 1;
    param_2[2] = param_2[2] + 1;
  }
  piVar1 = (int *)*param_4;
  *param_1 = 0;
  param_1[1] = 0;
  if ((piVar1 != (int *)0x0) && (puVar2 = (unsigned int *)*piVar1, puVar2 != (unsigned int *)0x0)) {
    *param_1 = *puVar2;
  }
  param_1[2] = param_4[2];
  return param_1;
}

