extern int fn_82C56398();


unsigned __int64 fn_82C7BB28(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  lVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6070) + 8;
  iVar6 = (int)(param_2 + 0xfU) >> 4;
  uVar10 = (unsigned __int64)(unsigned int)(param_3 + 0xf >> 4) / (unsigned __int64)*(unsigned int *)(param_1 + 0xd40);
  trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0xd40),0);
  uVar4 = fn_82C56398(lVar11,((__int64)*(int *)(param_1 + 0x88) *
                                (__int64)*(int *)(param_1 + 0x8c) & 0x7fffffffU) << 1,
                        0xffffffff82196582);
  *(unsigned int *)(param_1 + 0x3d68) = uVar4;
  iVar5 = fn_82C56398(lVar11,(__int64)*(int *)(param_1 + 0x88) *
                               (__int64)*(int *)(param_1 + 0x8c),0xffffffff82196582);
  *(int *)(param_1 + 0x3d70) = iVar5;
  if ((*(int *)(param_1 + 0x3d68) != 0) && (iVar5 != 0)) {
    uVar4 = fn_82C56398(lVar11,((__int64)*(int *)(param_1 + 0x88) *
                                  (__int64)*(int *)(param_1 + 0x8c) & 0x7fffffffU) << 1,
                          0xffffffff82196582);
    *(unsigned int *)(param_1 + 0x3d6c) = uVar4;
    iVar5 = fn_82C56398(lVar11,(__int64)*(int *)(param_1 + 0x88) *
                                 (__int64)*(int *)(param_1 + 0x8c),0xffffffff82196582);
    *(int *)(param_1 + 0x3d74) = iVar5;
    if ((*(int *)(param_1 + 0x3d6c) != 0) && (iVar5 != 0)) {
      if ((*(int *)(param_1 + 0x10) != 0) &&
         (iVar5 = *(int *)(*(int *)(param_1 + 0x6070) + 0x43d8), param_1 != iVar5)) {
        *(unsigned int *)(param_1 + 0x3d78) = *(unsigned int *)(iVar5 + 0x3d78);
        *(unsigned int *)(param_1 + 0x3d80) = *(unsigned int *)(iVar5 + 0x3d80);
        *(unsigned int *)(param_1 + 0x3d88) = *(unsigned int *)(iVar5 + 0x3d88);
        *(unsigned int *)(param_1 + 0x3d90) = *(unsigned int *)(iVar5 + 0x3d90);
        *(unsigned int *)(param_1 + 0x3d98) = *(unsigned int *)(iVar5 + 0x3d98);
        *(unsigned int *)(param_1 + 0x3da0) = *(unsigned int *)(iVar5 + 0x3da0);
        *(unsigned int *)(param_1 + 0x3da8) = *(unsigned int *)(iVar5 + 0x3da8);
        *(unsigned int *)(param_1 + 0x3db0) = *(unsigned int *)(iVar5 + 0x3db0);
        *(unsigned int *)(param_1 + 0x3db8) = *(unsigned int *)(iVar5 + 0x3db8);
        *(unsigned int *)(param_1 + 0x3dc0) = *(unsigned int *)(iVar5 + 0x3dc0);
        *(unsigned int *)(param_1 + 0x3dc8) = *(unsigned int *)(iVar5 + 0x3dc8);
        *(unsigned int *)(param_1 + 0x3dd0) = *(unsigned int *)(iVar5 + 0x3dd0);
        return 0;
      }
      uVar7 = (uVar10 & 0x7fffffff) * 2 - 1;
      iVar5 = (int)(uVar1 + 0x1f) >> 5;
      uVar4 = fn_82C56398(lVar11,(__int64)iVar5 * (__int64)(int)uVar7,0xffffffff82196582);
      *(unsigned int *)(param_1 + 0x3d78) = uVar4;
      uVar4 = fn_82C56398(lVar11,((__int64)iVar5 * (__int64)(int)(unsigned int)uVar10 & 0x7fffffffU) <<
                                   1,0xffffffff82196582);
      *(unsigned int *)(param_1 + 0x3d80) = uVar4;
      iVar5 = ((int)uVar1 >> 1) + 0x1f >> 5;
      lVar8 = (__int64)(int)((uVar7 & 0xffffffff) >> 1) * (__int64)iVar5;
      uVar4 = fn_82C56398(lVar11,lVar8,0xffffffff82196582);
      *(unsigned int *)(param_1 + 0x3d88) = uVar4;
      lVar9 = (__int64)(int)((unsigned int)uVar10 & 0x7fffffff) * (__int64)iVar5;
      uVar4 = fn_82C56398(lVar11,lVar9,0xffffffff82196582);
      *(unsigned int *)(param_1 + 0x3d90) = uVar4;
      uVar4 = fn_82C56398(lVar11,lVar8,0xffffffff82196582);
      *(unsigned int *)(param_1 + 0x3d98) = uVar4;
      iVar5 = fn_82C56398(lVar11,lVar9,0xffffffff82196582);
      *(int *)(param_1 + 0x3da0) = iVar5;
      if ((((*(int *)(param_1 + 0x3d78) != 0) && (*(int *)(param_1 + 0x3d80) != 0)) &&
          (*(int *)(param_1 + 0x3d88) != 0)) &&
         (((*(int *)(param_1 + 0x3d90) != 0 && (*(int *)(param_1 + 0x3d98) != 0)) && (iVar5 != 0))))
      {
        iVar3 = (int)(uVar10 << 4);
        iVar2 = iVar6 * 2;
        iVar5 = iVar3 + 0x1f >> 5;
        uVar4 = fn_82C56398(lVar11,(__int64)(iVar2 + -1) * (__int64)iVar5,0xffffffff82196582);
        *(unsigned int *)(param_1 + 0x3da8) = uVar4;
        uVar4 = fn_82C56398(lVar11,((__int64)iVar5 * (__int64)iVar6 & 0x7fffffffU) << 1,
                              0xffffffff82196582);
        *(unsigned int *)(param_1 + 0x3db0) = uVar4;
        iVar6 = (iVar3 >> 1) + 0x1f >> 5;
        lVar8 = (__int64)(iVar2 + -1 >> 1) * (__int64)iVar6;
        uVar4 = fn_82C56398(lVar11,lVar8,0xffffffff82196582);
        *(unsigned int *)(param_1 + 0x3db8) = uVar4;
        lVar9 = (__int64)(iVar2 >> 1) * (__int64)iVar6;
        uVar4 = fn_82C56398(lVar11,lVar9,0xffffffff82196582);
        *(unsigned int *)(param_1 + 0x3dc0) = uVar4;
        uVar4 = fn_82C56398(lVar11,lVar8,0xffffffff82196582);
        *(unsigned int *)(param_1 + 0x3dc8) = uVar4;
        iVar6 = fn_82C56398(lVar11,lVar9,0xffffffff82196582);
        *(int *)(param_1 + 0x3dd0) = iVar6;
        if (((*(int *)(param_1 + 0x3da8) != 0) && (*(int *)(param_1 + 0x3db0) != 0)) &&
           ((*(int *)(param_1 + 0x3db8) != 0 &&
            (((*(int *)(param_1 + 0x3dc0) != 0 && (*(int *)(param_1 + 0x3dc8) != 0)) && (iVar6 != 0)
             ))))) {
          return 0;
        }
      }
    }
  }
  return 0xfffffffffffffff7;
}

