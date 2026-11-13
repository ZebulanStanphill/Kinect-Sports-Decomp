extern int fn_82644388();
extern int iRam832823fc;
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


void fn_82644450(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iStack0000001c;
  unsigned int uStack00000024;
  
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  if ((*(int **)(param_1 + 0x54f4) != (int *)0x0) && (iRam832823fc == 0)) {
    (**(int (***)())(**(int **)(param_1 + 0x54f4) + 0x18))();
  }
  if (*(int (***)())(param_1 + 0x5c18) != (int (**)())0x0) {
    (**(int (***)())(param_1 + 0x5c18))(1,&stack0x0000001c,&stack0x00000024,0);
  }
  uVar7 = *(unsigned int *)(param_1 + 0x2acc);
  uVar1 = *(unsigned int *)(param_1 + 0x3b08);
  iVar2 = *(int *)(param_1 + 0x3b04);
  fn_82644388(param_1,uVar7,uStack00000024);
  uVar6 = 0;
  if (uStack00000024 != 0) {
    iVar5 = 0;
    do {
      iVar3 = uVar7 * 4;
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + 1 & uVar1;
      puVar4 = (unsigned int *)(iVar5 + iStack0000001c);
      iVar5 = iVar5 + 4;
      *(unsigned int *)(iVar3 + iVar2) = *puVar4;
    } while (uVar6 < uStack00000024);
  }
  *(unsigned int *)(param_1 + 0x2acc) = uVar7;
  if (*(int **)(param_1 + 0x54f4) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x54f4) + 0x1c))();
  }
  if (*(int (***)())(param_1 + 0x5c18) != (int (**)())0x0) {
    (**(int (***)())(param_1 + 0x5c18))(2,0,0,0);
  }
  return;
}

