extern unsigned *fn_82829530(void *out, int map, char **key);
extern int strncpy(char *, char *, int);
int fn_82828380(int param_1, char *param_2)
{
  unsigned *piVar1;
  struct { char *p; unsigned it[3]; } L;
  char buf[264];
  strncpy(buf, param_2, 0xff);
  L.p = buf;
  piVar1 = fn_82829530(L.it, *(int *)(param_1 + 0x2f0), &L.p);
  if (*piVar1 != *(unsigned *)(*(int *)(param_1 + 0x2f0) + 4)) {
    return *(int *)(*(int *)(*piVar1 + 0xc) + 0x100);
  }
  return 0;
}
