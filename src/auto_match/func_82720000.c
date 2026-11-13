extern unsigned int *auStack_40;
extern int fn_826828D8();
extern int fn_82696330();
extern unsigned int lbl_8200579C;
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;


void fn_82720000(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned char auStack_40 [16];
  unsigned char **ppuStack_30;
  unsigned char *puStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned char uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_10 = *(unsigned int *)(param_1 + 8);
  uStack_14 = *(unsigned int *)(param_1 + 4);
  puStack_2c = auStack_40;
  auStack_40[0] = 0;
  uStack_1c = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  ppuStack_30 = &lbl_8200579C;
  uStack_28 = param_3;
  uStack_18 = param_2;
  (**(int (***)())(*(int *)*param_4 + 0x28))((int *)*param_4,&ppuStack_30,param_4[1],0);
  fn_826828D8(&ppuStack_30);
  fn_82696330(auStack_40);
  return;
}

