extern int fn_82A1F2F8();
extern int fn_82BDBB60();
extern int fn_82BDBFE0();
extern int fn_82BDC130(param_1);


int fn_82BDC780(int param_1)

{
  unsigned int uVar1;
  unsigned lVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  uVar4 = *(unsigned int *)(param_1 + 0xc);
  fn_82BDC130(param_1);
  fn_82BDBB60(param_1);
  while ((uVar4) != 0) {
    uVar4 = uVar4 - 1;
    uVar3 = (*(unsigned int *)(param_1 + 0xc) - uVar4) - 1;
    if (uVar3 >= *(unsigned int *)(param_1 + 0xc)) lVar2 = 0;
    else lVar2 = *(unsigned int *)(param_1 + 0x60) + uVar3 * 8;
    fn_82BDBFE0(param_1,lVar2);
  }
  *(unsigned char *)(param_1 + 0x8c) = 0;
  *(unsigned int *)(param_1 + 0x90) = 0;
  *(unsigned int *)(param_1 + 0x94) = 600;
  *(unsigned int *)(param_1 + 0x98) = 0;
  *(unsigned int *)(param_1 + 0x9c) = 0;
  uVar1 = fn_82A1F2F8();
  *(unsigned int *)(param_1 + 0x10) = uVar1;
  return 0;
}

