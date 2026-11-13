extern int fn_82FA5190();
extern int fn_82FA7508();
extern int fn_82FA9208();
extern int fn_82FA92C0();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264230;


void fn_82FB4A18(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  *(unsigned char *)(param_1 + 0x44) = 0;
  *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_1 + 0x30) & 0x7fffffff;
  puVar2 = *(unsigned int **)(param_1 + 0x1c);
  *(unsigned int *)(param_1 + 0x1c) = 0;
  if (puVar2 == (unsigned int *)0x0) {
    return;
  }
  uVar1 = puVar2[0xb];
  puVar2[0xb] = (int)((unsigned __int64)uVar1 - 1);
  if ((unsigned __int64)uVar1 - 1 == 0) {
    uVar5 = (unsigned __int64)(unsigned int)puVar2[3];
    if (uVar5 == 0) {
      fn_82FA7508(lbl_83264230,puVar2);
    }
    else {
      iVar4 = fn_82FA92C0(uVar5 + 0x28,puVar2 + 1);
      if (iVar4 == 1) {
        fn_82FA9208(uVar5);
      }
    }
    uVar3 = lbl_831BC768;
    (**(int (***)())*puVar2)(puVar2,0);
    fn_82FA5190(uVar3,puVar2);
  }
  return;
}

