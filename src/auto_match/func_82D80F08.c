extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82D7C120();
extern int fn_82DA6530();
extern int fn_83088518();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_82D80F08(int param_1,__int64 param_2,__int64 param_3)

{
  char cVar3;
  char *pcVar1;
  int iVar2;
  __int64 lVar4;
  unsigned char auStack_50 [8];
  struct { unsigned int first; unsigned int second; } stack_pair_48;

  unsigned char auStack_40 [4];
  unsigned int uStack_3c;
  unsigned int uStack_38;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    cVar3 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x4c))
                      (*(int **)(param_1 + 0x58),param_2 + 0x24,param_3 + 0x24);
    if (cVar3 != '\0') {
      pcVar1 = (char *)(**(int (***)())(*(int *)(*(int *)(param_1 + 0x7c) + 8) + 4))
                                 (auStack_50,*(int *)(param_1 + 0x7c) + 8,param_2 + 0x10,
                                  param_3 + 0x10);
      if ((*pcVar1 != '\0') && (iVar2 = fn_82D7C120(param_2 + 0x10,param_3 + 0x10), iVar2 == 0)) {
        stack_pair_48.first = (unsigned int)(param_2 + 0x24);
        stack_pair_48.second = (unsigned int)(param_3 + 0x24);
        lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x7c) + 8;
        if ((unsigned __int64)*(unsigned int *)(param_1 + 0x7c) == 0) {
          lVar4 = 0;
        }
        fn_83088518(*(unsigned int *)(param_1 + 100),&stack_pair_48.first,1,lVar4);
      }
    }
  }
  else {
    uStack_3c = (unsigned int)param_2;
    uStack_38 = (unsigned int)param_3;
    auStack_40[0] = 0x13;
    fn_82DA6530(*(unsigned int *)(param_1 + 0x88),auStack_40);
  }
  return;
}

