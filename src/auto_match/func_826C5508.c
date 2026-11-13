typedef unsigned char bool;
extern int fn_82694D70();
extern int fn_82698D50();
extern int fn_8269A418();
extern int fn_826F5C10();
extern int fn_826F6FA8();


int * fn_826C5508(int *param_1,unsigned int *param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  unsigned char bVar4;
  unsigned __int64 uVar5;
  int *piVar7;
  unsigned __int64 uVar6;
  unsigned int *puVar8;
  char *apcStack_40 [16];
  
  uVar5 = fn_8269A418();
  puVar8 = (unsigned int *)*param_2;
  bVar4 = -(6 < uVar5) & 1;
  if ((int)puVar8[3] < 0) {
    if (bVar4 == 0) {
      if (puVar8[1] == 0) {
        fn_82694D70(puVar8);
      }
      iVar2 = param_1[0x52];
      puVar8 = (unsigned int *)*param_2;
      if (*(unsigned int **)(iVar2 + 0xc4) == puVar8) {
        return param_1;
      }
      iVar3 = puVar8[1];
      if (*(int *)(*(int *)(iVar2 + 0xf4) + 4) == iVar3) {
        return param_1;
      }
      if ((*(unsigned int **)(iVar2 + 200) == puVar8) ||
         (*(int *)(*(int *)(iVar2 + 0x104) + 4) == iVar3)) goto LAB_826c55a8;
      bVar1 = *(int *)(*(int *)(iVar2 + 0x100) + 4) == iVar3;
    }
    else {
      iVar2 = param_1[0x52];
      if (*(unsigned int **)(iVar2 + 0xc4) == puVar8) {
        return param_1;
      }
      if (*(unsigned int **)(iVar2 + 0xf4) == puVar8) {
        return param_1;
      }
      if ((*(unsigned int **)(iVar2 + 200) == puVar8) || (*(unsigned int **)(iVar2 + 0x104) == puVar8))
      {
LAB_826c55a8:
        return (int *)param_1[8];
      }
      bVar1 = *(unsigned int **)(iVar2 + 0x100) == puVar8;
    }
    if (bVar1) {
      piVar7 = (int *)(**(int (***)())(*param_1 + 0x54))(param_1,0);
      return piVar7;
    }
  }
  if ((*(char *)*puVar8 == '_') && (param_3 != '\0')) {
    apcStack_40[0] = (char *)0x0;
    uVar6 = fn_826F5C10(*puVar8,apcStack_40,bVar4);
    if (((int)uVar6 != -1) && (*apcStack_40[0] == '\0')) {
      piVar7 = (int *)fn_826F6FA8(param_1[0x28],uVar6);
      return piVar7;
    }
  }
  piVar7 = (int *)fn_82698D50(param_1 + 0x2a,param_1 + 0x52,param_2);
  return piVar7;
}

