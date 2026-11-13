extern int iRam832154c0;
extern unsigned int uRam832172b0;
extern unsigned int uRam832172b4;
extern unsigned int uRam832172b8;
extern unsigned int uRam832172bc;
extern unsigned int uRam832172c0;
extern unsigned int uRam832172c4;
extern unsigned int uRam832172c8;
extern unsigned int uRam832172cc;
extern unsigned int uRam832172d0;


void fn_829C92A0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0x110) + 0x5c);
  if (*(int *)(*(int *)(param_1 + 0x34) + 0x114) == 0) {
    uRam832172b0 = 0;
  }
  else {
    uRam832172b0 = (unsigned int)
                   (((__int64)(*(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0x114) + 0x5c) - iVar1)
                    * 1000000) / 50000000);
  }
  uRam832172b4 = (int)(((unsigned __int64)(unsigned int)(*(int *)(*(int *)(param_1 + 0x34) + 0x120) - iVar1) *
                       1000000) / 50000000);
  uRam832172bc = (int)(((unsigned __int64)(unsigned int)(iRam832154c0 - iVar1) * 1000000) / 50000000);
  uRam832172b8 = (int)(((unsigned __int64)(unsigned int)(*(int *)(*(int *)(param_1 + 0x34) + 0x124) - iVar1) *
                       1000000) / 50000000);
  uRam832172c0 = (int)(((unsigned __int64)(unsigned int)(*(int *)(param_1 + 0x38) - iVar1) * 1000000) / 50000000);
  uRam832172c4 = (int)(((unsigned __int64)(unsigned int)(*(int *)(param_1 + 0x3c) - iVar1) * 1000000) / 50000000);
  uRam832172c8 = (int)(((unsigned __int64)(unsigned int)(*(int *)(param_1 + 0x40) - iVar1) * 1000000) / 50000000);
  uRam832172cc = (int)(((unsigned __int64)(unsigned int)(*(int *)(param_1 + 0x44) - iVar1) * 1000000) / 50000000);
  if (*(int *)(param_1 + 0x48) != 0) {
    uRam832172d0 = (int)(((unsigned __int64)(unsigned int)(*(int *)(param_1 + 0x48) - iVar1) * 1000000) / 50000000)
    ;
    return;
  }
  uRam832172d0 = 0;
  return;
}

