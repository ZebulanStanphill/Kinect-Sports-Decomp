#define true 1
extern unsigned int *auStack_40;
extern int fn_82517978();
extern int fn_825200A8();
extern int fn_8256C5D0();
extern int fn_8256D710();
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_8256CE20(__int64 param_1,int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned char auStack_40 [8];
  struct { unsigned int first; unsigned int second; } stack_pair_38;

  
  lVar3 = param_1 + 0x68;
  iVar1 = fn_825200A8(lVar3);
  if (iVar1 == 0) {
    iVar1 = (int)param_1;
    puVar2 = *(unsigned int **)(iVar1 + 0x48);
    while( true ) {
      if (puVar2 == *(unsigned int **)(iVar1 + 0x4c)) break;
      if (puVar2[2] == *param_2) {
        stack_pair_38.first = 0;
        stack_pair_38.second = 0;
        fn_82517978(&stack_pair_38.first,*puVar2,puVar2[1],0);
        fn_8256C5D0(param_1,&stack_pair_38.first);
        puVar2 = (unsigned int *)fn_8256D710(auStack_40,param_1 + 0x48,puVar2);
        puVar2 = (unsigned int *)*puVar2;
      }
      else {
        puVar2 = puVar2 + 3;
      }
    }
    puVar2 = *(unsigned int **)(iVar1 + 0x58);
    while (puVar2 != *(unsigned int **)(iVar1 + 0x5c)) {
      if (puVar2[2] == *param_2) {
        stack_pair_38.first = 0;
        stack_pair_38.second = 0;
        fn_82517978(&stack_pair_38.first,*puVar2,puVar2[1],0);
        fn_8256C5D0(param_1,&stack_pair_38.first);
        puVar2 = (unsigned int *)fn_8256D710(auStack_40,param_1 + 0x58,puVar2);
        puVar2 = (unsigned int *)*puVar2;
      }
      else {
        puVar2 = puVar2 + 3;
      }
    }
  }
  else {
    *(unsigned int *)lVar3 = 0;
  }
  return;
}

