extern unsigned int *auStack_70;
extern int fn_82230040();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_8251F720();
extern int fn_8251FBA8();
extern int fn_82522D98();
extern int fn_8265C9E0();
extern unsigned int iStack_50;
extern unsigned int lbl_82002B04;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_84;


void fn_8243D160(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned char **ppuStack_88;
  unsigned int uStack_84;
  unsigned char auStack_70 [32];
  int iStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_44;
  
  fn_8251F720(param_3,0);
  uVar1 = fn_8251FBA8();
  if ((uVar1 & 0xffffffff) < 0x38) {
    return;
  }
  fn_82230300(auStack_70,0,0);
  uStack_4c = 0;
  iStack_50 = fn_8265C9E0(0x18);
  if (iStack_50 != 0) {
    *(int *)iStack_50 = iStack_50;
    *(int *)(iStack_50 + 4) = iStack_50;
    *(int *)(iStack_50 + 8) = iStack_50;
    *(unsigned char *)(iStack_50 + 0x14) = 1;
    *(unsigned char *)(iStack_50 + 0x15) = 1;
    uStack_44 = 0;
    fn_82230218(auStack_70,param_2,0,0xffffffffffffffff);
                    /* WARNING: Subroutine does not return */
    fn_82522D98(uVar1);
  }
  uStack_84 = 0;
  ppuStack_88 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_88);
}

