typedef unsigned char bool;
extern unsigned int *auStack_50;
extern int fn_82CEBF80();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_14;
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


bool fn_82CEC048(unsigned int *param_1)

{
  char *pcVar1;
  unsigned char auStack_50 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  stack_pair_40.first = *param_1;
  uStack_2c = param_1[5];
  uStack_18 = param_1[10];
  stack_pair_40.second = param_1[4];
  uStack_30 = param_1[1];
  uStack_38 = param_1[8];
  uStack_20 = param_1[2];
  uStack_28 = param_1[9];
  uStack_1c = param_1[6];
  uStack_34 = lbl_821AAD20;
  uStack_24 = lbl_821AAD20;
  uStack_14 = lbl_821AAD20;
  pcVar1 = (char *)fn_82CEBF80(auStack_50,param_1,&stack_pair_40.first);
  return *pcVar1 != '\0';
}

