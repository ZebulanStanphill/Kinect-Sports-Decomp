extern int fn_8267ADA8();
extern int fn_8267B890();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826DA948();
extern int fn_82726348();
extern int fn_82729380();
extern int fn_82729478();
extern int fn_827770E8();
extern unsigned int lbl_82002AE8;
extern unsigned int lbl_82002B80;
extern unsigned int lbl_82002B8C;
extern unsigned int lbl_82005700;
extern unsigned int lbl_82005928;
extern unsigned int lbl_8200D5B4;
extern unsigned int lbl_8200D5BC;
extern unsigned int lbl_8200D5D0;
extern unsigned int lbl_8200D624;
extern unsigned int lbl_831E7E64;


unsigned int * fn_826E66E8(unsigned int *param_1,int param_2,unsigned char param_3)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar2;
  
  param_1[1] = 1;
  param_1[2] = &lbl_82005928;
  param_1[4] = &lbl_82005700;
  param_1[2] = &lbl_8200D5BC;
  *param_1 = &lbl_8200D5D0;
  param_1[4] = &lbl_8200D5B4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_1 + 7;
  param_1[8] = param_1 + 7;
  fn_8267ADA8(param_1 + 9,0);
  *(unsigned char *)(param_1 + 0x10) = param_3;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 8);
    if (iVar3 != 0) {
      fn_8267C4C8(iVar3);
    }
    if (param_1[6] != 0) {
      fn_8267C4F0();
    }
    param_1[6] = iVar3;
  }
  uVar1 = fn_8267B890(lbl_831E7E64,0x38,0);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_826DA948(uVar1,0);
  }
  if (param_1[5] != 0) {
    fn_8267C4F0();
  }
  param_1[5] = iVar3;
  if (iVar3 != 0) {
    puVar4 = (unsigned int *)fn_8267B890(lbl_831E7E64,0x10,0);
    if (puVar4 == (unsigned int *)0x0) {
      puVar4 = (unsigned int *)0x0;
    }
    else {
      puVar4[1] = 1;
      puVar4[2] = 4;
      puVar4[3] = &lbl_82002AE8;
      *puVar4 = &lbl_82002B8C;
      puVar4[3] = &lbl_82002B80;
    }
    (**(int (***)())(*(int *)(param_1[5] + 8) + 8))(param_1[5] + 8,4,puVar4);
    if (puVar4 != (unsigned int *)0x0) {
      fn_8267C4F0(puVar4);
    }
    puVar4 = (unsigned int *)fn_8267B890(lbl_831E7E64,0x10,0);
    if (puVar4 == (unsigned int *)0x0) {
      puVar4 = (unsigned int *)0x0;
    }
    else {
      puVar4[1] = 1;
      *(unsigned char *)(puVar4 + 3) = 0;
      puVar4[2] = 0xc;
      *puVar4 = &lbl_8200D624;
    }
    (**(int (***)())(*(int *)(param_1[5] + 8) + 8))(param_1[5] + 8,0xc,puVar4);
    if (puVar4 != (unsigned int *)0x0) {
      fn_8267C4F0(puVar4);
    }
    (**(int (***)())(*(int *)(param_1[5] + 8) + 8))(param_1[5] + 8,0x11,0);
    uVar1 = fn_8267B890(lbl_831E7E64,0x48,0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_827770E8(uVar1,1,*(unsigned char *)(param_1 + 0x10));
    }
    (**(int (***)())(*(int *)(param_1[5] + 8) + 8))(param_1[5] + 8,0x12,uVar1);
    if ((uVar1 & 0xffffffff) != 0) {
      fn_8267C4F0(uVar1);
    }
    iVar3 = fn_8267B890(lbl_831E7E64,0x20,0);
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_82726348();
    }
    (**(int (***)())(*(int *)(param_1[5] + 8) + 8))(param_1[5] + 8,0x18,uVar1);
    if ((uVar1 & 0xffffffff) != 0) {
      fn_8267C4F0(uVar1);
    }
    iVar3 = fn_8267B890(lbl_831E7E64,0x18,0);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_82729380();
    }
    uVar1 = fn_82729478(uVar2);
    (**(int (***)())(*(int *)(param_1[5] + 8) + 8))(param_1[5] + 8,0x19,uVar1);
    if ((uVar1 & 0xffffffff) != 0) {
      fn_8267C4F0(uVar1);
    }
  }
  return param_1;
}

