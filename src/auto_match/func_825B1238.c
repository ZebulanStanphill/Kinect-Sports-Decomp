extern int fn_827D5738();
extern int fn_82815400();
extern int fn_828176F0();
extern int fn_82817868();
extern int fn_82817870();
extern int fn_8283F970();
extern int fn_82840000();
extern int fn_82849E60();
extern int fn_8284E1F0();
extern int fn_8284FD98();
extern unsigned int iStack_90;
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int lbl_821C81F4;
extern unsigned int lbl_83265A24;


void fn_825B1238(int param_1,int *param_2,int param_3,unsigned __int64 param_4,int *param_5,int *param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned int uVar12;
  int aiStack_b0 [4];
  unsigned char *puStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  
  fn_828176F0(*(unsigned int *)(param_1 + 0x124),0xffffffff821c7b34,aiStack_b0);
  if (aiStack_b0[0] != 0) {
    iVar5 = fn_82817868();
    fn_82817870(aiStack_b0[0]);
    if (iVar5 != 0) {
      iVar6 = fn_8284FD98(param_1);
      iVar7 = *(int *)(param_3 + 0x14);
      iVar6 = iVar6 + (iVar5 + 0xfU & 0xfffffff0);
      *(int *)(param_3 + 0x14) = iVar7 + iVar6;
      *(int *)(param_3 + 0x2c) = iVar6 + *(int *)(param_3 + 0x2c);
      *param_2 = iVar7;
      fn_828176F0(*(unsigned int *)(param_1 + 0x124),0xffffffff821c7b44,aiStack_b0);
      if (aiStack_b0[0] != 0) {
        iVar5 = fn_82817868();
        iVar7 = fn_82817870(aiStack_b0[0]);
        if (iVar5 != 0) {
          uVar10 = iVar7 - 1;
          iVar7 = *(int *)(param_3 + 0x10);
          *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + iVar5;
          *(unsigned int *)(param_3 + 0x10) = (iVar7 - (uVar10 + iVar5 & uVar10)) + uVar10 + iVar5;
          *(int *)(*param_2 + 0x20) = iVar7;
        }
      }
      fn_828176F0(*(unsigned int *)(param_1 + 0x124),0xffffffff821c7b60,aiStack_b0);
      if (aiStack_b0[0] != 0) {
        iVar5 = fn_82817868();
        iVar7 = fn_82817870(aiStack_b0[0]);
        if (iVar5 != 0) {
          uVar10 = iVar7 - 1;
          iVar7 = *(int *)(param_3 + 0xc);
          *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x24) + iVar5;
          *(unsigned int *)(param_3 + 0xc) = (iVar7 - (uVar10 + iVar5 & uVar10)) + uVar10 + iVar5;
          *(int *)(*param_2 + 0x24) = iVar7;
        }
      }
    }
  }
  fn_8284E1F0(param_1,*param_2,0xffffffff831c0720);
  iVar5 = 0;
  uVar10 = 0;
  if (*(unsigned int *)(param_1 + 300) != 0) {
    iVar7 = 0;
    do {
      iVar6 = *(int *)(iVar7 + *(int *)(param_1 + 0x128) + 4);
      if (iVar6 != 0) {
        iVar5 = *(int *)(iVar6 + 0x2c) + iVar5;
      }
      uVar10 = uVar10 + 1;
      iVar7 = iVar7 + 0x20;
    } while (uVar10 < *(unsigned int *)(param_1 + 300));
  }
  *param_6 = iVar5;
  if (iVar5 == 0) {
    *param_5 = 0;
  }
  else {
    iVar7 = *(int *)(param_3 + 0x14);
    *(int *)(param_3 + 0x14) = iVar7 + iVar5 * 0x20;
    *(int *)(param_3 + 0x2c) = iVar5 * 0x20 + *(int *)(param_3 + 0x2c);
    *param_5 = iVar7;
  }
  uVar10 = *(unsigned int *)(param_1 + 300);
  uVar12 = 0;
  if (uVar10 != 0) {
    iVar5 = 0;
    iVar6 = 0;
    iVar7 = 0;
    do {
      if (((uVar10 != 0) && (iVar8 = iVar6 + *(int *)(param_1 + 0x128), *(int *)(iVar8 + 4) != 0))
         && ((param_4 & 0xffffffff) != 0)) {
        iStack_9c = *param_5;
        iStack_98 = *param_6;
        iStack_90 = iVar6 + *(int *)(param_1 + 0x128);
        puStack_a0 = &lbl_821C81F4;
        if (*(int *)(iStack_90 + 4) != 0) {
          iStack_94 = param_1;
          uVar3 = fn_827D5738(lbl_83265A24,*(unsigned int *)(iVar8 + 4));
          if ((uVar3 & 0xffffffff) == 0) {
            uVar3 = param_4;
          }
          fn_82815400(uVar3,*(unsigned int *)(iVar6 + *(int *)(param_1 + 0x128) + 4),
                          *(int *)(*param_2 + 0x4c) + iVar7 + 4);
          fn_82840000(*(unsigned int *)(iVar6 + *(int *)(param_1 + 0x128) + 4),
                            *(unsigned int *)(*(int *)(*param_2 + 0x4c) + iVar7 + 4),0);
          iVar11 = iVar6 + *(int *)(param_1 + 0x128);
          iVar8 = *(int *)(iVar11 + 0xc);
          iVar9 = *(int *)(*param_2 + 0x4c) + iVar7;
          uVar1 = *(unsigned int *)(iVar11 + 4);
          uVar2 = *(unsigned int *)(iVar9 + 4);
          if ((iVar8 == 0) || (*(int *)(iVar8 + 0x20) == 0)) {
            *(unsigned int *)(iVar9 + 0xc) = 0;
            uVar4 = 0;
            iVar8 = 0;
          }
          else {
            uVar4 = fn_82849E60(iVar8);
            *(int *)(*(int *)(*param_2 + 0x4c) + iVar7 + 0xc) = (int)uVar4;
          }
          fn_8283F970(uVar1,uVar2,iVar8,uVar4,&puStack_a0,1);
          *(unsigned int *)(*(int *)(*param_2 + 0x50) + iVar5) =
               *(unsigned int *)(*(int *)(iVar6 + *(int *)(param_1 + 0x128) + 4) + 0x30);
        }
      }
      uVar10 = *(unsigned int *)(param_1 + 300);
      uVar12 = uVar12 + 1;
      iVar7 = iVar7 + 0x10;
      iVar6 = iVar6 + 0x20;
      iVar5 = iVar5 + 4;
    } while (uVar12 < uVar10);
  }
  return;
}

