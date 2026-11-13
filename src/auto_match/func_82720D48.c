extern int fn_82720090();
extern unsigned int iStack_28;
extern unsigned int lbl_8201046C;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;


void fn_82720D48(unsigned __int64 param_1,int param_2,unsigned int param_3,int param_4,unsigned int param_5,
                  unsigned int param_6,unsigned int param_7,unsigned char param_8)

{
  __int64 lVar1;
  unsigned char **ppuStack_30;
  unsigned int uStack_2c;
  int iStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned char uStack_18;
  
  lVar1 = param_1 + 0x10;
  ppuStack_30 = &lbl_8201046C;
  if ((param_1 & 0xffffffff) == 0) {
    lVar1 = 0;
  }
  uStack_2c = param_3;
  iStack_28 = param_4;
  uStack_24 = param_5;
  uStack_20 = param_6;
  uStack_1c = param_7;
  uStack_18 = param_8;
  fn_82720090(param_2,lVar1,
                ((unsigned __int64)(param_4 + 2) & 0x3fffffff) * 4 + (unsigned __int64)*(unsigned int *)(param_2 + 0x78),
                &ppuStack_30);
  return;
}

