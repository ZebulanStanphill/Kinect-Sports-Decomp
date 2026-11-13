#define true 1
extern int fn_82CE5410();
extern int fn_82D80C58();
extern int fn_82D80C90();
extern int fn_82D82CA8();
extern int fn_82D839C0();
extern int fn_82D92868();
extern int fn_82DAFFF8();
extern unsigned int iStack_38;


void fn_82DAF270(int param_1)

{
  unsigned char bVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  char cVar6;
  int *piVar5;
  int iVar7;
  int aiStack_40 [2];
  int iStack_38;
  
  fn_82D80C58();
  uVar2 = *(unsigned int *)(param_1 + 0xb4);
  fn_82D82CA8(param_1,aiStack_40);
  iVar4 = fn_82CE5410();
  cVar6 = (**(int (***)())(**(int **)(iVar4 + 0x18) + 0x20))(*(int **)(iVar4 + 0x18),aiStack_40[0]);
  do {
    if (cVar6 != '\0') {
      *(unsigned int *)(param_1 + 0xb4) = uVar2;
      fn_82D80C90(param_1);
      return;
    }
    bVar1 = *(unsigned char *)(iStack_38 + 0x25);
    iVar4 = iStack_38;
    while (iVar3 = aiStack_40[0], bVar1 = bVar1 >> 4 & 3, iVar7 = iVar4, bVar1 != 0) {
      while (bVar1 != 0) {
        fn_82D92868(param_1,iVar4);
        fn_82D82CA8(param_1,aiStack_40);
        iVar7 = iStack_38;
        if ((iStack_38 != iVar4) || (aiStack_40[0] != iVar3)) break;
        *(unsigned int *)(param_1 + 0xb4) = *(unsigned int *)(param_1 + 0xb4) >> 1;
        bVar1 = *(unsigned char *)(iStack_38 + 0x25) & 0x30;
      }
      iVar4 = iVar7;
      bVar1 = *(unsigned char *)(iVar7 + 0x25);
    }
    iVar4 = fn_82CE5410();
    cVar6 = (**(int (***)())(**(int **)(iVar4 + 0x18) + 0x20))(*(int **)(iVar4 + 0x18),aiStack_40[0]);
    iVar4 = iStack_38;
    if (cVar6 == '\0') {
      cVar6 = fn_82DAFFF8();
      if (cVar6 == '\0') {
        *(unsigned char *)(iVar4 + 0x25) = *(unsigned char *)(iVar4 + 0x25) & 0xcf | 0x10;
      }
      else {
        piVar5 = (int *)fn_82D839C0(param_1);
        (**(int (***)())(*piVar5 + 0x14))(piVar5,iVar4,0);
        fn_82D82CA8(param_1,aiStack_40);
      }
    }
    iVar4 = fn_82CE5410();
    cVar6 = (**(int (***)())(**(int **)(iVar4 + 0x18) + 0x20))(*(int **)(iVar4 + 0x18),aiStack_40[0]);
  } while( true );
}

