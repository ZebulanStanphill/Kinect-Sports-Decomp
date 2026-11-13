extern unsigned int *auStack_30;
extern int fn_826A5E90();
extern int fn_826A5F00();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_826A6098(int param_1)

{
  unsigned __int64 uVar1;
  unsigned int uStack_40;
  int iStack_3c;
  unsigned char auStack_30 [32];
  
  iStack_3c = *(int *)(param_1 + 0x38);
  if (iStack_3c == 0) {
    uVar1 = 1;
  }
  else {
    uStack_40 = *(unsigned int *)(param_1 + 0x34);
    uVar1 = fn_826A5E90(auStack_30);
    uVar1 = fn_826A5F00(&uStack_40,uVar1);
  }
  return uVar1;
}

