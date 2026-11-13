extern unsigned int *auStack_60;
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_8247E810();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821BD4A4;
extern unsigned int lbl_821BD9EC;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_7c;


unsigned int *
fn_8247B310(unsigned int *param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4,
             unsigned __int64 param_5,unsigned int param_6)

{
  unsigned __int64 uVar1;
  unsigned char **ppuStack_80;
  unsigned int uStack_7c;
  unsigned char ***pppuStack_70;
  unsigned char auStack_60 [96];
  
  param_1[1] = 1;
  *param_1 = &lbl_821A8D8C;
  param_1[2] = 1;
  if (param_1 + 4 != (unsigned int *)0x0) {
    uStack_7c = *param_4;
    pppuStack_70 = &ppuStack_80;
    param_1[7] = ltcg_pool_0_0f;
    ppuStack_80 = &lbl_821BD4A4;
    param_1[5] = 7;
    param_1[6] = 0;
    param_1[4] = &lbl_821BD9EC;
    uVar1 = fn_822C5B18(auStack_60,&ppuStack_80);
    fn_8247E810(param_1 + 8,param_2,param_3,uVar1,param_5);
    param_1[0x262] = param_6;
    param_1[0x264] = 0;
    param_1[0x263] = *(unsigned int *)(param_2 + 4);
    fn_82359C18(&ppuStack_80);
  }
  return param_1;
}

