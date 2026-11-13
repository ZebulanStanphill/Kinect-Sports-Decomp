extern int fn_82532AD0();
extern int fn_825B09A8();
extern int fn_825B1238();
extern int fn_827D5738();
extern int fn_82837AC8();
extern int fn_82837AE0();
extern int fn_828505C0();
extern int fn_82F691F0();
extern unsigned int lbl_83265A24;


void fn_8254A0B8(int param_1,int param_2,unsigned int *param_3,int param_4,char param_5)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  
  *(unsigned int *)(param_1 + 0x1c8) = 0;
  *(unsigned int *)(param_1 + 0x1cc) = 0;
  *(unsigned int *)(param_1 + 0x1d0) = 0;
  iVar5 = *(int *)(param_4 + 0x14);
  *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + 0x1c0;
  *(int *)(param_4 + 0x14) = iVar5 + 0x1c0;
  if (param_5 != '\0') {
    *(int *)(param_1 + 0x1c8) = iVar5;
    *(unsigned int *)(param_1 + 0x1cc) = *(unsigned int *)(param_4 + 0xc);
    *(unsigned int *)(param_1 + 0x1d0) = *(unsigned int *)(param_4 + 0x10);
  }
  uVar6 = *param_3;
  *(int *)(param_1 + 0x1c0) = param_2;
  *(unsigned int *)(param_1 + 0x1b8) = uVar6;
  uVar6 = *(unsigned int *)(*(int *)(param_2 + 0x10) + 0x4c);
  uVar3 = fn_827D5738(lbl_83265A24,param_2);
  puVar7 = *(unsigned int **)(param_4 + 0x14);
  puVar1 = *(unsigned int **)(*(int *)(*(int *)(param_1 + 0x1c0) + 0x10) + 0x48);
  *(unsigned int **)(param_4 + 0x14) = puVar7 + 0xc;
  *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + 0x30;
  uVar2 = *puVar1;
  *puVar7 = uVar2;
  fn_825B1238(uVar2,puVar7 + 1,param_4,uVar3,puVar7 + 6,puVar7 + 7);
  fn_825B09A8(puVar7,param_4);
  uVar2 = puVar1[1];
  puVar7[5] = uVar6;
  puVar7[4] = uVar2;
  fn_828505C0(*puVar7,puVar7[1]);
  *(unsigned int **)(param_1 + 0x1c4) = puVar7;
  puVar7 = *(unsigned int **)(*(int *)(*(int *)(param_1 + 0x1c0) + 0x10) + 0x48);
  iVar5 = fn_82837AE0(*puVar7);
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82837AC8(*puVar7);
  }
  if ((int)uVar4 == 0) {
    *(unsigned int *)(param_1 + 0x80) = 0;
    *(unsigned int *)(param_1 + 0x84) = 0;
    *(unsigned int *)(param_1 + 0x88) = 0;
    *(unsigned int *)(param_1 + 0x8c) = 0;
  }
  else {
    puVar7 = (unsigned int *)(param_1 + 0x7c);
    lVar8 = 4;
    do {
      uVar6 = *(unsigned int *)(param_4 + 0xc);
      iVar5 = *(int *)(param_4 + 0x14);
      *(int *)(param_4 + 0x14) = iVar5 + 0x94;
      *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + 0x94;
      *(unsigned int *)(param_4 + 0xc) = uVar6;
      *(int *)(param_4 + 0x24) = (int)((uVar4 & 0x3ffffff) << 6) + *(int *)(param_4 + 0x24);
      uVar6 = fn_82532AD0(uVar4,iVar5,uVar6,0);
      lVar8 = lVar8 + -1;
      puVar7 = puVar7 + 1;
      *puVar7 = uVar6;
    } while (lVar8 != 0);
  }
  *(unsigned int *)(param_1 + 0x90) = 0;
  *(unsigned int *)(param_1 + 0x94) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x98,0,0x38);
}

