extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern int fn_828802F8();
extern int fn_82880C60();
extern int fn_82881A08();
extern int fn_82883FC8();
extern int fn_828846A0();
extern int fn_82888170();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern int fn_82CE06A8();
extern int fn_82CE08B8();
extern int fn_82CE08F0();
extern int fn_82CE0978();
extern int fn_82CE0BB0();
extern unsigned int lbl_831599F0;
extern int (*lbl_832129C8)();
extern unsigned int lbl_832129FC;
extern unsigned int uStack_ac;
extern unsigned int uStack_ae;
extern unsigned int uStack_b0;


unsigned __int64 fn_82885788(int param_1,unsigned __int64 param_2)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned int auStack_c0 [2];
  unsigned char auStack_b8 [8];
  unsigned short uStack_b0;
  unsigned short uStack_ae;
  unsigned int uStack_ac;
  unsigned char auStack_a0 [48];
  unsigned char auStack_70 [112];
  
  iVar3 = fn_82CE06A8(*(unsigned int *)(param_1 + 4),auStack_a0,auStack_b8);
  if (iVar3 == 0) {
    uVar1 = fn_82880C60(param_1 + 4,auStack_a0,auStack_b8);
    if ((int)uVar1 < 0) {
      if (lbl_832129FC == '\0') {
        fn_82888170(0,2,0x1b,1);
      }
      else {
        uVar1 = fn_82881A08();
        if ((int)uVar1 < 0) {
          fn_82888170(0,2,0x1c,1);
        }
        else {
          if (lbl_831599F0 == 0xffffffff) {
            uVar2 = fn_82CE08B8(2,2,0xfe);
            lbl_831599F0 = (unsigned int)uVar2;
            if (lbl_831599F0 == 0xffffffff) {
              fn_82CE0BB0();
              uVar2 = (unsigned __int64)lbl_831599F0;
            }
            auStack_c0[0] = 1;
            iVar3 = fn_82CE08F0(uVar2,0xffffffff8004667e,auStack_c0);
            if (iVar3 == -1) {
              fn_82CE0BB0();
            }
            uStack_b0 = 2;
            uStack_ac = 0;
            uStack_ae = 1000;
            iVar3 = fn_82CE0978(lbl_831599F0,&uStack_b0,0x10);
            if (iVar3 == -1) {
              fn_82CE0BB0();
            }
          }
          fn_828802F8(auStack_70,param_1,auStack_a0,auStack_b8,0);
          fn_828846A0(auStack_70,uVar1);
          if (lbl_832129C8 == (int (**)())0x0) {
            fn_82888170(uVar1,2,0x1e,1);
          }
          else {
            iVar3 = fn_828E9DA8(param_2);
            iVar4 = fn_828E9D90(param_2);
            if (0xf < iVar3 - iVar4) {
              fn_828E9FF8(param_2,0x10);
            }
            iVar3 = fn_828E9DA8(param_2);
            iVar4 = fn_828E9D90(param_2);
            if (((iVar3 - iVar4 < 1) || (iVar3 = fn_828E9FF8(param_2,1), iVar3 == 0)) &&
               (iVar3 = (*lbl_832129C8)(uVar1,param_2,auStack_b8), iVar3 != 0)) {
              fn_82888170(uVar1,2,0x1e,1);
              fn_828E9D40(param_2);
            }
            else {
              fn_82888170(uVar1,2,0x1d,1);
              fn_82883FC8(uVar1);
              fn_828E9D40(param_2);
              uVar1 = 0xffffffffffffffff;
            }
          }
        }
      }
    }
  }
  else {
    fn_82888170(0,2,0x1b,1);
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}

