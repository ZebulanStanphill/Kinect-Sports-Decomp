typedef unsigned char bool;
extern int fn_8302E258();
extern int fn_8302E258();
extern int fn_83032B40();
extern int fn_83032D88();
extern unsigned int iStack_20;
extern unsigned int uStack_1c;
extern unsigned int uStack_23;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_8302E888(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int *puStack_28;
  unsigned char uStack_24;
  unsigned char uStack_23;
  int iStack_20;
  unsigned int uStack_1c;

  *(unsigned char *)(param_1 + 0x122) = 1;
  if ((*(unsigned char *)(param_1 + 0x11f) & 2) == 0) {
    uVar3 = fn_8302E258(param_1,param_2);
  }
  else if (*param_2 == 0) {
    puStack_28 = &uStack_40;
    param_2[1] = param_1;
    *param_2 = 1;
    uStack_40 = 0;
    uStack_3c = 0;
    stack_pair_30.first = 0;
    stack_pair_30.second = 0;
    uStack_24 = 0;
    uStack_23 = 0;
    iStack_20 = 0;
    uStack_1c = 0;
    iVar4 = fn_83032B40();
    iVar2 = iStack_20;
    bVar1 = iStack_20 != 0;
    iStack_20 = iVar4;
    if (bVar1) {
      fn_83032D88(iVar2);
    }
    if (iStack_20 == 0) {
      uVar3 = 2;
    }
    else {
      param_2[0x1e] = (int)&stack_pair_30.first;
      uVar3 = fn_8302E258(param_1,param_2);
      if (iStack_20 != 0) {
        fn_83032D88(iStack_20);
      }
    }
  }
  else {
    uVar3 = fn_8302E258(param_1,param_2);
  }
  return uVar3;
}
