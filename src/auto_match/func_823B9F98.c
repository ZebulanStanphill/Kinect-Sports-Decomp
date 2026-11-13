extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_822AF200();
extern int fn_8235A028();


unsigned int * fn_823B9F98(unsigned int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 *puVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned char auStack_50 [8];
  unsigned __int64 auStack_48 [1];
  
  while (*(int *)(param_2 + 8) != param_3[2]) {
    iVar1 = param_3[2];
    iVar9 = iVar1 + -1;
    param_3[2] = iVar9;
    if ((int *)*param_3 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)*param_3;
    }
    if (*(unsigned int *)(iVar8 + 8) <= iVar1 - 1U) {
      iVar9 = iVar9 - *(unsigned int *)(iVar8 + 8);
    }
    iVar1 = param_4[2];
    iVar11 = iVar1 + -1;
    puVar4 = *(unsigned __int64 **)(*(int *)(iVar8 + 4) + iVar9 * 4);
    param_4[2] = iVar11;
    if ((int *)*param_4 == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)*param_4;
    }
    if (*(unsigned int *)(iVar9 + 8) <= iVar1 - 1U) {
      iVar11 = iVar11 - *(unsigned int *)(iVar9 + 8);
    }
    uVar7 = 0;
    uVar10 = 0;
    puVar5 = *(unsigned __int64 **)(iVar11 * 4 + *(int *)(iVar9 + 4));
    *puVar5 = *puVar4;
    if (auStack_48 != puVar4 + 1) {
      uVar10 = *(unsigned int *)((int)puVar4 + 0xc);
      *(unsigned int *)((int)puVar4 + 0xc) = 0;
      uVar7 = *(unsigned int *)(puVar4 + 1);
      *(unsigned int *)(puVar4 + 1) = 0;
    }
    iVar1 = *(int *)((int)puVar5 + 0xc);
    *(unsigned int *)((int)puVar5 + 0xc) = uVar10;
    *(unsigned int *)(puVar5 + 1) = uVar7;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    uVar6 = fn_8235A028(auStack_50,puVar4 + 2);
    fn_822AF200(puVar5 + 2,uVar6);
  }
  piVar2 = (int *)*param_4;
  *param_1 = 0;
  param_1[1] = 0;
  if ((piVar2 != (int *)0x0) && (puVar3 = (unsigned int *)*piVar2, puVar3 != (unsigned int *)0x0)) {
    *param_1 = *puVar3;
  }
  param_1[2] = param_4[2];
  return param_1;
}

