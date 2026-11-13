extern int fn_82D46950();
extern unsigned int iStack_14;
extern unsigned int lbl_8213869C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_30;


unsigned char * fn_82D479F8(unsigned char *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned char uStack_30;
  unsigned char **ppuStack_20;
  unsigned int uStack_1c;
  unsigned char uStack_18;
  int iStack_14;
  
  uStack_1c = *(unsigned int *)(param_4 + 0x10);
  uStack_18 = 0;
  ppuStack_20 = &lbl_8213869C;
  iStack_14 = param_4;
  fn_82D46950((double)lbl_821AAD20,param_2,param_3,0,uStack_30,0xffffffff821b0000,&ppuStack_20
                   );
  *param_1 = uStack_18;
  return param_1;
}

