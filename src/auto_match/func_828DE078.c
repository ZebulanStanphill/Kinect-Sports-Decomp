extern int fn_828A0E20();
extern int fn_828AD488();


void fn_828DE078(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  char cVar1;
  int aiStack_50;
  
  cVar1 = fn_828AD488();
  if ((cVar1 != '\0') &&
     (aiStack_50 = **(int **)(param_1 + 0x1c4),
     (int *)aiStack_50 != *(int **)(param_1 + 0x1c4))) {
    do {
      cVar1 = (**(int (***)())(**(int **)(aiStack_50 + 0xc) + 0x14))
                        (*(int **)(aiStack_50 + 0xc),param_3,param_4,param_5,param_6,param_7,
                         param_8,param_2);
      if (cVar1 != '\0') {
        return;
      }
      fn_828A0E20(&aiStack_50);
    } while (aiStack_50 != *(int *)(param_1 + 0x1c4));
  }
  return;
}

