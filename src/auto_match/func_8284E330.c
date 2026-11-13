extern int fn_82815400();
extern int fn_828176F0();
extern int fn_82817868();
extern int fn_82817870();
extern int fn_82840000();
extern int fn_8284E1F0();
extern int fn_8284FD98();


void fn_8284E330(unsigned __int64 param_1,int param_2,int *param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int aiStack_50;
  
  fn_828176F0(*(unsigned int *)(param_2 + 0x124),0xffffffff8201f514,&aiStack_50);
  if (aiStack_50 != 0) {
    uVar2 = fn_82817868();
    uVar3 = fn_82817870(aiStack_50);
    if ((uVar2 & 0xffffffff) != 0) {
      lVar4 = fn_8284FD98(param_2);
      lVar4 = lVar4 + (uVar2 + 0xf & 0xfffffff0);
      uVar3 = (*(int (**)())*param_4)(lVar4,uVar3);
      *param_3 = (int)uVar3;
      (*(int (**)())param_4[1])(uVar3,0,lVar4);
      fn_828176F0(*(unsigned int *)(param_2 + 0x124),0xffffffff8201f51c,&aiStack_50);
      if (aiStack_50 != 0) {
        uVar2 = fn_82817868();
        uVar3 = fn_82817870(aiStack_50);
        if ((uVar2 & 0xffffffff) != 0) {
          uVar5 = (*(int (**)())param_4[4])(uVar2,uVar3);
          *(unsigned int *)(*param_3 + 0x20) = uVar5;
        }
      }
      fn_828176F0(*(unsigned int *)(param_2 + 0x124),0xffffffff8201f524,&aiStack_50);
      if (aiStack_50 != 0) {
        uVar2 = fn_82817868();
        uVar3 = fn_82817870(aiStack_50);
        if ((uVar2 & 0xffffffff) != 0) {
          uVar5 = (*(int (**)())param_4[8])(uVar2,uVar3);
          *(unsigned int *)(*param_3 + 0x24) = uVar5;
        }
      }
    }
  }
  fn_8284E1F0(param_2,*param_3,param_4);
  if (((*(int *)(param_2 + 300) != 0) && (*(int *)(*(int *)(param_2 + 0x128) + 4) != 0)) &&
     (uVar6 = 0, *(int *)(param_2 + 300) != 0)) {
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_2 + 0x128) + iVar8 + 4);
      if (iVar1 != 0) {
        fn_82815400(param_1,iVar1,*(int *)(*param_3 + 0x4c) + iVar9 + 4);
        fn_82840000(*(unsigned int *)(*(int *)(param_2 + 0x128) + iVar8 + 4),
                          *(unsigned int *)(((unsigned int *)*param_3)[0x13] + iVar9 + 4),
                          *(unsigned int *)*param_3);
        iVar1 = *(int *)(*(int *)(param_2 + 0x128) + iVar8 + 0xc);
        if (iVar1 != 0) {
          *(int *)(*(int *)(*param_3 + 0x4c) + iVar9 + 8) = iVar1;
          *(unsigned int *)(*(int *)(*param_3 + 0x4c) + iVar9 + 0xc) = 0;
        }
        *(unsigned int *)(*(int *)(*param_3 + 0x50) + iVar7) =
             *(unsigned int *)(*(int *)(*(int *)(param_2 + 0x128) + iVar8 + 4) + 0x30);
      }
      uVar6 = uVar6 + 1;
      iVar9 = iVar9 + 0x10;
      iVar8 = iVar8 + 0x20;
      iVar7 = iVar7 + 4;
    } while (uVar6 < *(unsigned int *)(param_2 + 300));
  }
  return;
}

