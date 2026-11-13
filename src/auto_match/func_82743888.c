extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_6f;
extern int fn_82696330();
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_70;


void fn_82743888(int param_1,int param_2,unsigned __int64 *param_3)

{
  unsigned char uStack_70;
  unsigned char auStack_6f [15];
  unsigned char auStack_60 [8];
  unsigned __int64 uStack_58;
  unsigned char auStack_50 [8];
  unsigned __int64 uStack_48;
  
  uStack_58 = *param_3;
  auStack_60[0] = 3;
  uStack_70 = 0;
  (**(int (***)())(*(int *)(param_1 + 0x10) + 0x28))
            (param_1 + 0x10,param_2 + 0x78,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x1ec,auStack_60,
             &uStack_70);
  fn_82696330(auStack_60);
  uStack_48 = param_3[1];
  auStack_50[0] = 3;
  auStack_6f[0] = 0;
  (**(int (***)())(*(int *)(param_1 + 0x10) + 0x28))
            (param_1 + 0x10,param_2 + 0x78,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x1f0,auStack_50,
             auStack_6f);
  fn_82696330(auStack_50);
  return;
}

