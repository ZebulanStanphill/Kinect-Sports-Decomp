extern int fn_82AB15D0();
extern int fn_82AB5910();


void fn_82B6E9E0(int *param_1)
{
  unsigned int iVar1;
  unsigned int uVar2;
  int iVar3;
  if (param_1 == (int *)0x0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pSHashTable","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\hashtable.cpp",0x362);
  }
  iVar1 = 0;
  uVar2 = 0;
  iVar3 = 0;
  do {
    if (uVar2 >= (unsigned int)param_1[5]) {
      return;
    }
    if (((unsigned int *)*param_1)[uVar2] != 0) {
      iVar1 = fn_82AB5910(((unsigned int *)*param_1)[uVar2]);
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar1 == 0);
  return;
}
