void fn_82E0A0F8(int *param_1)
{
  int *sub;
  int uVar2;
  int iVar3;
  int vt;

  sub = (int *)param_1[7];
  uVar2 = sub[6];
  iVar3 = sub[7];
  if (uVar2 < 0 || iVar3 < 0) {
    vt = *param_1;
    uVar2 = (*(int (**)())(vt + 0x38))(param_1, "__data__");
    (*(int (**)())(vt + 0x3c))(param_1, uVar2, 0);
  } else {
    (*(int (**)())(*param_1 + 0x3c))(param_1, uVar2, iVar3);
  }
  return;
}
