extern int fn_82CE5410();
extern int fn_82CF9B00();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


void fn_82CF9B98(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iStack0000001c;
  
  uVar3 = *param_1;
  uVar1 = param_1[2];
  if (param_2 != uVar1 - uVar3) {
    iStack0000001c = param_2;
    if (param_2 < 1) {
      fn_82CF9B00(param_1);
    }
    else {
      if ((uVar3 != 0) && (*(char *)(param_1 + 4) != '\0')) {
        iVar2 = fn_82CE5410();
        (**(int (***)())(**(int **)(iVar2 + 0x14) + 0x10))
                  (*(int **)(iVar2 + 0x14),(unsigned __int64)uVar3,(unsigned __int64)uVar1 - (unsigned __int64)uVar3,1);
      }
      *(unsigned char *)(param_1 + 4) = 1;
      iVar2 = fn_82CE5410();
      uVar3 = (**(int (***)())(**(int **)(iVar2 + 0x14) + 0xc))
                        (*(int **)(iVar2 + 0x14),&stack0x0000001c,1);
      *param_1 = uVar3;
      param_1[1] = uVar3;
      param_1[2] = uVar3 + iStack0000001c;
      param_1[3] = (uVar3 + iStack0000001c) - 0x20;
    }
  }
  return;
}

