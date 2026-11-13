extern unsigned int *auStack_3c;
extern int fn_82E32040();
extern int fn_82E44C10();
extern int fn_82E44F90();


__int64 fn_82E46080(__int64 param_1,unsigned short param_2,unsigned int *param_3)

{
  __int64 lVar1;
  int *piVar2;
  int iVar3;
  __int64 lVar4;
  int *piStack_40;
  unsigned int auStack_3c;
  
  piStack_40 = (int *)0x0;
  lVar4 = 0;
  if (param_3 == (unsigned int *)0x0) {
    lVar4 = -0x7fffbffd;
  }
  else {
    *param_3 = 0;
    lVar1 = fn_82E44F90(param_1 + 0x84,param_2,&auStack_3c);
    piVar2 = (int *)(-(unsigned int)(lVar1 != 0) & auStack_3c);
    if (piVar2 == (int *)0x0) {
      lVar4 = fn_82E32040(&piStack_40);
      if (-1 < lVar4) {
        iVar3 = fn_82E44C10(param_1 + 0x84,param_2,piStack_40);
        if (iVar3 == 0) {
          lVar4 = -0x7ff8fff2;
        }
        else {
          *param_3 = piStack_40;
          if (piStack_40 != (int *)0x0) {
            (**(int (***)())(*piStack_40 + 4))();
          }
          piStack_40 = (int *)0x0;
        }
      }
    }
    else {
      *param_3 = piVar2;
      (**(int (***)())(*piVar2 + 4))();
    }
    if (piStack_40 != (int *)0x0) {
      (**(int (***)())(*piStack_40 + 8))();
    }
  }
  return lVar4;
}

