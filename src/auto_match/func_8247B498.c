extern unsigned int *auStack_60;
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_824791D0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821BD014;
extern unsigned int lbl_821BD4BC;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_7c;


unsigned int *
fn_8247B498(unsigned int *param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned int *param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char **ppuStack_80;
  unsigned int uStack_7c;
  unsigned char ***pppuStack_70;
  unsigned char auStack_60 [96];
  
  param_1[1] = 1;
  *param_1 = &lbl_821A8D8C;
  param_1[2] = 1;
  if (param_1 + 4 != (unsigned int *)0x0) {
    uStack_7c = *param_6;
    uVar1 = *param_3;
    param_1[7] = ltcg_pool_0_0f;
    pppuStack_70 = &ppuStack_80;
    param_1[5] = 8;
    ppuStack_80 = &lbl_821BD4BC;
    param_1[6] = 0;
    param_1[4] = &lbl_821BD014;
    uVar2 = fn_822C5B18(auStack_60,&ppuStack_80);
    fn_824791D0(param_1 + 8,param_2,uVar1,param_4,param_5,uVar2,param_7);
    fn_82359C18(&ppuStack_80);
  }
  return param_1;
}

