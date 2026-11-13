extern int fn_827F2A90();
extern int fn_827F2B98();
extern int fn_827F46E8();
extern int fn_827F5C20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_827F2C38(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned char bVar1;
  float fVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  double dVar5;
  
  fVar2 = lbl_821AAD20;
  dVar5 = (double)lbl_821AAD20;
  *(float *)(param_2 + 0xf4) = lbl_821AAD20;
  *(float *)(param_2 + 0xf8) = fVar2;
  if (dVar5 < param_1) {
    uVar3 = fn_827F46E8(0xe8);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_827F5C20(dVar5,(double)lbl_82002AE0,param_1,uVar3,param_5,param_2,param_3,
                                param_2,*(unsigned int *)(param_2 + 4));
    }
    *(unsigned int *)((*(unsigned char *)(param_2 + 0x53) + 0xc) * 4 + param_2) = uVar4;
    bVar1 = *(char *)(param_2 + 0x53) + 1U & 3;
    *(unsigned char *)(param_2 + 0x53) = bVar1;
    if (bVar1 == *(unsigned char *)(param_2 + 0x54)) {
      fn_827F2A90(param_2);
      *(unsigned char *)(param_2 + 0x54) = *(char *)(param_2 + 0x54) + 1U & 3;
    }
  }
  else {
    fn_827F2B98();
  }
  *(int *)((*(unsigned char *)(param_2 + 0x53) + 8) * 4 + param_2) = (int)param_3;
  *(unsigned int *)((*(unsigned char *)(param_2 + 0x53) + 0xc) * 4 + param_2) = 0;
  *(unsigned char *)(param_2 + 0x50) = 1;
  return;
}

