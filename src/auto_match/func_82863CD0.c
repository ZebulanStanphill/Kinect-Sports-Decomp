typedef unsigned char bool;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810530();
extern int fn_82862238();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832116B8;
extern unsigned int lbl_832116BC;


void fn_82863CD0(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4)

{
  double dVar1;
  double dVar2;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [48];
  
  fn_82862238((double)lbl_832116BC,*(unsigned int *)(param_1 + 4),*(unsigned short *)(param_1 + 8),
                    lbl_832116B8,param_4,0,auStack_40);
  fn_82810328(auStack_40,0xffffffff832116c0,auStack_30);
  dVar2 = (double)fn_82810280(param_2,auStack_30);
  dVar1 = (double)lbl_821AAD20;
  if (dVar1 < dVar2) {
    fn_82810530(param_2,param_2);
  }
  *(bool *)param_3 = dVar1 < dVar2;
  return;
}

