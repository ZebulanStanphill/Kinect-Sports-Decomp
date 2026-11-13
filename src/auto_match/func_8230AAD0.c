extern unsigned int *auStack_60;
extern int fn_82263E68();
extern int fn_822ABBF0();
extern int fn_823695C0();
extern int fn_8236A880();
extern int fn_8236BCD8();
extern int fn_823CC298();
extern int fn_823D2898();
extern int fn_82508078();
extern unsigned int iStack_4c;
extern unsigned int iStack_6c;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_82192604;
extern unsigned int lbl_82195530;
extern unsigned int lbl_821AC4A4;
extern unsigned int lbl_821AC4AC;
extern unsigned int lbl_831D1918;
extern unsigned int lbl_83276554;
extern unsigned int uStack_50;


void fn_8230AAD0(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char **ppuStack_70;
  int iStack_6c;
  unsigned char auStack_60 [16];
  unsigned int uStack_50;
  int iStack_4c;
  
  fn_8236BCD8(*(unsigned int *)(param_1 + 0x10));
  uStack_50 = lbl_82195530;
  iStack_6c = *(int *)(param_1 + 0xc);
  uVar2 = *(unsigned int *)((*(int **)(iStack_6c + 0x1c))[4] * 4 + **(int **)(iStack_6c + 0x1c));
  ppuStack_70 = &lbl_821AC4AC;
  puVar3 = (unsigned int *)(iStack_6c + 0x80U & 0xfffffff0);
  uVar7 = puVar3[1];
  uVar8 = puVar3[2];
  uVar9 = puVar3[3];
  puVar4 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  iStack_4c = 0;
  fn_822ABBF0(uVar2,&ppuStack_70);
  iVar1 = iStack_4c;
  ppuStack_70 = &lbl_821AC4A4;
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) != 0) {
    uVar6 = 5;
    if (param_2 == 0) {
      uVar6 = 6;
    }
    fn_8236A880(*(unsigned int *)(param_1 + 0x10),
                      *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x2c),uVar6);
    uVar5 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x10) + 0x990);
    if (uVar5 != 0xfffffffffffffec8) {
      fn_823D2898(uVar5,*(unsigned int *)(param_1 + 0xc));
    }
  }
  if (iVar1 != 0) {
    fn_823695C0((double)lbl_82192604,(double)lbl_821917B0,*(unsigned int *)(param_1 + 0x10),
                      iVar1,1);
  }
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x4c0) == 0) {
    fn_82508078(*(unsigned int *)(*(int *)(param_1 + 0x10) + 0xa4),0xffffffff821af30c,0);
    fn_823CC298(*(unsigned int *)(*(int *)(param_1 + 0x10) + 0x4b8),0x16);
  }
  if (lbl_831D1918 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    fn_82263E68(lbl_83276554,*(int *)(iVar1 + 0x24) != 0,*(unsigned int *)(iVar1 + 0x2c),
                      *(unsigned int *)(iVar1 + 0x28));
  }
  return;
}

