extern unsigned int *auStack_bc;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_83084210();
extern int fn_830982F0();
extern unsigned int iStack_5c;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int iStack_a8;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82187C08;
extern unsigned int lbl_8309C9D8;
extern unsigned int lbl_8326570C;
extern unsigned int uStack_60;
extern unsigned int uStack_90;
extern unsigned int uStack_94;


void fn_8309BF18(unsigned __int64 param_1,int param_2,int param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [4];
  unsigned char auStack_bc [20];
  int iStack_a8;
  int iStack_9c;
  int iStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_60;
  int iStack_5c;
  unsigned int *puStack_50;
  
  if ((param_1 & 0xffffffff) != 0) {
    fn_830982F0(auStack_c0);
    uStack_94 = *(unsigned int *)(param_2 + 0x30);
    uStack_60 = *(unsigned int *)(param_2 + 0x24);
    if ((*(char *)(param_2 + 0x20) == '\0') || (param_3 == 0)) {
      iStack_5c = 0;
    }
    else {
      iStack_5c = param_3 + 0x10;
    }
    if (*(char *)(param_2 + 0x3c) == '\0') {
      puStack_50 = (unsigned int *)0x0;
    }
    else if (param_4 == (unsigned int *)0x0) {
      puStack_50 = (unsigned int *)0x0;
      lbl_8326570C = &lbl_8309C9D8;
    }
    else {
      uVar1 = *(unsigned int *)(param_2 + 0x34);
      uVar2 = *(unsigned int *)(param_2 + 0x30);
      param_4[5] = 0;
      param_4[6] = 0;
      param_4[1] = lbl_82002AE0;
      *param_4 = &lbl_82187C08;
      param_4[2] = uVar2;
      param_4[3] = uVar2;
      param_4[4] = uVar1;
      lbl_8326570C = &lbl_8309C9D8;
      puStack_50 = param_4;
    }
    iStack_a8 = param_3;
    iStack_9c = param_2;
    iStack_98 = param_2;
    uStack_90 = uStack_94;
    fn_83084210(auStack_d0,param_1,param_2,param_2 + 0x10,auStack_bc);
  }
  return;
}

