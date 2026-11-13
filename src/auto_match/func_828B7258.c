#define true 1
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_828B6B60();
extern int fn_828B9180();


void fn_828B7258(int param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  unsigned int auStack_60 [1];
  
  iVar7 = param_2;
  while( true ) {
    iVar6 = (iVar7 + 1) * 2;
    if (param_3 <= iVar6) break;
    puVar4 = (unsigned int *)((iVar7 + 1) * 0x10 + param_1);
    uVar3 = puVar4[-2];
    dVar8 = (double)fn_828B9180(*puVar4);
    dVar9 = (double)fn_828B9180(uVar3);
    if (dVar9 < dVar8) {
      iVar6 = iVar6 + -1;
    }
    puVar5 = (unsigned int *)(iVar6 * 8 + param_1);
    puVar4 = (unsigned int *)(iVar7 * 8 + param_1);
    uVar2 = 0;
    uVar3 = 0;
    if (auStack_60 != puVar5) {
      uVar3 = puVar5[1];
      puVar5[1] = 0;
      uVar2 = *puVar5;
      *puVar5 = 0;
    }
    iVar1 = puVar4[1];
    puVar4[1] = uVar3;
    *puVar4 = uVar2;
    iVar7 = iVar6;
    if (iVar1 != 0) {
      fn_822315A0();
    }
  }
  if (iVar6 == param_3) {
    iVar6 = param_3 * 8 + param_1;
    puVar5 = (unsigned int *)(iVar6 + -8);
    puVar4 = (unsigned int *)(iVar7 * 8 + param_1);
    uVar2 = 0;
    uVar3 = 0;
    if (auStack_60 != puVar5) {
      uVar3 = *(unsigned int *)(iVar6 + -4);
      *(unsigned int *)(iVar6 + -4) = 0;
      uVar2 = *puVar5;
      *puVar5 = 0;
    }
    iVar7 = puVar4[1];
    puVar4[1] = uVar3;
    *puVar4 = uVar2;
    if (iVar7 != 0) {
      fn_822315A0();
    }
    iVar7 = param_3 + -1;
  }
  fn_828B6B60(param_1,iVar7,param_2,param_4,param_5);
  return;
}

