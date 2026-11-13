extern unsigned int *auStack_30;
extern int fn_82F538A0();
extern int fn_82F53900();
extern int fn_8306ED30();


void fn_82F4FD20(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned char auStack_30 [1];
  
  puVar1 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)(param_1 + 0x10U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  iVar3 = fn_82F538A0(auStack_30,param_2,0);
  puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  lVar4 = 0;
  puVar2 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  do {
    fn_82F538A0(auStack_30,param_2,lVar4);
    fn_8306ED30();
    fn_82F53900(param_2,lVar4);
    lVar4 = lVar4 + 1;
  } while ((int)lVar4 < 0x19);
  return;
}

