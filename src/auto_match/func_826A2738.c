extern unsigned int *auStack_40;
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268BB68();
extern int fn_826A1E40();
extern int fn_826A25C0();


__int64 fn_826A2738(int param_1,int param_2)

{
  unsigned int uVar1;
  char cVar3;
  __int64 lVar2;
  unsigned char auStack_40 [32];
  
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  cVar3 = fn_826A25C0(param_1 + -0x10);
  if (cVar3 == '\0') {
    fn_8268AFB0(auStack_40,*(unsigned int *)(*(int *)(param_2 + 0x78) + 0x288));
    fn_826A1E40(param_1 + -0x10,param_2,auStack_40,0xffffffff82196fac);
    fn_8268BB68(param_1 + 0x30,auStack_40);
    uVar1 = *(unsigned int *)(param_1 + 0x30);
    fn_8268AFD8(auStack_40);
    lVar2 = ((unsigned __int64)uVar1 & 0xfffffffc) + 8;
  }
  else {
    lVar2 = -0x7de69a7e;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
  return lVar2;
}

