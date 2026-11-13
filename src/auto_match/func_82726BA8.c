typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_8267C488();
extern int fn_826957D0();
extern int fn_82696958();
extern int fn_826FDF58();
extern int fn_8278B290();
extern int fn_8278C528();
extern int fn_8278D3F0();
extern int fn_82794C90();
extern int fn_82794D68();
extern unsigned int lbl_82010C6C;


void fn_82726BA8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  bool bVar3;
  int iVar5;
  unsigned __int64 uVar4;
  int iVar6;
  int iVar7;
  unsigned char **appuStack_80 [8];
  unsigned char auStack_60 [48];
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar5 = (**(int (***)())(**(int **)(param_1 + 8) + 8))();
    if (iVar5 == 4) {
      iVar5 = *(int *)(param_1 + 8) + -0x68;
      if (*(int *)(param_1 + 8) == 0) {
        iVar5 = 0;
      }
      if ((*(int **)(iVar5 + 0xd0) == (int *)0x0) || (bVar3 = true, **(int **)(iVar5 + 0xd0) == 0))
      {
        bVar3 = false;
      }
      if ((!bVar3) && (0 < *(int *)(param_1 + 0x1c))) {
        uVar1 = *(unsigned int *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,0);
        iVar6 = fn_82696958(uVar4,uVar1);
        if ((iVar6 != 0) &&
           (iVar7 = (**(int (***)())(*(int *)(iVar6 + 0x10) + 8))(iVar6 + 0x10), iVar7 == 0x1e)) {
          iVar7 = *(int *)(iVar5 + 0xa0);
          iVar2 = *(int *)(iVar7 + 8);
          uVar1 = *(unsigned int *)(iVar2 + 0x18);
          uVar4 = fn_8278D3F0(auStack_60,*(unsigned int *)(iVar2 + 0x1c),iVar6 + 0x30);
          fn_82794C90(*(unsigned int *)(iVar7 + 8),uVar4);
          fn_826FDF58(auStack_60);
          iVar5 = *(int *)(iVar5 + 0xa0);
          uVar4 = fn_8278C528(appuStack_80,uVar1,iVar6 + 0x5c);
          fn_82794D68(*(unsigned int *)(iVar5 + 8),uVar4);
          appuStack_80[0] = &lbl_82010C6C;
          fn_8278B290(appuStack_80);
          fn_8267C488(appuStack_80);
        }
      }
    }
  }
  return;
}

