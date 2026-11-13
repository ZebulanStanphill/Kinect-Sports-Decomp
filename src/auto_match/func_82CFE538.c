extern unsigned int *auStack_230;
extern int fn_82CFC050();


void fn_82CFE538(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned char auStack_230 [512];
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    (**(int (***)())(**(int **)(param_1 + 8) + 0x10))();
  }
  else {
    iVar1 = (int)param_3;
    lVar3 = 0x200;
    lVar2 = param_3 + ((__int64)(iVar1 >> 9) + (unsigned __int64)(iVar1 < 0 && (param_3 & 0x1ff) != 0) &
                      0x7fffff) * -0x200;
    if (0 < iVar1) {
      do {
        if ((int)param_3 < 0x200) {
          lVar3 = lVar2;
        }
        fn_82CFC050(auStack_230,param_2,lVar3);
        (**(int (***)())(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),auStack_230,lVar3);
        param_3 = param_3 - lVar3;
        param_2 = lVar3 + param_2;
      } while (0 < (__int64)param_3);
    }
  }
  return;
}

