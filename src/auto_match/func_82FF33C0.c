extern int fn_82FF0E18();
extern unsigned int lbl_83264574;


extern char lbl_83264580[];
unsigned __int64 fn_82FF33C0(unsigned int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned int param_5)

{
  unsigned int iVar1;
  
  RtlEnterCriticalSection(lbl_83264580);
  for (iVar1 = lbl_83264574; iVar1 != 0; iVar1 = *(unsigned int *)(iVar1 + 0x10)) {
    if (((*(unsigned int *)(iVar1 + 0x68) == param_1) &&
        ((param_2 == 0 || (*(unsigned int *)(iVar1 + 0x70) == param_2)))) &&
       ((param_5 == 0 || (*(unsigned int *)(iVar1 + 0x50) == param_5)))) {
      fn_82FF0E18(iVar1,param_3,param_4);
    }
  }
  RtlLeaveCriticalSection(lbl_83264580);
  return 1;
}

