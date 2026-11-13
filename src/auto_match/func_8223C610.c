extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


unsigned __int64 fn_8223C610(unsigned __int64 param_1,unsigned __int64 param_2,unsigned char *param_3)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  lVar1 = fn_828E9DA8();
  lVar2 = fn_828E9D90(param_1);
  uVar4 = ((param_2 & 0xffffffff) >> 0x1f) + (__int64)((int)(lVar1 - lVar2) >> 0x1f) +
          (unsigned __int64)(param_2 <= (unsigned __int64)(lVar1 - lVar2));
  if (param_3 != (unsigned char *)0x0) {
    *param_3 = (char)uVar4;
  }
  if ((uVar4 & 0xff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_828E9FF8(param_1,param_2);
  }
  return uVar3;
}

