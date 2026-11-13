extern int fn_82523B00();
extern int fn_8252DAB8();
extern int fn_82A81AF0();
extern int fn_82A81B88();
extern int fn_82A81C30();
extern int fn_82F691F0();
extern unsigned int lbl_821C2FA8;


int fn_82523548(int param_1,int param_2,unsigned __int64 param_3,unsigned char param_4,unsigned __int64 param_5,
                 unsigned int *param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int in_stack_00000054;
  
  puVar2 = (unsigned int *)fn_8252DAB8();
  *(unsigned char *)(puVar2 + 0x2d9) = param_4;
  uVar4 = 0;
  puVar2[0x270] = param_8;
  *puVar2 = &lbl_821C2FA8;
  if ((param_5 & 0xffffffff) == 0) {
    *(unsigned int *)(param_1 + 0x9cc) = 0;
    *(unsigned int *)(param_1 + 0x9d0) = 0;
    *(unsigned int *)(param_1 + 0x9d4) = 0;
    *(unsigned int *)(param_1 + 0x9d8) = 0;
    *(unsigned int *)(param_1 + 0x9e8) = 0;
    *(unsigned int *)(param_1 + 0x9ec) = 0;
  }
  else {
    puVar3 = (unsigned int *)param_5;
    puVar2[0x273] = *puVar3;
    puVar2[0x274] = puVar3[1];
    puVar2[0x275] = puVar3[2];
    puVar2[0x276] = puVar3[3];
    puVar2[0x27a] = puVar3[7];
    puVar2[0x27b] = puVar3[8];
  }
  if (param_6 == (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0x9f0) = 0;
    *(unsigned int *)(param_1 + 0x9f4) = 0;
    *(unsigned int *)(param_1 + 0x9f8) = 0;
    *(unsigned int *)(param_1 + 0x9fc) = 0;
    *(unsigned int *)(param_1 + 0xa0c) = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0x9f0) = *param_6;
    *(unsigned int *)(param_1 + 0x9f4) = param_6[1];
    *(unsigned int *)(param_1 + 0x9f8) = param_6[2];
    *(unsigned int *)(param_1 + 0x9fc) = param_6[3];
    *(unsigned int *)(param_1 + 0xa0c) = param_6[7];
    uVar4 = param_6[8];
  }
  *(unsigned int *)(param_1 + 0xa10) = uVar4;
  *(unsigned int *)(param_1 + 0x31980) = param_7;
  fn_82523B00(param_1);
  *(unsigned int *)(param_1 + 0x9b4) = (unsigned int)LZCOUNT(in_stack_00000054) >> 5;
  if (param_2 == 1) {
    fn_82A81AF0(param_3,param_1 + 0x1e0,param_1 + 0x1c4);
  }
  else if (param_2 == 2) {
    fn_82A81C30(param_3,param_1 + 0x1e0,param_1 + 0x1c4);
  }
  else {
    if (param_2 == 3) {
      uVar1 = 3;
    }
    else if (param_2 == 4) {
      uVar1 = 1;
    }
    else {
      if (param_2 != 5) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(param_1 + 0x1e0,0,1000);
      }
      uVar1 = 2;
    }
    fn_82A81B88(uVar1,1,param_1 + 0x1e0,param_1 + 0x1c4);
  }
  *(unsigned int *)(param_1 + 0x1c0) = 1;
  return param_1;
}

