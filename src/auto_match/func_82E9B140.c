extern unsigned int *auStack_c;
extern int fn_82E9B0D0();
extern unsigned int lbl_831AFCA0;
extern unsigned int uStack_10;


__int64 fn_82E9B140(int param_1,__int64 param_2,__int64 param_3,int param_4,unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uStack_10;
  unsigned int auStack_c;
  
  if ((((int)param_2 == 0) && ((int)param_3 == 0)) && (param_4 == 0)) {
    return param_2;
  }
  if ((int)param_5 == 0) {
    iVar2 = 0x9e;
  }
  else {
    param_2 = (__int64)((int)param_2 >> 1);
    iVar2 = 0x5e;
    param_3 = (__int64)((int)param_3 >> 1);
  }
  if ((int)param_2 <= iVar2) {
    if (((-iVar2 <= (int)param_2) && ((int)param_3 <= iVar2)) && (-iVar2 <= (int)param_3)) {
      fn_82E9B0D0(param_2,&auStack_c);
      fn_82E9B0D0(param_3,&uStack_10);
      uVar1 = (((unsigned __int64)uStack_10 + ((unsigned __int64)uStack_10 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
              (unsigned __int64)auStack_c) - 1;
      goto LAB_82e9b1f4;
    }
  }
  uVar1 = 0x22;
LAB_82e9b1f4:
  if (param_4 != 0) {
    uVar1 = uVar1 + 0x25;
  }
  iVar2 = (int)uVar1;
  if ((iVar2 != 0x22) && (iVar2 != 0x47)) {
    return (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x5154) + (int)((uVar1 & 0xffffffff) << 3) + 4) +
           (unsigned __int64)(unsigned char)(&lbl_831AFCA0)[(int)param_5 * 0x49 + iVar2];
  }
  return (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x5154) + (int)((uVar1 & 0xffffffff) << 3) + 4) +
         (unsigned __int64)*(unsigned int *)(param_1 + 0xa28) + (unsigned __int64)*(unsigned int *)(param_1 + 0xa24) +
         (param_5 & 0x7fffffff) * -2;
}

