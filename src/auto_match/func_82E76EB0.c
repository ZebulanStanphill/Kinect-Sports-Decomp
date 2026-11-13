extern unsigned int *auStack_38;
extern int fn_82E65EE8();
extern int fn_82F691F0();
extern unsigned int iStack_3c;


__int64 fn_82E76EB0(int param_1,int *param_2)

{
  int iVar1;
  __int64 lVar2;
  int *piStack_40;
  int iStack_3c;
  unsigned int auStack_38 [14];
  
  if (param_2 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  iVar1 = *(int *)(param_1 + 0x168);
  if (iVar1 == 0) {
    return 0;
  }
  piStack_40 = (int *)0x0;
  iStack_3c = 0;
  if (*(int *)(param_1 + 0x160) == 0) {
    (**(int (***)())(*param_2 + 0xb4))(param_2,&iStack_3c);
    iVar1 = *(int *)(param_1 + 0x168);
    if (iVar1 + iStack_3c != *(int *)(param_1 + 0x148)) {
      lVar2 = -0x3ff2c945;
      goto LAB_82e76fd4;
    }
  }
  lVar2 = fn_82E65EE8(iVar1,&piStack_40);
  if ((-1 < lVar2) &&
     (lVar2 = (**(int (***)())(*piStack_40 + 0x18))(piStack_40,*(unsigned int *)(param_1 + 0x168)),
     -1 < lVar2)) {
    auStack_38[0] = 0;
    lVar2 = (**(int (***)())(*piStack_40 + 0xc))(piStack_40,auStack_38,0,0);
    if (-1 < lVar2) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_38[0],0xcc,*(unsigned int *)(param_1 + 0x168));
    }
  }
LAB_82e76fd4:
  if (piStack_40 != (int *)0x0) {
    (**(int (***)())(*piStack_40 + 8))();
  }
  return lVar2;
}

