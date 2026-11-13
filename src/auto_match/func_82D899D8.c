typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82D40590();
extern int fn_82D40610();
extern int fn_82D89930();


void fn_82D899D8(int param_1,int param_2,int *param_3)

{
  unsigned int uVar1;
  bool bVar2;
  bool bVar3;
  int *piVar5;
  unsigned __int64 uVar4;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    fn_82D40590(param_1 + 0x30);
  }
  if ((param_2 != 0) && (param_3 != (int *)0x0)) {
    bVar2 = false;
    uVar1 = *(unsigned int *)((param_3[3] + 0x44) * 4 + *(int *)(param_2 + 0x80));
    if ((uVar1 & 0x80) == 0) {
      if ((uVar1 & 0x100) == 0) {
        return;
      }
      piVar5 = (int *)(**(int (***)())(*param_3 + 0x10))(param_3);
      bVar2 = true;
    }
    else {
      piVar5 = (int *)(**(int (***)())(*param_3 + 0x10))(param_3);
    }
    if ((*(char *)(param_1 + 0xe8) == '\x05') ||
       (bVar3 = false, *(char *)(param_1 + 0xe8) == '\x04')) {
      bVar3 = true;
    }
    if ((!bVar3) || (!bVar2)) {
      uVar4 = (**(int (***)())(*piVar5 + 4))();
      fn_82D40610(param_1 + 0x30,uVar4);
      *(unsigned int *)(param_1 + 0x30) = 1;
      *(unsigned int *)(param_1 + 0x40) = 0;
      if (*(char *)(param_1 + 0xe8) == '\x05') {
        fn_82D89930(param_1);
      }
    }
  }
  return;
}

