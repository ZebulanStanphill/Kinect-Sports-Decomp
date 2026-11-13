extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_82810240();
extern int fn_82810328();
extern int fn_82810360();
extern int fn_82810470();
extern int fn_82810530();
extern int fn_82810B78();
extern int fn_82862238();
extern unsigned int lbl_832116B8;
extern unsigned int lbl_832116BC;
extern unsigned int lbl_832116C0;
extern unsigned int lbl_832116C4;
extern unsigned int lbl_832116C8;


void fn_82864020(int param_1,char param_2,int param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  float *pfVar3;
  unsigned __int64 uVar4;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  fn_82862238((double)lbl_832116BC,*(unsigned int *)(param_1 + 4),*(unsigned short *)(param_1 + 8),
                    lbl_832116B8,param_4,0,auStack_70);
  uVar2 = (unsigned __int64)*(unsigned short *)(param_1 + 8);
  if (uVar2 != 0) {
    pfVar3 = (float *)(param_3 + -4);
    uVar4 = 1;
    do {
      fn_82862238((double)lbl_832116BC,*(unsigned int *)(param_1 + 4),uVar2,lbl_832116B8,param_4
                        ,-(unsigned __int64)(uVar2 != uVar4) & uVar4,auStack_60);
      fn_82810328(auStack_70,0xffffffff832116c0,auStack_40);
      fn_82810328(auStack_60,auStack_70,auStack_50);
      fn_82810240(auStack_40,auStack_50,&fStack_80);
      iVar1 = fn_82810470(&fStack_80);
      if (iVar1 == 0) {
        fn_82810B78(&fStack_80,&fStack_80);
      }
      if (param_2 != '\0') {
        fn_82810530(&fStack_80,&fStack_80);
      }
      pfVar3[1] = fStack_80;
      pfVar3[2] = fStack_7c;
      pfVar3[3] = fStack_78;
      pfVar3 = pfVar3 + 4;
      *pfVar3 = lbl_832116C0 * fStack_80 + lbl_832116C8 * fStack_78 + lbl_832116C4 * fStack_7c;
      fn_82810360(auStack_60,auStack_70);
      uVar2 = (unsigned __int64)*(unsigned short *)(param_1 + 8);
      iVar1 = (int)uVar4;
      uVar4 = uVar4 + 1;
    } while (iVar1 < (int)(unsigned int)*(unsigned short *)(param_1 + 8));
  }
  return;
}

