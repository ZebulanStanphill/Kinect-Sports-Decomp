extern unsigned int *auStack_30;
extern int fn_82F4EEC0();
extern int fn_82F53780();
extern int fn_8306ED28();
extern int fn_8306ED70();


unsigned __int64 fn_82F4EF20(unsigned __int64 param_1,__int64 param_2,char param_3,char param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned char auStack_30 [24];
  
  if (param_3 == '\0') {
    puVar1 = (unsigned int *)((int)param_2 + 0xcc0U & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + (int)param_1 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  else {
    if (param_4 == '\0') {
      fn_82F4EEC0(auStack_30,param_2);
      fn_82F53780(param_2 + 0xce0);
      puVar1 = (unsigned int *)((int)param_2 + 0xcc0U & 0xfffffff0);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
    }
    else {
      iVar3 = fn_82F4EEC0(auStack_30,param_2);
      puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      fn_8306ED70();
      fn_82F53780(param_2 + 0xce0);
    }
    fn_8306ED28();
    puVar1 = (unsigned int *)(in_r0 + (int)param_1 & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  return param_1;
}

