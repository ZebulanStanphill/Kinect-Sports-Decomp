extern int fn_82F5D3D8();
extern int fn_82F5DEE0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82F59198(int param_1)

{
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  if (*(char *)(param_1 + 4) != '\0') {
    if (*(int *)(param_1 + 0x24) == 1) {
      uStack_2c = *(unsigned int *)(param_1 + 8);
      uStack_38 = *(unsigned int *)(param_1 + 0x18);
      uStack_34 = *(unsigned int *)(param_1 + 0x1c);
      uStack_30 = *(unsigned int *)(param_1 + 0x20);
      uStack_28 = *(unsigned int *)(param_1 + 0x10);
      uStack_40 = (unsigned int)(*(char *)(param_1 + 5) == '\0');
      uStack_3c = *(unsigned int *)(param_1 + 0x14);
      uStack_18 = lbl_82002AE0;
      uStack_24 = lbl_821AAD20;
      uStack_20 = lbl_821AAD20;
      uStack_1c = lbl_82002AE0;
      fn_82F5DEE0(param_1 + 0x28,&uStack_40);
    }
    else if (*(int *)(param_1 + 0x24) == 2) {
      fn_82F5D3D8(param_1 + 0x9c,param_1 + 0x28);
    }
  }
  return;
}

