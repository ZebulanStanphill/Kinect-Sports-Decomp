extern int fn_828182C0();
extern int fn_82851858();
extern unsigned int iStack_1c;
extern unsigned int uStack_20;


unsigned __int64 fn_82850780(int param_1,int param_2,unsigned __int64 param_3,unsigned int param_4)

{
  int iVar1;
  unsigned int uStack_20;
  int iStack_1c;
  
  if ((*(unsigned int *)(param_1 + 0x144) != 0) &&
     (iVar1 = fn_828182C0(*(int *)(param_1 + 0x144),param_3,0,&uStack_20), iVar1 != 0)) {
    fn_82851858(uStack_20,&iStack_1c);
    *(unsigned int *)(iStack_1c + param_2) = param_4;
    return 1;
  }
  return 0;
}

