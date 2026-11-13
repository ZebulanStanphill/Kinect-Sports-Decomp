extern int fn_824B4288();
extern int fn_82F58770();
extern int fn_82F58A68();
extern unsigned int lbl_82165F34;
extern unsigned int lbl_82165F4C;


void fn_82F58AE8(unsigned int *param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  unsigned char **ppuStack_70;
  unsigned int *puStack_6c;
  unsigned char ***pppuStack_60;
  unsigned char **ppuStack_50;
  unsigned int *puStack_4c;
  unsigned char ***pppuStack_40;
  
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  pppuStack_40 = &ppuStack_50;
  pppuStack_60 = &ppuStack_70;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *param_1 = param_2;
  ppuStack_50 = &lbl_82165F4C;
  ppuStack_70 = &lbl_82165F34;
  puStack_6c = param_1;
  puStack_4c = param_1;
  uVar1 = fn_82F58A68();
  fn_82F58770(uVar1,param_1,&ppuStack_70,&ppuStack_50);
                    /* WARNING: Subroutine does not return */
  fn_824B4288(param_1 + 4,0x1c0);
}

