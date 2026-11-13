extern unsigned int lbl_82079AE8;
extern unsigned int lbl_82079AEC;


unsigned __int64 fn_829ECDB8(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  if (param_2 < 0) {
    if (-param_2 < 0x90000) {
      iVar1 = (param_2 * -0x100) / 9;
      iVar2 = (iVar1 >> 0x10) * 4;
      uVar3 = iVar1 >> 8 & 0xff;
      uVar4 = 0x10000 - (__int64)
                        ((int)(*(int *)(&lbl_82079AE8 + iVar2) * (0x100 - uVar3) +
                              *(int *)(&lbl_82079AEC + iVar2) * uVar3) >> 8);
    }
    else {
      uVar4 = 0;
    }
    return ((uVar4 & 0xffff) << 0x10) / (0x10000 - uVar4 & 0xffffffff);
  }
  return 0x10000;
}

