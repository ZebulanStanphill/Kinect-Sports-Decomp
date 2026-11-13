#define true 1
extern unsigned int *auStack_234;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int uStack_238;
extern unsigned int uStack_23c;


void fn_82D35308(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned char *puStack_240;
  unsigned int uStack_23c;
  unsigned int uStack_238;
  unsigned char auStack_234 [516];
  
  if (param_2 != 0) {
    puStack_240 = auStack_234;
    uStack_23c = 0;
    uStack_238 = 0x80000080;
    while( true ) {
      while( true ) {
        if ((*(unsigned int *)(param_2 + 0x28) & 0x80000000) != 0) break;
        param_2 = *(int *)(param_2 + 0x20) * 0x30 + *(int *)(param_1 + 0x1c);
        if (*(int *)(param_2 + 0x2c) == 0x7fffffff) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(param_2 + 0x2c) * 0x30 + *(int *)(param_1 + 0x1c);
        }
        iVar1 = fn_82CE5410();
        if (uStack_23c == (uStack_238 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),&puStack_240,4);
        }
        *(int *)(puStack_240 + uStack_23c * 4) = iVar2;
        uStack_23c = uStack_23c + 1;
      }
      if (uStack_23c == 0) break;
      iVar2 = uStack_23c * 4;
      uStack_23c = uStack_23c - 1;
      param_2 = *(int *)(puStack_240 + iVar2 + -4);
    }
    iVar2 = fn_82CE5410();
    uStack_23c = 0;
    if ((uStack_238 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar2 + 0x10) + 0x10))
                (*(int **)(iVar2 + 0x10),puStack_240,uStack_238 & 0x3fffffff,4);
    }
  }
  return;
}

