extern char *fn_82D6F590(char *, int, int, int, float);
extern float lbl_83182A98;
int fn_82D4A660(int *param_1)
{
  int lVar1;
  char *pcVar3;
  char auStack_220[1];
  char auStack_210[512];
  if (param_1[10] == 0) return -1;
  lVar1 = (*(int (**)(int *, int, char *))(*param_1 + 0x14))(param_1, 0, auStack_210);
  pcVar3 = fn_82D6F590(auStack_220, lVar1 + 0x20, lVar1 + 0x30, lVar1 + 0x40, lbl_83182A98);
  if (*pcVar3 == 0) return 0;
  return (*(int (**)(int *, int))(*param_1 + 0xc))(param_1, 0);
}
