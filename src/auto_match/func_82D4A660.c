extern char *fn_82D6F590(char *, int, int, int, float);
extern float lbl_83182A98;
int fn_82D4A660(int *self)
{
  int lVar1;
  char *pcVar3;
  char auStack_220[1];
  char auStack_210[512];
  if (self[10] == 0) return -1;
  lVar1 = (*(int (**)(int *, int, char *))(*self + 0x14))(self, 0, auStack_210);
  pcVar3 = fn_82D6F590(auStack_220, lVar1 + 0x20, lVar1 + 0x30, lVar1 + 0x40, lbl_83182A98);
  if (*pcVar3 == 0) return 0;
  return (*(int (**)(int *, int))(*self + 0xc))(self, 0);
}
