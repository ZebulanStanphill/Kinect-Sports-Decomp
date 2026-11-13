extern unsigned int *auStack_30;
extern int fn_82FA4F18();
extern int fn_82FA4F60();
extern int fn_82FA5060();
extern int fn_82FA52E8();
extern int fn_82FA5538();
extern int fn_82FF86F0();


unsigned __int64 fn_82FF9548(__int64 param_1,unsigned __int64 param_2,int param_3)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int auStack_30;
  
  if ((param_2 & 0xffffffff) == 0) {
    return 1;
  }
  if (*(int *)(param_3 + 0x18) == -1) {
    iVar3 = fn_82FA5538(0,param_2,param_2,0xb,0x800);
    *(int *)(param_3 + 0x18) = iVar3;
    if (iVar3 == -1) {
      return 2;
    }
    *(unsigned char *)(param_3 + 0x1c) = 1;
  }
  uVar1 = fn_82FA4F60();
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  uVar2 = fn_82FA4F18(*(unsigned int *)(param_3 + 0x18));
  if ((uVar2 & 8) == 0) {
    iVar3 = fn_82FA5060(*(unsigned int *)(param_3 + 0x18),param_2);
  }
  else {
    iVar3 = fn_82FA52E8();
  }
  *(int *)(param_3 + 0x10) = iVar3;
  if (iVar3 == 0) {
    return 2;
  }
  *(int *)(param_3 + 0x14) = (int)param_2;
  auStack_30 = 0;
  uVar1 = fn_82FF86F0(param_1 + 4,iVar3,param_2,&auStack_30);
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  if ((unsigned __int64)auStack_30 != (param_2 & 0xffffffff)) {
    return 7;
  }
  return uVar1;
}

