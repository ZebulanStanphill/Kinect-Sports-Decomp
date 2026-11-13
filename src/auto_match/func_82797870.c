extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_8278B290();
extern int fn_8278E7B0();
extern int fn_8278E8D0();
extern unsigned int lbl_82010C6C;
extern unsigned int lbl_8201581C;
extern unsigned int uStack_2a;
extern unsigned int uStack_2c;
extern unsigned int uStack_2e;
extern unsigned int uStack_30;
extern unsigned int uStack_32;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


unsigned int * fn_82797870(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned char **ppuStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned short uStack_34;
  unsigned short uStack_32;
  unsigned short uStack_30;
  unsigned short uStack_2e;
  unsigned short uStack_2c;
  unsigned short uStack_2a;
  
  param_1[1] = 1;
  *param_1 = &lbl_8201581C;
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  param_1[2] = param_2;
  uStack_3c = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(unsigned char *)(param_1 + 8) = 0;
  ppuStack_40 = &lbl_82010C6C;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_32 = 0;
  uStack_30 = 0;
  uStack_2e = 0;
  uStack_2c = 0;
  uStack_2a = 0;
  uVar1 = fn_8278E8D0(param_2,&ppuStack_40);
  if (param_1[6] != 0) {
    fn_8267C498(param_1[6]);
  }
  param_1[6] = uVar1;
  ppuStack_40 = &lbl_82010C6C;
  fn_8278B290(&ppuStack_40);
  fn_8267C488(&ppuStack_40);
  uVar1 = fn_8278E7B0(param_2,param_2 + 0x20);
  if (param_1[7] != 0) {
    fn_8267C4F0(param_1[7]);
  }
  param_1[7] = uVar1;
  return param_1;
}

