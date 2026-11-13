extern int fn_8265C9E0();
extern int fn_8265CA60();
extern int fn_82F664B0();
extern unsigned int lbl_821902F0;
extern unsigned int lbl_821CA460;
extern unsigned int *lbl_832767EC;


unsigned __int64 fn_82524968(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned short uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned int *puVar10;
  
  if (*(int *)(param_1 + 0xb7c) == 0) {
    puVar1 = (unsigned int *)*lbl_832767EC;
    uVar2 = puVar1[1];
    uVar4 = fn_8265C9E0(0x34);
    *(int *)(param_1 + 0xb7c) = (int)uVar4;
    fn_82F664B0(uVar4,10,0xffffffff821c2f50);
    *(unsigned char *)(*(int *)(param_1 + 0xb7c) + 10) = 0;
    *(unsigned char *)(*(int *)(param_1 + 0xb7c) + 0x18) = 0;
    *(short *)(*(int *)(param_1 + 0xb7c) + 0x1a) = (short)*puVar1;
    *(unsigned short *)(*(int *)(param_1 + 0xb7c) + 0x1c) = 0;
    *(unsigned short *)(*(int *)(param_1 + 0xb7c) + 0x1e) = 3;
    uVar5 = fn_8265CA60(0xe6c);
    *(unsigned int *)(*(int *)(param_1 + 0xb7c) + 0x2c) = uVar5;
    *(unsigned int *)(*(int *)(param_1 + 0xb7c) + 0x20) = 0;
    *(unsigned int *)(*(int *)(param_1 + 0xb7c) + 0x24) = 0;
    *(unsigned int *)(*(int *)(param_1 + 0xb7c) + 0x28) = 0;
    uVar5 = lbl_821CA460;
    if (*puVar1 != 0) {
      uVar7 = 0;
      do {
        iVar3 = *(int *)(&lbl_821902F0 + uVar7 * 4);
        puVar10 = (unsigned int *)(uVar7 * 0x60 + uVar2);
        iVar9 = iVar3 * 0x34;
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9) = puVar10[0xc];
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 4) = puVar10[0xd];
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 8) = puVar10[0xe];
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0xc) = puVar10[4];
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x10) = puVar10[5];
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x14) = puVar10[6];
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x18) = puVar10[8];
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x1c) = puVar10[9];
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x20) = puVar10[10];
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x24) = puVar10[0xb];
        if (*puVar10 == 0xff) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = (unsigned short)*(unsigned int *)(&lbl_821902F0 + (*puVar10 & 0xffff) * 4);
        }
        *(unsigned short *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x28) = uVar6;
        if (puVar10[1] == 0xff) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = (unsigned short)*(unsigned int *)(&lbl_821902F0 + (puVar10[1] & 0xffff) * 4);
        }
        *(unsigned short *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x2a) = uVar6;
        if (puVar10[2] == 0xff) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = (unsigned short)*(unsigned int *)(&lbl_821902F0 + (puVar10[2] & 0xffff) * 4);
        }
        iVar8 = iVar3 * 0x10 + param_1;
        uVar7 = uVar7 + 1 & 0xffff;
        *(unsigned short *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x2c) = uVar6;
        *(unsigned char *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x32) = 0;
        *(unsigned short *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x30) = 0xffff;
        *(short *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x2e) = (short)iVar3;
        *(unsigned int *)((iVar3 + 0x195) * 0x10 + param_1) = puVar10[0x14];
        *(unsigned int *)(iVar8 + 0x1954) = puVar10[0x15];
        *(unsigned int *)(iVar8 + 0x1958) = puVar10[0x16];
        *(unsigned int *)(iVar8 + 0x195c) = uVar5;
      } while (uVar7 < *puVar1);
    }
  }
  return 0;
}

