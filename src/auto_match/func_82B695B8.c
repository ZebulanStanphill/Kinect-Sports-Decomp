extern unsigned int fn_82AB71F0(void *a, int b, int c);
extern void fn_82AA0840(void *a, int b, int c, int d);

void fn_82B695B8(void *param_1, int param_2)
{
  unsigned int iVar2;
  unsigned int iVar1;

  iVar1 = fn_82AB71F0(param_1,0x47,param_2);
  iVar2 = fn_82AB71F0(param_1,0x1c,param_2);
  if (iVar1 == 0x17) {
    if (iVar2 != 1) fn_82AA0840(param_1,0x1c,param_2,1);
  }
  else if (iVar1 == 0x18) {
    if (iVar2 != 2) fn_82AA0840(param_1,0x1c,param_2,2);
  }
  else if (iVar1 == 0x16) {
    if (iVar2 != 3) fn_82AA0840(param_1,0x1c,param_2,3);
  }
  else {
    if (iVar2 != 0) fn_82AA0840(param_1,0x1c,param_2,0);
  }
}
