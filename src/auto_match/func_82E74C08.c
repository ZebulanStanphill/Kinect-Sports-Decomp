extern unsigned int *auStack_10;
extern int fn_82EEADB0();


unsigned __int64 fn_82E74C08(int param_1)

{
  int iVar1;
  unsigned __int64 auStack_10;
  
  auStack_10 = 0;
  if ((*(unsigned int *)(param_1 + 0x5c) != 0) &&
     (iVar1 = fn_82EEADB0(*(int *)(param_1 + 0x5c),&auStack_10), iVar1 < 0)) {
    return 0;
  }
  return auStack_10;
}

