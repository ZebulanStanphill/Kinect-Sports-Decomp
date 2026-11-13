extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_a0;
extern int fn_8229F688();
extern int fn_82358FD8();
extern int fn_824556F0();
extern int fn_82456AC8();
extern int fn_82508078();
extern int fn_82528EE0();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_8254EDB0();
extern unsigned int lbl_821B80A0;
extern unsigned int lbl_821BA6C0;
extern unsigned int lbl_821CA460;


void fn_8240C558(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int auStack_130 [4];
  unsigned char auStack_120 [128];
  unsigned char auStack_a0 [160];
  
  uVar6 = *(unsigned int *)(param_1 + 0xe0);
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x68) = 0;
  *(unsigned int *)(param_1 + 0xe0) = uVar6 + 1;
  *(unsigned int *)(param_1 + 0xf8) = 1;
  uVar6 = 0xffffffffU - ((int)uVar6 >> 0x1f) & uVar6;
  if (1 < (int)uVar6) {
    uVar6 = 2;
  }
  fn_82508078(**(unsigned int **)(param_1 + 0x24),
                    (&lbl_821BA6C0)[*(int *)(&lbl_821B80A0 + uVar6 * 4)],0);
  auStack_130[0] = **(unsigned int **)(param_1 + 0x30);
  auStack_130[0] =
       fn_82535298(auStack_130,*(unsigned int *)(*(unsigned int **)(param_1 + 0x30))[3],
                         0xffffffff83296bc0,0xffffffff83296bd0);
  fn_82536288(auStack_130);
  iVar4 = *(int *)(param_1 + 0x2c);
  fn_824556F0(iVar4,iVar4 + 4);
  fn_8254EDB0((double)*(float *)(iVar4 + 0x68),(double)*(float *)(iVar4 + 0x6c),
                    *(unsigned int *)(iVar4 + 0x7c),*(unsigned int *)(iVar4 + 0x28));
  iVar5 = *(int *)(iVar4 + 0x7c);
  uVar1 = *(unsigned int *)(iVar4 + 0x6c);
  uVar2 = *(unsigned int *)(iVar4 + 0x5c);
  uVar3 = *(unsigned int *)(iVar4 + 0x58);
  if (*(int *)(iVar5 + 4) != 0) {
    *(unsigned int *)(iVar5 + 0x1cc) = *(unsigned int *)(iVar4 + 0x54);
    *(unsigned int *)(iVar5 + 0x1dc) = uVar1;
    *(unsigned int *)(iVar5 + 0x1d4) = 1;
    *(unsigned int *)(iVar5 + 0x1d0) = uVar3;
    *(unsigned int *)(iVar5 + 0x1d8) = uVar2;
    *(unsigned int *)(iVar5 + 0x1e0) = lbl_821CA460;
  }
  fn_82456AC8((unsigned __int64)*(unsigned int *)(param_1 + 0x28),(unsigned __int64)*(unsigned int *)(param_1 + 0x28) + 0x1c
                   );
  *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x34) + 0xf4) + 0x510) = 1;
  fn_82358FD8(*(unsigned int *)(param_1 + 4),auStack_120,0x40,0xffffffff821b80ac);
  fn_82528EE0(auStack_a0,0x40,auStack_120,*(unsigned int *)(param_1 + 0xe0));
  fn_8229F688(*(unsigned int *)(*(int *)(*(int *)(param_1 + 4) + 0xd4) + 0xc),auStack_a0,0);
  return;
}

