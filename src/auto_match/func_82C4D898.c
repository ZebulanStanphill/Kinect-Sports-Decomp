extern int fn_82C44AC0();
extern int fn_82C44B20();
extern int fn_82C46C48();
extern int fn_82C4D410();


unsigned __int64 fn_82C4D898(__int64 *param_1,unsigned short *param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  if ((param_1 != (__int64 *)0x0) && (*param_1 == 0x1996011419991223)) {
    iVar1 = *(int *)(param_1 + 0x5c);
    if (*(int *)(iVar1 + 0x10) != 0) {
      return 0xfffffffffffffffc;
    }
    fn_82C44AC0(iVar1);
    if (((int)param_3 == -1) || ((int)param_3 == 0)) {
      param_3 = param_3 & 0xff0 | 0xf;
    }
    *(int *)(iVar1 + 0x3d04) = (int)param_3;
    if ((*(int *)(iVar1 + 0x3c04) == 0) && (*(int *)(iVar1 + 0x3c48) == 0)) {
      uVar2 = fn_82C4D410(param_1,param_2,param_3);
    }
    else {
      uVar2 = fn_82C46C48(param_1,0,0,*(unsigned int *)(iVar1 + 0x3c0c),
                                *(unsigned int *)(iVar1 + 0x3c10),param_3,0);
      *param_2 = 1;
    }
    if ((int)uVar2 == -9) {
      *(unsigned int *)(iVar1 + 0xe94) = 1;
    }
    if (*(int *)(iVar1 + 0xe98) != 0) {
      *(unsigned int *)(iVar1 + 0xe94) = 1;
      *(unsigned int *)(iVar1 + 0xe98) = 0;
    }
    fn_82C44B20(iVar1);
    return uVar2;
  }
  return 0xfffffffffffffffd;
}

