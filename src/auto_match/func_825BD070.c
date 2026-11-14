typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_8256D3A8();
extern int fn_8256D798();
extern int fn_827D78D0();
extern int fn_827D9FB0();
extern int fn_827DC748();
extern int fn_82811400();
extern int XMemSet();
extern unsigned int lbl_83156AA0;
extern unsigned int lbl_83265A24;
extern unsigned int lbl_8326B7C8;
extern unsigned int uStack_7c;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


unsigned __int64 fn_825BD070(int param_1)

{
  int iVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int auStack_c0 [4];
  unsigned char auStack_b0 [32];
  unsigned int **appuStack_90 [5];
  unsigned int uStack_7c;
  unsigned char auStack_70 [112];
  
  bVar2 = false;
  auStack_c0[0] = 0;
  if (*(char *)(param_1 + 0x214) != '\0') {
    return 0x3e5;
  }
  fn_827D78D0(appuStack_90,lbl_83265A24,param_1 + 0x1f8,0xffffffffffffffff,0);
  iVar1 = *(int *)lbl_83156AA0;
  uVar3 = fn_82811400(auStack_b0,4);
  lVar4 = (**(int (***)())(iVar1 + 0xc))(lbl_83156AA0,0x68,uVar3);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    bVar2 = true;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0xffffffff;
    uStack_c4 = 1;
    auStack_c0[0] = 0;
    if (uStack_7c < 0x10) {
      appuStack_90[0] = appuStack_90;
    }
    fn_8256D3A8(auStack_70,appuStack_90[0]);
    uVar3 = fn_827D9FB0(lVar4,auStack_70,auStack_c0,&uStack_c4,&uStack_c8,&uStack_cc,
                              &uStack_d0);
  }
  if (bVar2) {
    fn_8256D798(auStack_70,1,0);
  }
  uVar5 = fn_827DC748(lbl_8326B7C8,uVar3);
  *(unsigned int *)(param_1 + 0x58) = uVar5;
                    /* WARNING: Subroutine does not return */
  XMemSet(param_1 + 0x90,0,0x148);
}

