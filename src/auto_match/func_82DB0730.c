extern int fn_82CE5410();
extern int fn_83089E78();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int uStack_38;


void fn_82DB0730(__int64 param_1,int *param_2)

{
  int (**pcVar1)();
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  struct { int first; int second; } stack_pair_40;

  unsigned int uStack_38;
  
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  uStack_38 = 0x80000000;
  fn_83089E78(param_1 + 0x10,&stack_pair_40.first);
  iVar6 = 0;
  if (0 < stack_pair_40.second) {
    iVar9 = 0;
    do {
      pcVar5 = *(char **)(iVar9 + stack_pair_40.first);
      pcVar1 = *(int (***)())((unsigned int)(unsigned char)pcVar5[1] * 0x50 + *param_2 + 0x16c8);
      if (pcVar1 != (int (**)())0x0) {
        iVar2 = *(int *)(pcVar5 + 0x10);
        iVar3 = *(int *)(pcVar5 + 0x14);
        iVar8 = *(char *)(iVar2 + 0x10) + iVar2;
        if (*(char *)(iVar8 + 0xe8) == '\x05') {
          uVar4 = *(unsigned int *)(*(char *)(iVar3 + 0x10) + iVar3 + 0xcc);
        }
        else {
          uVar4 = *(unsigned int *)(iVar8 + 0xcc);
        }
        pcVar7 = pcVar5 + 0x30;
        if (*pcVar5 != '\x04') {
          pcVar7 = pcVar5 + 0x20;
        }
        (*pcVar1)(pcVar5,pcVar7,iVar2,iVar3,param_2,*(unsigned int *)(pcVar5 + 8),uVar4);
      }
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + 8;
    } while (iVar6 < stack_pair_40.second);
  }
  iVar6 = fn_82CE5410();
  stack_pair_40.second = 0;
  if ((uStack_38 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar6 + 0x10) + 0x10))
              (*(int **)(iVar6 + 0x10),stack_pair_40.first,uStack_38 & 0x3fffffff,8);
  }
  return;
}

