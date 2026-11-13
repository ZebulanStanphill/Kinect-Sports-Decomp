extern unsigned int *auStack_70;
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F04B0();
extern int fn_827F0FB8();
extern int fn_827F1148();
extern int fn_827F2038();
extern int fn_827F2DD0();
extern int fn_827F2F90();
extern int fn_827F46E8();
extern int fn_827F5708();
extern int fn_827F59C0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82506D78(int param_1)

{
  float fVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned int *puVar10;
  unsigned char auStack_70 [112];
  
  uVar2 = fn_827F04B0(0x18c);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_827F1148(uVar2,*(unsigned int *)(param_1 + 0xc68),0);
  }
  *(int *)(param_1 + 0xb68) = (int)uVar3;
  fn_827F0FB8(uVar3,*(unsigned int *)(param_1 + 0xb64),1);
  uVar5 = *(unsigned int *)(param_1 + 0xb64);
  if (*(int *)(param_1 + 0xcc0) != 0) {
    fn_8255F880(auStack_70,param_1 + 0xcc0);
    uVar4 = fn_8255F8D0((double)ltcg_pool_0_0f,(double)lbl_821CA460,auStack_70);
    *(unsigned int *)(param_1 + 0xcbc) = uVar4;
    uVar2 = fn_827F46E8(0xe8);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_827F59C0((double)ltcg_pool_0_0f,(double)lbl_821CA460,(double)lbl_8218E8E8,uVar2,1
                              ,uVar5,*(unsigned int *)(param_1 + 0xcbc),0);
    }
    *(unsigned int *)(param_1 + 0xcb8) = uVar5;
    fn_827F0FB8(*(unsigned int *)(param_1 + 0xb68),*(unsigned int *)(param_1 + 0xcbc),0);
    fn_827F0FB8(*(unsigned int *)(param_1 + 0xb68),*(unsigned int *)(param_1 + 0xcb8),1);
    uVar5 = *(unsigned int *)(param_1 + 0xcb8);
  }
  iVar7 = 0;
  puVar10 = (unsigned int *)(param_1 + 0xcc4);
  do {
    iVar8 = 0;
    iVar9 = 0;
    do {
      iVar6 = (iVar7 + iVar9 + 0x33b) * 4;
      if (*(int *)(iVar6 + param_1) != 0) {
        fn_8255F880(auStack_70,iVar6 + param_1);
        iVar6 = fn_8255F8D0((double)ltcg_pool_0_0f,(double)lbl_821CA460,auStack_70);
        *(int *)((iVar7 + iVar9 + 0x335) * 4 + param_1) = iVar6;
        if (iVar6 != 0) {
          iVar8 = iVar8 + 1;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 6);
    if (iVar8 == 6) {
      uVar2 = fn_827F2038(0x110);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_827F2F90(uVar2,puVar10[4],0,0,0,0);
      }
      *puVar10 = (int)uVar3;
      fn_827F2DD0((double)lbl_8218E8E8,uVar3,puVar10[4]);
      uVar2 = fn_827F46E8(0xe8);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = fn_827F59C0((double)ltcg_pool_0_0f,(double)lbl_821CA460,(double)lbl_8218E8E8,uVar2
                                ,1,uVar5,*puVar10,0);
      }
      puVar10[1] = uVar5;
      puVar10[2] = 0;
      fn_827F0FB8(*(unsigned int *)(param_1 + 0xb68),*puVar10,0);
      fn_827F0FB8(*(unsigned int *)(param_1 + 0xb68),puVar10[1],1);
      uVar5 = puVar10[1];
    }
    iVar7 = iVar7 + 0x10;
    puVar10 = puVar10 + 0x10;
  } while (iVar7 < 0x20);
  if (*(int *)(param_1 + 0xcb0) != 0) {
    fn_8255F880(auStack_70,param_1 + 0xcb0);
    uVar4 = fn_8255F8D0((double)ltcg_pool_0_0f,(double)lbl_821CA460,auStack_70);
    *(unsigned int *)(param_1 + 0xcac) = uVar4;
    uVar2 = fn_827F2038(0x110);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_827F2F90(uVar2,*(unsigned int *)(param_1 + 0xcac),0,0,0,0);
    }
    *(int *)(param_1 + 0xca4) = (int)uVar3;
    fn_827F2DD0((double)lbl_8218E8E8,uVar3,*(unsigned int *)(param_1 + 0xcac));
    *(unsigned int *)(param_1 + 0xca8) = *(unsigned int *)(param_1 + 0xcac);
    uVar2 = fn_827F46E8(0xe8);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_827F59C0((double)ltcg_pool_0_0f,(double)lbl_821CA460,(double)lbl_8218E8E8,uVar2,0
                              ,uVar5,*(unsigned int *)(param_1 + 0xca4),0);
    }
    fVar1 = lbl_821CA460;
    *(unsigned int *)(param_1 + 0xc9c) = uVar5;
    *(float *)(param_1 + 0xca0) = fVar1;
    fn_827F0FB8(*(unsigned int *)(param_1 + 0xb68),*(unsigned int *)(param_1 + 0xca4),0);
    fn_827F0FB8(*(unsigned int *)(param_1 + 0xb68),*(unsigned int *)(param_1 + 0xc9c),1);
    fn_827F5708((double)*(float *)(param_1 + 0xca0),*(unsigned int *)(param_1 + 0xc9c));
  }
  return;
}

