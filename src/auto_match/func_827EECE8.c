extern unsigned int *auStack_60;
extern int fn_827EE128();
extern int fn_8280A5D8();
extern int fn_82810280();
extern int fn_828102A8();
extern int fn_82810308();
extern int fn_82810328();
extern int fn_82810470();
extern int fn_82810B78();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821AAD20;


void fn_827EECE8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,__int64 param_8,
                  unsigned __int64 param_9,unsigned __int64 param_10,unsigned __int64 param_11)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 extraout_f1;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  unsigned __int64 uVar10;
  unsigned char auStack_60 [96];
  
  uVar1 = fn_82F6A548();
  uVar10 = extraout_f1;
  uVar5 = fn_82810280();
  uVar6 = fn_82810308(uVar1);
  lVar2 = fn_827EE128(param_2,uVar6,uVar5,uVar10,param_3,uVar1,param_5);
  if (lVar2 != 0) {
    lVar4 = 2;
    dVar9 = (double)lbl_821AAD20;
    do {
      dVar7 = (double)fn_82810280(param_8,param_11);
      if (dVar7 < dVar9) {
        fn_82810308(param_8);
        dVar8 = (double)fn_8280A5D8();
        fn_828102A8((double)(float)(dVar8 * dVar7),param_8,auStack_60);
        fn_82810328(param_11,auStack_60,param_11);
        iVar3 = fn_82810470(param_11);
        if (iVar3 == 0) {
          fn_82810B78(param_11,param_11);
        }
      }
      lVar4 = lVar4 + -1;
      param_8 = param_8 + 0xc;
    } while (lVar4 != 0);
  }
  fn_82F6A594(lVar2);
  return;
}

