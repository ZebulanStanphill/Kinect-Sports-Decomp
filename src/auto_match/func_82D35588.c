#define true 1
extern unsigned int *auStack_224;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int uStack_228;
extern unsigned int uStack_22c;


void fn_82D35588(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned char *puStack_230;
  unsigned int uStack_22c;
  unsigned int uStack_228;
  unsigned char auStack_224 [500];
  
  if (param_2 != 0) {
    puStack_230 = auStack_224;
    uStack_22c = 0;
    uStack_228 = 0x80000080;
    while( true ) {
      while( true ) {
        if ((*(unsigned short *)(param_2 + 0x10) & 0x8000) != 0) break;
        param_2 = (unsigned int)*(unsigned short *)(param_2 + 0xc) * 0x14 + *(int *)(param_1 + 0x1c);
        if (*(unsigned short *)(param_2 + 0x12) == 0x7fff) {
          iVar2 = 0;
        }
        else {
          iVar2 = (unsigned int)*(unsigned short *)(param_2 + 0x12) * 0x14 + *(int *)(param_1 + 0x1c);
        }
        iVar1 = fn_82CE5410();
        if (uStack_22c == (uStack_228 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),&puStack_230,4);
        }
        *(int *)(puStack_230 + uStack_22c * 4) = iVar2;
        uStack_22c = uStack_22c + 1;
      }
      if (uStack_22c == 0) break;
      iVar2 = uStack_22c * 4;
      uStack_22c = uStack_22c - 1;
      param_2 = *(int *)(puStack_230 + iVar2 + -4);
    }
    iVar2 = fn_82CE5410();
    uStack_22c = 0;
    if ((uStack_228 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar2 + 0x10) + 0x10))
                (*(int **)(iVar2 + 0x10),puStack_230,uStack_228 & 0x3fffffff,4);
    }
  }
  return;
}

