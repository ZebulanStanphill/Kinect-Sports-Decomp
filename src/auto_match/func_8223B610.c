extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828EA180();


void fn_8223B610(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned char *param_4)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  
  lVar1 = fn_828E9DA8();
  lVar2 = fn_828E9D90(param_1);
  uVar3 = ((param_3 & 0xffffffff) >> 0x1c & 1) + (__int64)((int)(lVar1 - lVar2) >> 0x1f) +
          (unsigned __int64)((param_3 & 0x1fffffff) << 3 <= (unsigned __int64)(lVar1 - lVar2));
  if (param_4 != (unsigned char *)0x0) {
    *param_4 = (char)uVar3;
  }
  if ((uVar3 & 0xff) != 0) {
    fn_828EA180(param_1,param_2,param_3);
  }
  return;
}

