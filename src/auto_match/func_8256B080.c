extern int fn_8251F720();
extern int fn_82522D98();
extern int fn_82837D98();
extern int fn_8284C860();


void fn_8256B080(unsigned int *param_1,int param_2,int param_3)

{
  int iVar2;
  char cVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar4;
  int aiStack_30 [12];
  
  *(unsigned int *)(param_3 + 0x18) = *param_1;
  if (param_2 == 0) {
    iVar2 = fn_8251F720(param_3 + 0x18,0);
    *(int *)(param_3 + 8) = iVar2;
    uVar4 = 0;
    cVar3 = fn_8284C860(*(unsigned int *)(iVar2 + 0x14));
    if (cVar3 != '\0') {
      do {
        fn_82837D98(*(unsigned int *)(iVar2 + 0x14),uVar4,aiStack_30);
        uVar4 = uVar4 + 1;
        *(unsigned int *)(aiStack_30[0] + 0x2c) = *(unsigned int *)(aiStack_30[0] + 0x2c) & 0xffffffc3 | 4;
        uVar1 = fn_8284C860(*(unsigned int *)(iVar2 + 0x14));
      } while ((uVar4 & 0xffffffff) < (uVar1 & 0xff));
    }
    *(unsigned int *)(param_3 + 0x14) = *(unsigned int *)(*(int *)(param_3 + 8) + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(0xc);
}

