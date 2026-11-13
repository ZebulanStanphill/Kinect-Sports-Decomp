extern unsigned int *auStack_20;
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern int fn_8262FFB0();
extern int fn_8263B388();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8263B758(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned char auStack_28 [4];
  unsigned char auStack_24 [4];
  unsigned char auStack_20 [8];
  
  fn_8263B388(param_1,param_2,&uStack_30,&uStack_2c,auStack_20,auStack_24,auStack_28);
  uVar2 = *(unsigned int *)(param_1 + 0x28);
  uVar1 = *(unsigned int *)(param_1 + 0x1c);
  *param_3 = ((((((((((uVar2 >> 7 & 0x38 | uVar2 >> 7 & 7) << 3 | uVar2 >> 4 & 7) << 3 |
                    uVar2 >> 1 & 7) << 1 | uVar2 & 1) << 2 | uVar1 >> 8 & 3) << 2 | uVar1 >> 6 & 3)
                 << 2 | uVar1 >> 4 & 3) << 2 | uVar1 >> 2 & 3) << 1 | uVar1 >> 0x1f) << 2 |
             *(unsigned int *)(param_1 + 0x20) >> 6 & 3) << 6 | *(unsigned int *)(param_1 + 0x20) & 0x3f;
  uVar2 = fn_8262FFB0(param_1);
  param_3[1] = uVar2;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[5] = 0;
  param_3[6] = uStack_30;
  param_3[7] = uStack_2c;
  param_3[4] = 0;
  return;
}

