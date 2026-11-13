extern int fn_8251E4D0();
extern int fn_825200A8();


void fn_8257F228(unsigned __int64 param_1,__int64 param_2,int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((int *)(param_3 + 0x98) != (int *)0x0) {
    iVar1 = *(int *)(param_3 + 0x9c);
    iVar7 = 0;
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        iVar2 = *(int *)(param_3 + 0x98);
        piVar3 = *(int **)(iVar6 + iVar2);
        uVar4 = (**(int (***)())(*piVar3 + 0x20))(piVar3);
        iVar5 = fn_825200A8(param_4,uVar4);
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_8251E4D0(param_2 + 4);
        }
        ((int (*)())fn_8257F228)(param_1,param_2,piVar3,param_4,param_5,param_6,param_7,
                      *(unsigned int *)(iVar6 + iVar2 + 8));
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x1a0;
      } while (iVar7 < iVar1);
    }
  }
  return;
}

