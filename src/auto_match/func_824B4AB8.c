extern unsigned int *auStack_28;
extern float fRam831c48b0;
extern float fRam831c48b4;
extern int fn_824B49D8();
extern int fn_82539560();
extern float lbl_821956D4;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_824B4AB8(int param_1,int *param_2)

{
  int iVar1;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned char auStack_28 [40];
  
  iVar1 = *(int *)(param_1 + 0x3c);
  (**(int (***)())*param_2)(param_2,auStack_28,&uStack_30);
  (**(int (***)())(*param_2 + 4))(param_2,uStack_30,&uStack_2c);
  fn_824B49D8(param_1 + 0x4c,uStack_2c,(-(unsigned __int64)(iVar1 != 0) & 0xfffffffc) + 10,
                    (-(unsigned __int64)(iVar1 != 0) & 0xfffffffc) + 9);
                    /* WARNING: Subroutine does not return */
  fn_82539560(ABS((double)(*(float *)(param_1 + 0x50) * lbl_821956D4)),(double)fRam831c48b0,
               (double)fRam831c48b4,(double)ltcg_pool_0_0f,(double)lbl_821CA460);
}

