extern int fn_82FA8F10();
extern int fn_82FACFD8();
extern int fn_82FAE0B0();
extern int fn_82FB0888();
extern int fn_82FB3480();
extern int fn_8300D168();


unsigned __int64 fn_82FACE68(int param_1)

{
  unsigned __int64 uVar1;
  unsigned short uVar4;
  int iVar2;
  unsigned short uVar5;
  unsigned short *puVar3;
  unsigned short uVar6;
  
  fn_82FA8F10();
  uVar1 = fn_82FB3480(param_1 + 0x38);
  if ((int)uVar1 == 1) {
    uVar4 = (**(int (***)())(**(int **)(param_1 + 0x60) + 0x158))();
    iVar2 = fn_8300D168(param_1 + 0x6c,uVar4);
    if (iVar2 == 1) {
      if (uVar4 != 0) {
        uVar6 = 0;
        do {
          fn_82FAE0B0(*(unsigned int *)(param_1 + 0x60),uVar6);
          uVar5 = fn_82FB0888();
          puVar3 = (unsigned short *)fn_82FACFD8(param_1 + 0x6c);
          if (puVar3 != (unsigned short *)0x0) {
            *puVar3 = uVar5;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar4);
      }
    }
    else {
      uVar1 = 0x34;
    }
  }
  return uVar1;
}

