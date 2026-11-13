extern int fn_825200A8();
extern float lbl_82195644;
extern unsigned int uStack_c;


__int64 fn_825C4F40(__int64 param_1,__int64 param_2)

{
  int iVar1;
  int iVar3;
  __int64 lVar2;
  unsigned int uVar4;
  unsigned int uStack_c;
  
  iVar3 = fn_825200A8(param_2 + 8,param_1 + 0x14);
  if ((((((iVar3 == 0) || (iVar3 = fn_825200A8(param_2 + 0xc,param_1 + 0x18), iVar3 == 0)) ||
        (iVar3 = (int)param_1, iVar1 = (int)param_2,
        *(int *)(iVar3 + 0x30) != *(int *)(iVar1 + 0x38))) ||
       ((*(float *)(iVar3 + 0x34) != *(float *)(iVar1 + 0x3c) ||
        (*(float *)(iVar3 + 0x94) != *(float *)(iVar1 + 0x50))))) ||
      ((*(float *)(iVar3 + 100) != *(float *)(iVar1 + 0x58) ||
       ((*(float *)(iVar3 + 0x70) != *(float *)(iVar1 + 0x5c) ||
        (uStack_c = (int)(__int64)(*(float *)(iVar3 + 0x58) * lbl_82195644),
        uStack_c != *(int *)(iVar1 + 0x6c))))))) ||
     ((*(float *)(iVar3 + 0x84) != *(float *)(iVar1 + 0x70) ||
      (*(int *)(iVar3 + 0xf8) != *(int *)(iVar1 + 0x80))))) {
    lVar2 = 0;
  }
  else {
    uVar4 = *(unsigned int *)(iVar3 + 8);
    if (2000 < uVar4) {
      uVar4 = 2000;
    }
    lVar2 = -((unsigned __int64)(*(unsigned int *)(iVar1 + 0x18) < uVar4) - 1);
  }
  return lVar2;
}

