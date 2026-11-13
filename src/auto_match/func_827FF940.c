extern int fn_827FF0D0();
extern unsigned int iStack_1c;


void fn_827FF940(int *param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iStack_1c;
  
  iVar1 = *(int *)(*param_1 + 0x30);
  uVar2 = fn_827FF0D0();
  iStack_1c = (int)(__int64)((float)uVar2 * *(float *)(iVar1 + 0x28) * (float)(param_2 & 0xffff));
  *param_3 = iStack_1c * 4 + *(int *)(iVar1 + 0x24);
  return;
}

