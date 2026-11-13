extern int fn_82AB15D0();
extern int fn_82B7F8E0();


unsigned int * fn_82B74CD0(int param_1,int param_2,int param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x5aa8);
  lVar7 = 0x1e - (unsigned __int64)uVar1;
  *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x5aa8) = uVar1 + 1;
  iVar3 = fn_82B7F8E0((double)*(float *)(param_2 + 0x34),*(unsigned int *)(param_1 + 0x10),
                            **(unsigned int **)(param_1 + 0x1c),lVar7,0);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x22c1);
  }
  iVar3 = fn_82B7F8E0((double)*(float *)(param_2 + 0x38),*(unsigned int *)(param_1 + 0x10),
                            **(unsigned int **)(param_1 + 0x1c),lVar7,1);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x22c7);
  }
  iVar3 = fn_82B7F8E0((double)*(float *)(param_2 + 0x3c),*(unsigned int *)(param_1 + 0x10),
                            **(unsigned int **)(param_1 + 0x1c),lVar7,2);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x22cd);
  }
  iVar3 = fn_82B7F8E0((double)*(float *)(param_2 + 0x40),*(unsigned int *)(param_1 + 0x10),
                            **(unsigned int **)(param_1 + 0x1c),lVar7,3);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x22d3);
  }
  *(unsigned short *)((int)param_4 + 2) = 0x40;
  *param_4 = *param_4 & 0xe000ffff;
  puVar5 = param_4 + 2;
  *(short *)((int)param_4 + 6) = (short)*(unsigned int *)(param_3 + 4);
  uVar1 = param_4[1];
  uVar2 = *(unsigned int *)(param_3 + 4) & 0x3f0000;
  param_4[1] = uVar1 & 0xffc0ffff | uVar2;
  param_4[1] = uVar1 & 0xff00ffff | uVar2 | *(unsigned int *)(param_3 + 4) & 0x800000;
  if ((*(unsigned int *)(param_3 + 4) & 0x800000) != 0) {
    *puVar5 = *(unsigned int *)(param_3 + 0xc);
    puVar5 = param_4 + 3;
  }
  *(short *)((int)puVar5 + 2) = (short)*(unsigned int *)(param_2 + 0x50);
  *puVar5 = *puVar5 & 0xff00ffff | 0x40000;
  puVar4 = puVar5 + 1;
  *(short *)((int)puVar5 + 6) = (short)lVar7;
  *puVar4 = *puVar4 & 0xff00ffff | 0x10000;
  *(unsigned char *)puVar4 = 1;
  puVar6 = puVar5 + 2;
  puVar4 = puVar5 + 3;
  *(short *)((int)puVar5 + 10) = (short)*(unsigned int *)(param_3 + 4);
  uVar1 = *puVar6;
  uVar2 = *(unsigned int *)(param_3 + 4) & 0x3f0000;
  *puVar6 = uVar1 & 0xffc0ffff | uVar2;
  *puVar6 = uVar1 & 0xff00ffff | uVar2 | *(unsigned int *)(param_3 + 4) & 0x800000;
  if ((*(unsigned int *)(param_3 + 4) & 0x800000) != 0) {
    *puVar4 = *(unsigned int *)(param_3 + 0xc);
    puVar4 = puVar5 + 4;
  }
  return puVar4;
}

