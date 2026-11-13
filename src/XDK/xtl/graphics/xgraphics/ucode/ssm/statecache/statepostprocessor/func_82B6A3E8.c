extern unsigned int *auStack_40;
extern int fn_82AB15D0();
extern int fn_82B6D908();


unsigned __int64 fn_82B6A3E8(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int *piVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  unsigned char auStack_40 [64];
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d965c,0xffffffff820d95d8,0x539);
  }
  if (param_2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9650,0xffffffff820d95d8,0x53a);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9640,0xffffffff820d95d8,0x53b);
  }
  if (param_3 == 0xffffffffffffff14) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9230,0xffffffff820d95d8,0x53e);
  }
  iVar3 = (int)param_3;
  puVar5 = (unsigned int *)(**(int (***)())(iVar3 + 0xf4))(*(unsigned int *)(iVar3 + 0xf0),0xd);
  *puVar5 = 0xc00b2500;
  piVar6 = (int *)(param_2 + 4);
  lVar8 = 5;
  puVar5[1] = *(unsigned int *)(*(int *)(*(int *)(param_2 + 4) + 0x20) + 4) |
              *(unsigned int *)(*(int *)(param_2 + 4) + 0x10);
  puVar5[2] = 0x10;
  puVar5[3] = 0x10;
  puVar4 = puVar5 + 4;
  do {
    puVar7 = puVar4;
    piVar6 = piVar6 + 1;
    *puVar7 = *(unsigned int *)(*(int *)(*piVar6 + 0x20) + 4) | *(unsigned int *)(*piVar6 + 0x10);
    lVar8 = lVar8 + -1;
    puVar4 = puVar7 + 1;
  } while (lVar8 != 0);
  iVar1 = *(int *)(*(int *)(param_2 + 0x20) + 0x20);
  puVar7[1] = *(unsigned int *)(*(int *)(param_2 + 0x20) + 0x10);
  puVar7[2] = *(unsigned int *)(iVar1 + 4);
  iVar1 = *(int *)(*(int *)(param_2 + 0x1c) + 0x20);
  puVar7[3] = *(unsigned int *)(*(int *)(param_2 + 0x1c) + 0x10);
  puVar7[4] = *(unsigned int *)(iVar1 + 4);
  uVar2 = (int)(puVar7 + 4) + (4 - (int)puVar5) >> 2;
  if (0xd < uVar2) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d966c,0xffffffff820d95d8,0x572);
  }
  (**(int (***)())(iVar3 + 0x100))(*(unsigned int *)(iVar3 + 0xf0),uVar2,auStack_40);
  fn_82B6D908(param_2,auStack_40);
  return 0;
}

