typedef unsigned char bool;
extern unsigned int *auStack_850;
extern int fn_8225F160();
extern int fn_8225F3C0();
extern int fn_8229DCA8();
extern int fn_8229E090();
extern int fn_8229E360();
extern int fn_824A1078();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8C90;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_824A0DE0(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned char auStack_850 [2128];
  
  fn_8225F160();
  iVar4 = fn_8225F3C0();
  if (param_5 == 0) {
    if (param_4 == 0) {
      (**(int (***)())(*param_1 + 0xc))(param_1,param_2);
    }
    else {
      iVar8 = 2;
      *(unsigned int *)(param_2 + 0x4c) = 0;
      uVar9 = 0;
      uVar7 = 0;
      iVar2 = *param_3;
      uVar3 = (unsigned int)param_3[9] >> 1 & 1;
      if (1 < iVar4) {
        iVar8 = (iVar2 == 1) + 3;
      }
      if ((param_1[iVar2 * 2 + 3] != 0) && ((uVar3 == 0 || (param_1[iVar2 * 2 + 2] != iVar8)))) {
        fn_8229E090(param_1[iVar2 * 2 + 3],0,1);
        uVar7 = 1;
        param_1[iVar2 * 2 + 3] = 0;
      }
      if ((1 < iVar4) || (uVar6 = 0, iVar2 == 0)) {
        uVar6 = 1;
      }
      if ((uVar3 & uVar6) != 0) {
        if (param_1[iVar2 * 2 + 3] == 0) {
          iVar4 = fn_8265C9E0(0x434);
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            *(unsigned char ***)(iVar4 + 0x41c) = &lbl_821A8C90;
            fn_8229DCA8(iVar4,0xffffffff820e975c,0xffffffff820e975c,0xffffffff820e975c,
                              0xffffffff820e975c,0xffffffff824a1140,param_1 + iVar2 * 2 + 2,1);
          }
          param_1[iVar2 * 2 + 3] = iVar4;
          uVar9 = 1;
        }
        fn_82528BF8(param_1[1],0xffffffff821aaad0,auStack_850,0x400,0,0);
        fn_8229E360(param_1[iVar2 * 2 + 3],0xffffffff820e975c,auStack_850);
      }
      fn_824A1078(param_1,iVar2,iVar8,uVar9,uVar7);
      param_1[iVar2 * 2 + 2] = iVar8;
    }
  }
  else if (param_2 != 0) {
    if (iVar4 < 2) {
      uVar5 = 9;
      bVar1 = *(int *)(param_2 + 0x48) == 9;
    }
    else {
      uVar5 = 10;
      bVar1 = *(int *)(param_2 + 0x48) == 10;
    }
    *(unsigned int *)(param_2 + 0x4c) = uVar5;
    if (!bVar1) {
      *(unsigned int *)(param_2 + 0x80) = ltcg_pool_0_0f;
    }
  }
  return 0;
}

