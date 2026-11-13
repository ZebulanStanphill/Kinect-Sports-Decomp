extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_822CE290();
extern int fn_82365BD8();


void fn_822CEA78(int param_1,int *param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_30 [1];
  
  if (param_4 == 0) {
    *(unsigned int *)(param_1 + 0x230) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x340);
    puVar2 = (unsigned int *)(*param_2 + 0x20U & 0xfffffff0);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (unsigned int *)(param_1 + 0x210U & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    puVar2 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
    uVar5 = *puVar2;
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    *(unsigned int *)(param_1 + 0x230) = 1;
    puVar2 = (unsigned int *)(param_1 + 0x220U & 0xfffffff0);
    *puVar2 = uVar5;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    if (iVar1 == 0) {
      *(unsigned int *)(param_1 + 0x238) = *(unsigned int *)(*param_2 + 0x118);
      uVar4 = fn_82365BD8(auStack_30,param_2);
      fn_822CE290(param_1,uVar4,param_3);
    }
    else {
      *(unsigned int *)(param_1 + 0x238) = *(unsigned int *)(*param_2 + 0x1b0);
    }
    *(unsigned int *)(param_1 + 0x234) = 1;
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

