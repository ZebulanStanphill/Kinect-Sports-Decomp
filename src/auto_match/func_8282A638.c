extern int fn_82381BC0();
extern int fn_82820EF8();
extern int fn_828223C8();
extern int fn_82827750();
extern int fn_8282D818();
extern unsigned int iStack_3c;


void fn_8282A638(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  int *piVar3;
  unsigned char cVar5;
  int iVar4;
  unsigned int *puStack_40;
  unsigned int iStack_3c;
  int * apiStack_38;
  
  iVar4 = param_1 + 0x2fc;
  while (fn_828223C8(iVar4,&iStack_3c), iStack_3c != 0) {
    iVar4 = iStack_3c;
    if ((((*(int **)(iStack_3c + 0x48))[1] - **(int **)(iStack_3c + 0x48)) / 0x14 != 0) &&
       (*(char *)(iStack_3c + 0x54) != '\0')) {
      uVar1 = *(unsigned int *)(iStack_3c + 0xc);
      piVar2 = *(int **)(*(int *)(iStack_3c + 0x4c) + 4);
      piVar3 = (int *)*piVar2;
      while (iStack_3c = iVar4, apiStack_38 = piVar3, piVar3 != piVar2) {
        fn_8282D818(param_1,&puStack_40,0xc,1);
        *puStack_40 = uVar1;
        puStack_40[1] = *(unsigned int *)(piVar3[3] + 0xc);
        puStack_40[2] = piVar3[4];
        cVar5 = fn_82827750(param_1);
        if (cVar5 != '\0') {
          fn_82820EF8(puStack_40 + 2,4);
          fn_82820EF8(puStack_40,4);
          fn_82820EF8(puStack_40 + 1,4);
        }
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
        fn_82381BC0(&apiStack_38);
        piVar3 = apiStack_38;
        iVar4 = iStack_3c;
      }
    }
  }
  return;
}

