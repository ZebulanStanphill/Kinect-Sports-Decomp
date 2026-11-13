extern unsigned int *auStack_50;
extern int fn_82B9CF38();
extern int fn_82B9D3D8();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82BC3138(int param_1,unsigned int *param_2,int *param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned char auStack_50 [16];
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  iVar1 = *(int *)(param_1 + 0x3b8);
  fn_82B9CF38(*(unsigned int *)(iVar1 + 0x600),*(unsigned int *)(param_1 + 0xac),auStack_50,
                    *(unsigned int *)(iVar1 + 0x568),0xffffffff82b7c800,iVar1);
  iVar1 = *(int *)(param_1 + 0x3b8);
  fn_82B9D3D8(*(unsigned int *)(iVar1 + 0x600),*(unsigned int *)(param_1 + 0xac),param_4,
                    *(unsigned int *)(iVar1 + 0x568),0xffffffff82b7c800,iVar1);
  *param_2 = uStack_2c;
  *param_3 = *(int *)(param_1 + 0xa8) +
             ((int)uStack_30 >> 2) + (unsigned int)((int)uStack_30 < 0 && (uStack_30 & 3) != 0);
  return;
}

