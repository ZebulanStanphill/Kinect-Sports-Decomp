extern unsigned int *auStack_38;
extern int fn_8280A5D8();
extern int fn_82810208();
extern int fn_828102A8();
extern int fn_828106A0();
extern int fn_82862238();
extern unsigned int lbl_832116B8;
extern unsigned int lbl_832116BC;


void fn_82863B20(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned short uVar1;
  unsigned short uVar2;
  __int64 lVar3;
  unsigned char auStack_38 [56];
  
  fn_828106A0(param_2);
  uVar2 = *(unsigned short *)(param_1 + 8);
  lVar3 = 0;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      fn_82862238((double)lbl_832116BC,*(unsigned int *)(param_1 + 4),uVar2,lbl_832116B8,param_4
                        ,lVar3,auStack_38);
      fn_82810208(param_2,auStack_38,param_2);
      uVar1 = *(unsigned short *)(param_1 + 8);
      lVar3 = lVar3 + 1;
      uVar2 = uVar1;
    } while ((int)lVar3 < (int)(unsigned int)uVar1);
  }
  fn_8280A5D8((double)uVar1);
  fn_828102A8(param_2,param_2);
  return;
}

