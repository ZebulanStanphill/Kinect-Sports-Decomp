extern int fn_822315A0();
extern int fn_82A1DBD8();
extern unsigned int iStack_20;
extern unsigned int uStack_1c;


unsigned __int64 fn_8248D6E0(int param_1,unsigned int *param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iStack_20;
  unsigned int uStack_1c;
  
  iStack_20 = 0;
  iVar2 = (**(int (***)())(*(int *)*param_2 + 0x14))((int *)*param_2,&iStack_20,&uStack_1c);
  if (iVar2 == 0) {
    if (param_2[1] != 0) {
      fn_822315A0();
    }
    uVar1 = 0;
  }
  else {
    if (iStack_20 != 0) {
      fn_82A1DBD8(*(unsigned int *)(param_1 + 0xc),iStack_20,uStack_1c);
    }
    if (param_2[1] != 0) {
      fn_822315A0();
    }
    uVar1 = 1;
  }
  return uVar1;
}

