extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82EDF308();
extern int fn_82EDFEC0();
extern int fn_82F45068();
extern int fn_82F45228();
extern int fn_82F68CC0();


void fn_82F456C0(int *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  if (param_1 != (int *)0x0) {
    if (((param_4 == (int *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
      *param_1 = 1;
    }
    else {
      *param_4 = 0;
      uVar1 = fn_8265C940(0x428,0x248c8000);
      *param_4 = (int)uVar1;
      if ((uVar1 & 0xffffffff) == 0) {
        *param_1 = 2;
      }
      else {
        if ((*(int *)(param_2 + 0x10) == 0) && (*(short *)(param_2 + 0xe) == 8)) {
          uVar3 = 0x428;
        }
        else {
          uVar3 = 0x34;
          if (*(int *)(param_2 + 0x10) != 3) {
            uVar3 = 0x28;
          }
        }
        fn_82F68CC0(uVar1,param_2,uVar3);
        param_4[1] = 0;
        uVar1 = fn_8265C940(0x428,0x248c8000);
        param_4[1] = (int)uVar1;
        if ((uVar1 & 0xffffffff) == 0) {
          *param_1 = 2;
          if (*param_4 != 0) {
            fn_8265C990(*param_4,0x248c8000);
            *param_4 = 0;
          }
        }
        else {
          if ((*(int *)(param_3 + 0x10) == 0) && (*(short *)(param_3 + 0xe) == 8)) {
            uVar3 = 0x428;
          }
          else {
            uVar3 = 0x34;
            if (*(int *)(param_3 + 0x10) != 3) {
              uVar3 = 0x28;
            }
          }
          fn_82F68CC0(uVar1,param_3,uVar3);
          param_4[0xe4f] = param_5;
          param_4[0xe35] = 0;
          *param_1 = 0;
          param_4[0xe45] = 0;
          param_4[0xe20] = 0;
          iVar2 = fn_82F45068(param_4);
          *param_1 = iVar2;
          if (iVar2 == 0) {
            iVar2 = fn_82EDFEC0(param_4);
            *param_1 = iVar2;
            if (iVar2 == 0) {
              if (param_4[0xe5a] == 0) {
                param_4[0xe57] = 0;
              }
              else if (param_4[0xe5a] == 1) {
                param_4[0xe57] = 1;
              }
              else {
                param_4[0xe57] = param_6;
              }
              iVar2 = fn_82F45228(param_4);
              *param_1 = iVar2;
              if (iVar2 == 0) {
                fn_82EDF308(param_4);
              }
            }
          }
        }
      }
    }
  }
  return;
}

