#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8227CB30();
extern int fn_824558D8();
extern int fn_825521F0();
extern unsigned int lbl_821BA96C;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_2c;


void fn_82455740(float *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned char **ppuStack_30;
  unsigned __int64 uStack_2c;
  unsigned char ***pppuStack_20;
  
  uVar1 = fn_8227CB30(param_1 + 4);
  pppuStack_20 = &ppuStack_30;
  ppuStack_30 = &lbl_821BA96C;
  param_1[2] = ltcg_pool_0_0f;
  uStack_2c = CONCAT44(fn_824558D8,param_1);
  fn_825521F0((double)lbl_821CA460,(double)*param_1,uVar1,param_2,&ppuStack_30);
  return;
}

