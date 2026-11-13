extern unsigned int *auStack_40;
extern int fn_82E3BDF8();
extern int fn_82E3C690();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern unsigned int uStack_44;
extern unsigned int uStack_48;


unsigned __int64 fn_82E3C990(int param_1,int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int * apiStack_50;
  struct { unsigned int first; unsigned int second; } stack_pair_48;

  unsigned char auStack_40 [16];
  
  fn_82E50CB8(param_1 + 8);
  if (param_2 == (int *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar2 = 0;
    if ((*(unsigned int *)(param_1 + 0x44) & 1) == 0) {
      *param_2 = 1;
    }
    else {
      *param_2 = 0;
      apiStack_50 = (int *)0x0;
      stack_pair_48.first = 0;
      stack_pair_48.second = 0;
      fn_82E3BDF8(param_1 + 0x1ac,&stack_pair_48.first);
      while (iVar1 = fn_82E3C690(param_1 + 0x1ac,&stack_pair_48.first,auStack_40,&apiStack_50), iVar1 != 0) {
        *param_2 = *param_2 + 1;
        iVar1 = (**(int (***)())(*apiStack_50 + 0x20))();
        if (iVar1 != 0) {
          *param_2 = *param_2 + 1;
        }
      }
    }
  }
  fn_82E50F10(param_1 + 8);
  return uVar2;
}

