extern int fn_8248F890();
extern int fn_82494B00();
extern int fn_824978B8();
extern unsigned int ltcg_pool_0_0f;


void fn_82494040(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int *piVar4;
  double dVar5;
  int * apiStack_50;
  
  piVar4 = *(int **)(*(int *)(*(int *)(param_2 + 0x14) + 0x80) + 0xdc);
  if (piVar4 != (int *)0x0) {
    dVar5 = (double)ltcg_pool_0_0f;
    do {
      iVar1 = *piVar4;
      if (((*(char *)(iVar1 + 0x10b) == '\0') && ((*(int **)(iVar1 + 4))[100] != 0)) &&
         ((*(int *)(*(int *)(iVar1 + 0xc) + 0x15c) != 0 ||
          ((dVar5 < (double)(float)piVar4[3] || ((int)param_4 != 0)))))) {
        for (piVar3 = *(int **)(param_2 + 4);
            (piVar3 != *(int **)(param_2 + 8) && (**(int **)(iVar1 + 4) != *(int *)(*piVar3 + 0x50))
            ); piVar3 = piVar3 + 1) {
        }
        if (piVar3 == *(int **)(param_2 + 8)) {
          uVar2 = fn_8248F890(0x240);
          if ((uVar2 & 0xffffffff) == 0) {
            apiStack_50 = (int *)0x0;
          }
          else {
            apiStack_50 =
                 (int *)fn_824978B8(uVar2,piVar4,*(unsigned int *)(param_2 + 0x14),param_4);
          }
          (**(int (***)())(*apiStack_50 + 0xc))(param_1);
          fn_82494B00(param_2 + 4,&apiStack_50);
        }
        else {
          (**(int (***)())(*(int *)*piVar3 + 0xc))(param_1);
        }
      }
      piVar4 = (int *)piVar4[5];
    } while (piVar4 != (int *)0x0);
  }
  return;
}

