extern unsigned int *auStack_400;
extern unsigned int *auStack_40c;
extern int fn_8228ABB8();
extern int fn_8228ACD0();
extern int fn_82486098();
extern int fn_82520780();
extern unsigned int lbl_8218E8E8;
extern unsigned int uStack_410;


void fn_8228A5F0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_410;

  unsigned char auStack_400 [1000];
  
  if (*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8) == 1) {
    if (*(int *)(param_1 + 0x6e8) == 4) {
      if (*(int *)(param_1 + 0x768) != 4) {
        *(unsigned int *)(param_1 + 0x768) = 4;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x728);
      if (iVar1 != *(int *)(param_1 + 0x768)) {
        if (iVar1 == 2) {
          stack_pair_410.first = *(unsigned int *)(*(int *)(param_1 + 0x740) + 0x8c4);
          stack_pair_410.second = *(unsigned int *)(*(int *)(param_1 + 0x740) + 0x8c8);
          uVar3 = fn_82520780((double)lbl_8218E8E8,0xffffffff83265a28);
          iVar1 = *(int *)(param_1 + 0x11f0);
          uVar2 = *(unsigned int *)(param_1 + 0x744);
          *(unsigned int *)(iVar1 + 0x1498) = 2;
          *(unsigned int *)(iVar1 + 0x14a0) = uVar2;
          fn_82486098(iVar1,3,uVar3,auStack_400);
          fn_8228ABB8(param_1,3,auStack_400,&stack_pair_410.first,&stack_pair_410.second);
          *(unsigned int *)(param_1 + 0x768) = 2;
          *(unsigned int *)(param_1 + 0x778) = 0;
          *(unsigned int *)(param_1 + 0x77c) = 1;
          *(unsigned int *)(param_1 + 0x784) = *(unsigned int *)(param_1 + 0x744);
        }
        else if (iVar1 == 3) {
          fn_8228ACD0(param_1,3,param_1 + 0x520);
          *(unsigned __int64 *)(param_1 + 0x770) = 0;
          *(unsigned int *)(param_1 + 0x768) = 3;
          *(unsigned int *)(param_1 + 0x778) = 0;
          *(unsigned int *)(param_1 + 0x77c) = 1;
        }
      }
    }
  }
  return;
}

