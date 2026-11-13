typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_78;
extern unsigned int *auStack_84;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e8;
extern float fRam83211318;
extern unsigned int fStack_d8;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern int fn_827E9B80();
extern int fn_82810208();
extern int fn_82810280();
extern int fn_828102A8();
extern int fn_82810328();
extern int fn_82810B78();
extern int fn_8285A980();
extern int iRam8321131c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83211320;
extern unsigned int lbl_83211324;
extern unsigned int lbl_83211326;
extern unsigned int lbl_83211328;
extern unsigned int uRam83211314;


void fn_82859550(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  unsigned short uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float afStack_f0 [2];
  unsigned char auStack_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [12];
  unsigned char auStack_84 [12];
  unsigned char auStack_78 [120];
  
  dVar11 = (double)lbl_821AAD20;
  fStack_e0 = lbl_821AAD20;
  fStack_dc = lbl_821AAD20;
  fStack_d8 = lbl_821AAD20;
  iVar6 = param_1;
  if ((lbl_83211326 != '\0') && (iVar6 = iRam8321131c, lbl_83211320 < lbl_83211324)) {
    *(int *)((unsigned int)lbl_83211320 * 0xd8 + lbl_83211328) = param_1;
    lbl_83211320 = lbl_83211320 + 1;
    iVar6 = iRam8321131c;
  }
  iRam8321131c = iVar6;
  fn_82810328(param_3,param_2,auStack_c0);
  bVar3 = false;
  iVar6 = 0;
  if (*(short *)(param_1 + 0x34) != 0) {
    iVar7 = 0;
    dVar10 = (double)lbl_82002AE0;
    do {
      iVar2 = *(int *)(iVar7 + *(int *)(param_1 + 0x30));
      if (iVar2 != param_4) {
        fn_8285A980((double)fRam83211318,*(unsigned int *)(iVar2 + 0x14),
                          *(unsigned short *)(iVar2 + 0x18),uRam83211314);
        uVar5 = *(unsigned short *)(iVar2 + 0x18);
        iVar8 = 2;
        if (2 < uVar5) {
          do {
            fn_8285A980((double)fRam83211318,*(unsigned int *)(iVar2 + 0x14),uVar5,uRam83211314)
            ;
            fn_8285A980((double)fRam83211318,*(unsigned int *)(iVar2 + 0x14),
                              *(unsigned short *)(iVar2 + 0x18),uRam83211314);
            iVar4 = fn_827E9B80(dVar10,param_2,auStack_c0,auStack_90,auStack_84,auStack_78,
                                    &fStack_e0,auStack_e8,afStack_f0);
            if ((iVar4 != 0) && (dVar11 < (double)afStack_f0[0])) {
              fn_828102A8(auStack_c0,auStack_a0);
              fn_82810208(param_2,auStack_a0,auStack_b0);
              fn_82810328(param_3,auStack_90,auStack_d0);
              fn_82810B78(auStack_d0,auStack_d0);
              dVar9 = (double)fn_82810280(iVar2 + 0x1c,auStack_d0);
              if (dVar11 <= dVar9) {
                uVar1 = *(unsigned int *)(iVar2 + 0x34);
              }
              else {
                uVar1 = *(unsigned int *)(iVar2 + 0x38);
              }
              fn_82859550(uVar1,auStack_b0,param_3,iVar2);
              bVar3 = true;
              break;
            }
            uVar5 = *(unsigned short *)(iVar2 + 0x18);
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)(unsigned int)uVar5);
        }
      }
      if (bVar3) {
        return;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x34));
  }
  return;
}

