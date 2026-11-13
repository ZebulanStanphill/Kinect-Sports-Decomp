extern int fn_82AB15D0();
extern int fn_82B6E130();
extern int fn_82B6EA60();
extern int fn_82B6EAE8();
extern int fn_82B7F8E0();
extern unsigned int lbl_821AAD20;


unsigned int * fn_82B78A90(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned short uVar4;
  unsigned short uVar5;
  int iVar3;
  unsigned short uVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  
  uVar1 = *(unsigned int *)(param_1 + 0x1c);
  uVar4 = fn_82B6EA60();
  uVar5 = fn_82B6EA60(param_1);
  uVar9 = fn_82B6E130(*(unsigned int *)(param_1 + 0x14),1000);
  uVar10 = fn_82B6E130(*(unsigned int *)(param_1 + 0x14),0x3e9);
  uVar11 = fn_82B6E130(*(unsigned int *)(param_1 + 0x14),0x3ea);
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x5aa8);
  lVar8 = 0x1e - (unsigned __int64)uVar2;
  *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x5aa8) = uVar2 + 1;
  iVar3 = fn_82B7F8E0(uVar9,*(unsigned int *)(param_1 + 0x10),**(unsigned int **)(param_1 + 0x1c),
                            lVar8,0);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x2bcb);
  }
  iVar3 = fn_82B7F8E0(uVar10,*(unsigned int *)(param_1 + 0x10),**(unsigned int **)(param_1 + 0x1c)
                            ,lVar8,1);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x2bd1);
  }
  iVar3 = fn_82B7F8E0(uVar11,*(unsigned int *)(param_1 + 0x10),**(unsigned int **)(param_1 + 0x1c)
                            ,lVar8,2);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x2bd7);
  }
  iVar3 = fn_82B7F8E0((double)lbl_821AAD20,*(unsigned int *)(param_1 + 0x10),
                            **(unsigned int **)(param_1 + 0x1c),lVar8,3);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x2bdd);
  }
  uVar6 = fn_82B6EAE8(param_1,(unsigned __int64)uVar1 + 0x4180,0,0x17);
  *(unsigned short *)((int)param_2 + 2) = 3;
  *param_2 = *param_2 & 0xe000ffff;
  *(unsigned short *)((int)param_2 + 6) = uVar5;
  puVar7 = param_2 + 2;
  param_2[1] = param_2[1] & 0xff00ffff | 0x40000;
  *(unsigned short *)((int)param_2 + 10) = 0;
  *puVar7 = *puVar7 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar7 = 1;
  param_2[3] = param_2[3] & 0xffff9999 | 0x1111;
  *(unsigned short *)((int)param_2 + 0x12) = 0;
  param_2[4] = param_2[4] & 0xff00ffff | 0x500000;
  param_2[5] = param_2[5] & 0xffff0000 | 0x8888;
  *(unsigned short *)((int)param_2 + 0x1a) = 0x49;
  param_2[6] = param_2[6] & 0xe000ffff;
  *(unsigned short *)((int)param_2 + 0x1e) = uVar4;
  param_2[7] = param_2[7] & 0xff00ffff | 0x40000;
  *(unsigned short *)((int)param_2 + 0x22) = uVar5;
  param_2[8] = param_2[8] & 0xff00ffff | 0x40000;
  puVar7 = param_2 + 9;
  *(short *)((int)param_2 + 0x26) = (short)lVar8;
  *puVar7 = *puVar7 & 0xff00ffff | 0x10000;
  *(unsigned char *)puVar7 = 1;
  *(unsigned short *)((int)param_2 + 0x2a) = 0x40;
  param_2[10] = param_2[10] & 0xe000ffff;
  *(unsigned short *)((int)param_2 + 0x2e) = uVar6;
  param_2[0xb] = param_2[0xb] & 0xff00ffff | 0x440000;
  param_2[0xc] = 0x15;
  *(unsigned short *)((int)param_2 + 0x36) = 0;
  param_2[0xd] = param_2[0xd] & 0xff00ffff | 0x500000;
  param_2[0xe] = param_2[0xe] & 0xffff8888;
  *(unsigned short *)((int)param_2 + 0x3e) = uVar6;
  param_2[0xf] = param_2[0xf] & 0xff00ffff | 0x40000;
  *(unsigned short *)((int)param_2 + 0x42) = uVar4;
  param_2[0x10] = param_2[0x10] & 0xff00ffff | 0x40000;
  return param_2 + 0x11;
}

