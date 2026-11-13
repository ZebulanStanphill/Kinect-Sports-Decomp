extern int fn_82230040();
extern int fn_82587028();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83297A58;
extern unsigned int lbl_83297A5C;
extern unsigned int lbl_83297A60;
extern unsigned int lbl_83297A68;
extern unsigned int lbl_83297A6C;
extern unsigned int lbl_83297A70;
extern unsigned int lbl_83297A80;
extern unsigned int lbl_83297A84;
extern unsigned int lbl_83297A8C;
extern unsigned int lbl_83297A90;
extern unsigned int lbl_83297A94;
extern unsigned int lbl_83297A9C;
extern unsigned int lbl_83297AA0;
extern unsigned int lbl_83297AA4;
extern unsigned int uStack_14;
extern unsigned int uStack_20;


unsigned __int64 fn_82569B60(void)

{
  int iVar1;
  unsigned char uStack_20;
  unsigned char **ppuStack_18;
  unsigned int uStack_14;
  
  lbl_83297A58 = uStack_20;
  lbl_83297A60 = 0;
  iVar1 = fn_8265C9E0(0x10);
  if (iVar1 != 0) {
    lbl_83297A5C = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(lbl_83297A5C + 4) = lbl_83297A5C;
    lbl_83297A68 = 0;
    lbl_83297A80 = lbl_821CA460;
    lbl_83297A6C = 0;
    lbl_83297A70 = 0;
    fn_82587028(0xffffffff83297a58,8);
    lbl_83297A84 = 0;
    lbl_83297A8C = 0;
    lbl_83297A90 = 0;
    lbl_83297A94 = 0;
    lbl_83297A9C = 0;
    lbl_83297AA0 = 0;
    lbl_83297AA4 = 0;
    return 0xffffffff83297a48;
  }
  uStack_14 = 0;
  ppuStack_18 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_18);
}

