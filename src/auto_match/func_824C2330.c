extern int fn_825200A8();


unsigned __int64 fn_824C2330(__int64 param_1,__int64 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = fn_825200A8(param_1 + 0x40c,param_2 + 0x40c);
  if (iVar2 != 0) {
    iVar2 = (int)param_1;
    iVar1 = (int)param_2;
    if ((((*(int *)(iVar2 + 0x410) == *(int *)(iVar1 + 0x410)) &&
         (*(int *)(iVar2 + 0x414) == *(int *)(iVar1 + 0x414))) &&
        (*(int *)(iVar2 + 0x418) == *(int *)(iVar1 + 0x418))) &&
       ((iVar2 = fn_825200A8(param_1 + 0x420,param_2 + 0x420), iVar2 != 0 &&
        (iVar2 = fn_825200A8(param_1 + 0x424,param_2 + 0x424), iVar2 != 0)))) {
      return 0;
    }
  }
  return 1;
}

