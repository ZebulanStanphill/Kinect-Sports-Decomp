extern int fn_82230040();
extern int fn_82587028();
extern int fn_8265C9E0();
extern int fn_827D9630();
extern int fn_827D9980();
extern int fn_82A1E6A0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821C8D88;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_44;
extern unsigned int uStack_50;


unsigned int *
fn_825BE350(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned int param_7,unsigned __int64 param_8)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char uStack_50;
  unsigned char **ppuStack_48;
  unsigned int uStack_44;
  
  fn_827D9980(param_1,param_2,param_4,param_5,param_8);
  param_1[0xe] = param_3;
  param_1[0xd] = param_7;
  *param_1 = &lbl_821C8D88;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x6f] = (int)param_2;
  param_1[0x6c] = 0;
  param_1[0x70] = (int)param_8;
  *(unsigned char *)(param_1 + 0x71) = uStack_50;
  param_1[0x73] = 0;
  iVar1 = fn_8265C9E0(0x30);
  if (iVar1 != 0) {
    param_1[0x72] = iVar1;
    *(int *)iVar1 = iVar1;
    *(unsigned int *)(param_1[0x72] + 4) = param_1[0x72];
    uVar2 = lbl_821CA460;
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
    param_1[0x7b] = uVar2;
    fn_82587028(param_1 + 0x71,8);
    param_1[0x7c] = 0;
    fn_827D9630(param_1 + 0x7e,param_6);
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x88] = 0;
    param_1[0x89] = 0;
    param_1[0x8a] = 0;
    uVar2 = fn_82A1E6A0(0,1,0,0);
    param_1[0x6d] = uVar2;
    return param_1;
  }
  uStack_44 = 0;
  ppuStack_48 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_48);
}

