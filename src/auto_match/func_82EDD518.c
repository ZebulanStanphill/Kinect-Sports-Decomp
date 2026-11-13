extern int fn_82EDBD48();
extern int fn_82EDC118();
extern int fn_82EDD388();


unsigned __int64
fn_82EDD518(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned int *param_7,unsigned __int64 param_8)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned __int64 uVar3;
  
  iVar2 = (int)param_8;
  if (((((param_4 & 0xffffffff) == 0) || (param_7 == (unsigned int *)0x0)) || (param_1 == 0)) ||
     (((param_2 & 0xffffffff) == 0 || ((param_5 & 0xffffffff) == 0)))) {
LAB_82edd5a8:
    uVar1 = 1;
  }
  else {
    if ((-1 < iVar2) && (iVar2 < 2)) {
      uVar3 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + 0x10);
      *(int *)(param_1 + 0x158) = iVar2;
      iVar2 = fn_82EDBD48(uVar3,*(unsigned int *)(param_1 + 0x28),*(unsigned int *)(param_1 + 0x2c),
                           param_8);
      if ((((iVar2 != 0) ||
           (iVar2 = fn_82EDBD48(uVar3,*(unsigned int *)(param_1 + 0x30),
                                 *(unsigned int *)(param_1 + 0x34)), iVar2 != 0)) ||
          (iVar2 = fn_82EDBD48(uVar3,*(unsigned int *)(param_1 + 0x10),
                                *(unsigned int *)(param_1 + 0x14)), iVar2 != 0)) ||
         (((iVar2 = fn_82EDBD48(uVar3,*(unsigned int *)(param_1 + 0x20),
                                 *(unsigned int *)(param_1 + 0x24)), iVar2 != 0 ||
           (iVar2 = fn_82EDBD48(uVar3,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc)),
           iVar2 != 0)) ||
          (iVar2 = fn_82EDBD48(uVar3,*(unsigned int *)(param_1 + 0x18),
                                *(unsigned int *)(param_1 + 0x1c)), iVar2 != 0)))) {
        *param_7 = 0;
        goto LAB_82edd5a8;
      }
      iVar2 = fn_82EDC118(param_1);
      if (iVar2 == 0) {
        return 0xffffffff80004005;
      }
    }
    uVar1 = fn_82EDD388(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return uVar1;
}

