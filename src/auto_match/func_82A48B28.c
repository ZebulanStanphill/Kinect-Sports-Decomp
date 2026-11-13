extern unsigned int *auStack_30;
extern int fn_82A48AA8();
extern int fn_82A482A0();


unsigned __int64 fn_82A48B28(int param_1,int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int auStack_30;

  iVar1 = *param_2;
  iVar3 = 0;
  uVar4 = 0;
  auStack_30 = 0;
  if (iVar1 == 0x100) {
    uVar4 = fn_82A482A0(param_1 + -0x8c);
  }
  else if (iVar1 == 0x200) {
    if (*(int *)(param_1 + 0x188) != 0) {
      if (*(unsigned int **)(param_1 + 0x184) == (unsigned int *)0x0) {
        puVar2 = (unsigned int *)0x0;
      }
      else {
        puVar2 = (unsigned int *)**(unsigned int **)(param_1 + 0x184);
      }
      *puVar2 = *puVar2 | 0x40;
    }
  }
  else {
    auStack_30 = (unsigned int)(iVar1 == 0x400);
    fn_82A48AA8(param_1 + -0x8c,&auStack_30);
    if (auStack_30 == 1) {
      iVar3 = 0x1000;
    }
  }
  *param_2 = iVar3;
  return uVar4;
}
