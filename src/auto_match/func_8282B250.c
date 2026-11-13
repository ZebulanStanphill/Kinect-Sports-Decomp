extern unsigned int *auStack_40;
extern int fn_82822E38();
extern int fn_82822F60();
extern int fn_828233A8();
extern int fn_828252E8();
extern int fn_828299A8();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_4c;


void fn_8282B250(int param_1,int *param_2)

{
  int iVar1;
  int iStack_60;
  int iStack_5c;
  int aiStack_58 [2];
  int *piStack_50;
  unsigned int uStack_4c;
  char cStack_48;
  unsigned char auStack_40 [16];
  unsigned int uStack_30;
  unsigned int uStack_2c;
  int *piStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  if (*param_2 != 0) {
    piStack_50 = param_2;
    fn_828299A8(&piStack_50,param_1,&iStack_5c);
    if (cStack_48 == '\0') {
      iStack_60 = fn_828252E8(param_1,0x24);
      *(unsigned int *)(iStack_60 + 0x14) = *(unsigned int *)(iStack_5c + 0xc);
      *(unsigned int *)(iStack_60 + 0x1c) = uStack_4c;
      uStack_2c = uStack_4c;
      uStack_30 = *(unsigned int *)(iStack_5c + 0xc);
      uStack_20 = 4;
      uStack_1c = 4;
      uStack_24 = 1;
      piStack_28 = param_2;
      fn_828233A8(param_1 + 0x318,aiStack_58,0xffffffff8282b9a0,auStack_40);
      if (aiStack_58[0] != 0) {
        fn_82822E38();
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      }
      piStack_50 = (int *)*param_2;
      fn_828299A8(&piStack_50,param_1,&iStack_5c);
      *(int **)(iStack_60 + 0x10) = param_2;
      *(unsigned int *)(iStack_60 + 0x18) = *(unsigned int *)(iStack_5c + 0xc);
      *(unsigned int *)(iStack_60 + 0x20) = uStack_4c;
      iVar1 = fn_82822F60(param_1 + 0x344,iStack_60,0xffffffff8282af50,&iStack_60);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      }
    }
  }
  return;
}

