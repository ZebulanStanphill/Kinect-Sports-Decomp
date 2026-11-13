extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern int fn_82B86888();


void fn_82B86A10(unsigned __int64 param_1,__int64 param_2,int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *puVar6;
  int *piVar7;
  unsigned int uVar8;
  unsigned int auStack_30 [4];
  unsigned char auStack_20 [16];
  
  iVar5 = (int)param_2;
  uVar8 = 0;
  auStack_30[0] = 0;
  if (iVar5 != 0) {
    puVar6 = auStack_30 + 3;
    piVar7 = (int *)(param_3 + -4);
    do {
      uVar4 = uVar8 >> 3 & 0x1ffffffc;
      puVar2 = (unsigned int *)(piVar7 + 1);
      piVar7 = piVar7 + 2;
      iVar1 = *piVar7;
      uVar3 = uVar8 & 0x1f;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar2;
      uVar8 = uVar8 + 2;
      *(unsigned int *)((int)auStack_30 + uVar4) = iVar1 << uVar3 | *(unsigned int *)((int)auStack_30 + uVar4);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  fn_82B86888(param_1,iVar5,auStack_20,0);
  return;
}

