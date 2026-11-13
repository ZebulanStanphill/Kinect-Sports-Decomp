extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_8229FDA0();
extern int fn_8236FB68();
extern int fn_823807F0();
extern int fn_82508078();
extern int fn_82535298();
extern int fn_82536070();
extern int fn_82536288();
extern int fn_82536590();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D1C34;


void fn_8238CC68(int *param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  double dVar7;
  unsigned int auStack_30 [12];
  
  param_1[3] = param_1[3] + 1;
  *(unsigned int *)(*param_2 + 0x174) = 0;
  uVar2 = lbl_831D1C34;
  iVar5 = *param_2;
  *(unsigned int *)(iVar5 + 0xe0) = lbl_831D1C34;
  *(unsigned int *)(iVar5 + 0xd4) = 1;
  *(unsigned int *)(iVar5 + 0xe4) = uVar2;
  fn_823807F0(*(unsigned int *)(param_1[2] + 0x664),0x1a);
  dVar7 = (double)(**(int (***)())(*param_1 + 0x70))(param_1);
  if (dVar7 <= (double)ltcg_pool_0_0f) {
    uVar6 = (unsigned __int64)(unsigned int)param_1[5] - (unsigned __int64)(unsigned int)param_1[3];
    fn_8229FDA0(*(unsigned int *)(*(int *)(param_1[2] + 0xd4) + 0xc),
                      ((uVar6 & 0xffffffff) >> 0x1f) - (unsigned __int64)(uVar6 != 0) & uVar6);
    if ((int)uVar6 < 1) {
      if (param_1[0x12] != 0) {
        iVar5 = param_1[2];
        if (((*(int *)(iVar5 + 0xa0) == 0) || (*(int *)(*(int *)(iVar5 + 0xa0) + 0x40) != 1)) &&
           (*(int *)(iVar5 + 0xc48) != 0)) {
          fn_82536590(iVar5 + 0xc40,0);
          *(unsigned int *)(iVar5 + 0xc48) = 0;
        }
        param_1[0x12] = 0;
      }
    }
    else {
      if ((int)uVar6 == 1) {
        iVar5 = param_1[2];
        lVar3 = fn_8236FB68(0xc);
        if (lVar3 != 0) {
          fn_82508078(*(unsigned int *)(iVar5 + 0xa4),lVar3,0);
        }
      }
      iVar5 = param_1[2];
      iVar1 = *(int *)(iVar5 + 0xa0);
      if (((uVar6 & 0xffffffff) == 0) || ((uVar6 & 0xffffffff) == 1)) {
        if (((iVar1 != 0) && (*(int *)(iVar1 + 0x40) == 1)) || (*(int *)(iVar5 + 0xc48) == 0))
        goto LAB_8238ce64;
        uVar4 = 0xffffffff821b34d4;
      }
      else if ((uVar6 & 0xffffffff) < 3) {
        if (((iVar1 != 0) && (*(int *)(iVar1 + 0x40) == 1)) || (*(int *)(iVar5 + 0xc48) == 0))
        goto LAB_8238ce64;
        uVar4 = 0xffffffff821b34c4;
      }
      else {
        if (((iVar1 != 0) && (*(int *)(iVar1 + 0x40) == 1)) || (*(int *)(iVar5 + 0xc48) == 0))
        goto LAB_8238ce64;
        uVar4 = 0xffffffff821b34ac;
      }
      fn_82536070(0xffffffff821b34b4,uVar4);
    }
  }
  else {
    iVar5 = param_1[2];
    lVar3 = fn_8236FB68(0xc);
    if (lVar3 != 0) {
      fn_82508078(*(unsigned int *)(iVar5 + 0xa4),lVar3,0);
    }
  }
LAB_8238ce64:
  auStack_30[0] = *(unsigned int *)(param_1[2] + 0x2f8);
  auStack_30[0] =
       fn_82535298(auStack_30,**(unsigned int **)(param_1[2] + 0x9b8),0xffffffff83296bc0,
                         0xffffffff83296bd0);
  fn_82536288(auStack_30);
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

