extern int fn_82F2A8A8();
extern int fn_82F2A9C8();
extern int fn_82F2AC28();
extern unsigned int lbl_831A9CD0;
extern unsigned int uStack_b0;


void fn_82F2B558(int param_1,int *param_2,unsigned short *param_3,short *param_4,int *param_5,
                  int *param_6,int *param_7,int *param_8)

{
  unsigned short uVar1;
  unsigned short uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned short *puVar7;
  short *psVar8;
  unsigned __int64 uVar9;
  unsigned short *puVar10;
  int *piVar11;
  int *in_stack_00000054;
  int *in_stack_0000005c;
  int *in_stack_00000064;
  int *in_stack_0000006c;
  unsigned int in_stack_00000074;
  unsigned int in_stack_0000007c;
  unsigned int in_stack_00000084;
  unsigned int uStack_b0;
  
  uVar9 = 4;
  uStack_b0 = 4;
  do {
    puVar7 = param_3;
    psVar8 = param_4;
    piVar11 = param_2;
    iVar3 = fn_82F2AC28(param_1,*puVar7,&lbl_831A9CD0,0x77,in_stack_00000084);
    *in_stack_00000064 = iVar3 + *in_stack_00000064;
    iVar3 = fn_82F2AC28(param_1,*puVar7,0x831aa450);
    *in_stack_0000006c = iVar3 + *in_stack_0000006c;
    if (*piVar11 != 0) {
      iVar3 = 2;
      if (2 < *psVar8 + -2) {
        puVar10 = puVar7;
        do {
          uVar1 = puVar10[3];
          puVar10 = puVar10 + 2;
          uVar2 = *puVar10;
          iVar4 = fn_82F2A8A8(param_1,uVar1,uVar2,*(unsigned int *)(param_1 + 0x4e2c),
                               in_stack_00000074,in_stack_0000007c);
          iVar5 = fn_82F2A8A8(param_1,uVar1,uVar2,param_1 + 0x4c14,in_stack_00000074,
                               in_stack_0000007c);
          iVar6 = fn_82F2A8A8(param_1,uVar1,uVar2,param_1 + 0x4c54,in_stack_00000074,
                               in_stack_0000007c);
          iVar3 = iVar3 + 2;
          *param_8 = *param_8 + iVar4;
          *in_stack_00000054 = iVar5 + *in_stack_00000054;
          *in_stack_0000005c = *in_stack_0000005c + iVar6;
        } while (iVar3 < *psVar8 + -2);
        uVar9 = (unsigned __int64)uStack_b0;
      }
      uVar1 = (puVar7 + iVar3)[1];
      uVar2 = puVar7[iVar3];
      iVar3 = fn_82F2A9C8(param_1,uVar1,uVar2,*(unsigned int *)(param_1 + 0x4e38),
                                in_stack_00000074,in_stack_0000007c);
      iVar4 = fn_82F2A9C8(param_1,uVar1,uVar2,param_1 + 0x4c94,in_stack_00000074,
                                in_stack_0000007c);
      iVar5 = fn_82F2A9C8(param_1,uVar1,uVar2,param_1 + 0x4cd4,in_stack_00000074,
                                in_stack_0000007c);
      *param_8 = *param_8 + iVar3;
      *in_stack_00000054 = iVar4 + *in_stack_00000054;
      *in_stack_0000005c = *in_stack_0000005c + iVar5;
    }
    uVar9 = uVar9 - 1;
    param_3 = puVar7 + 0x80;
    uStack_b0 = (unsigned int)uVar9;
    param_4 = psVar8 + 1;
    param_2 = piVar11 + 1;
  } while (uVar9 != 0);
  iVar3 = fn_82F2AC28(param_1,*param_3,0xffffffff831aa090,0x77,in_stack_00000084);
  *in_stack_00000064 = iVar3 + *in_stack_00000064;
  iVar3 = fn_82F2AC28(param_1,*param_3,0xffffffff831aa810);
  *in_stack_0000006c = iVar3 + *in_stack_0000006c;
  if (piVar11[1] != 0) {
    iVar3 = 2;
    if (2 < *param_4 + -2) {
      puVar10 = param_3;
      do {
        uVar1 = puVar10[3];
        puVar10 = puVar10 + 2;
        uVar2 = *puVar10;
        iVar4 = fn_82F2A8A8(param_1,uVar1,uVar2,*(unsigned int *)(param_1 + 0x4e14),in_stack_00000074
                             ,in_stack_0000007c);
        iVar5 = fn_82F2A8A8(param_1,uVar1,uVar2,param_1 + 0x4d14,in_stack_00000074,
                             in_stack_0000007c);
        iVar6 = fn_82F2A8A8(param_1,uVar1,uVar2,param_1 + 0x4d54,in_stack_00000074,
                             in_stack_0000007c);
        iVar3 = iVar3 + 2;
        *param_5 = *param_5 + iVar4;
        *param_6 = *param_6 + iVar5;
        *param_7 = *param_7 + iVar6;
      } while (iVar3 < *param_4 + -2);
    }
    uVar1 = (param_3 + iVar3)[1];
    uVar2 = param_3[iVar3];
    iVar3 = fn_82F2A9C8(param_1,uVar1,uVar2,*(unsigned int *)(param_1 + 20000),in_stack_00000074
                              ,in_stack_0000007c);
    iVar4 = fn_82F2A9C8(param_1,uVar1,uVar2,param_1 + 0x4d94,in_stack_00000074,
                              in_stack_0000007c);
    iVar5 = fn_82F2A9C8(param_1,uVar1,uVar2,param_1 + 0x4dd4,in_stack_00000074,
                              in_stack_0000007c);
    *param_5 = *param_5 + iVar3;
    *param_6 = *param_6 + iVar4;
    *param_7 = *param_7 + iVar5;
  }
  puVar7 = puVar7 + 0x100;
  iVar3 = fn_82F2AC28(param_1,*puVar7,0xffffffff831aa090,0x77,in_stack_00000084);
  *in_stack_00000064 = iVar3 + *in_stack_00000064;
  iVar3 = fn_82F2AC28(param_1,*puVar7,0xffffffff831aa810);
  *in_stack_0000006c = iVar3 + *in_stack_0000006c;
  if (piVar11[2] != 0) {
    iVar3 = 2;
    if (2 < psVar8[2] + -2) {
      puVar10 = puVar7;
      do {
        uVar1 = puVar10[3];
        puVar10 = puVar10 + 2;
        uVar2 = *puVar10;
        iVar4 = fn_82F2A8A8(param_1,uVar1,uVar2,*(unsigned int *)(param_1 + 0x4e14),in_stack_00000074
                             ,in_stack_0000007c);
        iVar5 = fn_82F2A8A8(param_1,uVar1,uVar2,param_1 + 0x4d14,in_stack_00000074,
                             in_stack_0000007c);
        iVar6 = fn_82F2A8A8(param_1,uVar1,uVar2,param_1 + 0x4d54,in_stack_00000074,
                             in_stack_0000007c);
        iVar3 = iVar3 + 2;
        *param_5 = *param_5 + iVar4;
        *param_6 = *param_6 + iVar5;
        *param_7 = *param_7 + iVar6;
      } while (iVar3 < psVar8[2] + -2);
    }
    uVar1 = (puVar7 + iVar3)[1];
    uVar2 = puVar7[iVar3];
    iVar3 = fn_82F2A9C8(param_1,uVar1,uVar2,*(unsigned int *)(param_1 + 20000),in_stack_00000074
                              ,in_stack_0000007c);
    iVar4 = fn_82F2A9C8(param_1,uVar1,uVar2,param_1 + 0x4d94,in_stack_00000074,
                              in_stack_0000007c);
    iVar5 = fn_82F2A9C8(param_1,uVar1,uVar2,param_1 + 0x4dd4,in_stack_00000074,
                              in_stack_0000007c);
    *param_5 = *param_5 + iVar3;
    *param_6 = *param_6 + iVar4;
    *param_7 = *param_7 + iVar5;
  }
  return;
}

