extern unsigned int strlen(const char *);
extern void *memcpy(void *, const void *, unsigned int);
extern int *fn_8268B368(int *, unsigned int, unsigned int, int);
extern unsigned int lbl_831E7E64;

int *fn_8268C590(int *param_1, const char *param_2, const char *param_3, const char *param_4)
{
  unsigned int l2 = param_2 != 0 ? strlen(param_2) : 0;
  unsigned int l3 = param_3 != 0 ? strlen(param_3) : 0;
  unsigned int l4 = param_4 != 0 ? strlen(param_4) : 0;
  char *iVar2 = (char *)fn_8268B368(param_1, lbl_831E7E64, l4 + l3 + l2, 0);
  memcpy(iVar2 + 8, param_2, l2);
  memcpy(iVar2 + l2 + 8, param_3, l3);
  memcpy(iVar2 + l3 + l2 + 8, param_4, l4);
  *param_1 = (int)iVar2;
  return param_1;
}
