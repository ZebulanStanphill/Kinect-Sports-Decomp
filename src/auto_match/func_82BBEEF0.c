extern unsigned int lbl_8202706C;


unsigned __int64 fn_82BBEEF0(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  float fVar2;
  float *pfVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  fVar2 = lbl_8202706C;
  pfVar3 = (float *)(param_1 + -4);
  uVar4 = ((unsigned __int64)*param_2 & 0xffff) << 0x10 | (unsigned __int64)(*param_2 >> 0x10);
  lVar5 = 8;
  do {
    uVar1 = uVar4 & 0xf;
    uVar4 = uVar4 >> 4;
    pfVar3 = pfVar3 + 4;
    *pfVar3 = (float)uVar1 * fVar2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  pfVar3 = (float *)(param_1 + 0x7c);
  uVar4 = ((unsigned __int64)param_2[1] & 0xffff) << 0x10 | (unsigned __int64)(param_2[1] >> 0x10);
  lVar5 = 8;
  do {
    uVar1 = uVar4 & 0xf;
    uVar4 = uVar4 >> 4;
    pfVar3 = pfVar3 + 4;
    *pfVar3 = (float)uVar1 * fVar2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return 0;
}

