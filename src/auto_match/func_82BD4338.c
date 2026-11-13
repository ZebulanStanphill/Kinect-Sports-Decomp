extern unsigned int *auStack_4e;
extern int memset();
extern unsigned int iStack_5c;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


unsigned __int64 fn_82BD4338(int param_1,int param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned int uStack_60;
  int iStack_5c;
  unsigned int uStack_58;
  unsigned int *puStack_54;
  unsigned char auStack_4e [30];
  
  uVar2 = 0xffffffff80004001;
  uStack_60 = 0;
  puStack_54 = &uStack_60;
  uStack_58 = 1;
  if (*(int *)(param_1 + 0x24) != 0) {
    piVar1 = *(int **)(param_1 + 0x3c);
    iStack_5c = param_2;
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      memset(auStack_4e,0,0x10);
    }
    if (param_2 != 0) {
      uVar2 = (**(int (***)())(*piVar1 + 4))(piVar1,&uStack_58);
    }
    *(unsigned int *)(param_1 + 0x44) = 1;
  }
  return uVar2;
}

