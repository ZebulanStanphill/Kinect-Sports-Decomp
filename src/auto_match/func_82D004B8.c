extern int fn_82CE5410();


void fn_82D004B8(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82CE5410();
  uVar1 = (**(int (***)())(**(int **)(iVar2 + 0x10) + 4))
                    (*(int **)(iVar2 + 0x10),
                     (param_2 + (param_2 & 0x7fffffff) * 2 & 0x3fffffff) << 2);
  *param_1 = (int)uVar1;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_82f691f0(uVar1,0xff,(param_2 & 0x3fffffff) << 2);
}

