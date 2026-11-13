extern int fn_8252D2F8();
extern unsigned int iStack_2c;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8252D240(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  int iStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  uStack_4c = lbl_821CA460;
  uStack_48 = ltcg_pool_0_0f;
  uStack_3c = ltcg_pool_0_0f;
  uStack_50 = 0x4d697850;
  uStack_40 = lbl_821917C0;
  uStack_44 = 0x20;
  uStack_30 = lbl_821917C0;
  uStack_38 = 0;
  uStack_34 = 0x40;
  iStack_2c = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  if (param_3 != (int *)0x0) {
    if (*param_3 != 0) {
      iStack_2c = *param_3;
    }
  }
  fn_8252D2F8(param_1,0,&uStack_50,param_2);
  return;
}

