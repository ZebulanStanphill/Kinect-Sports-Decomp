extern int fn_829E0980(void *, int, int, int, int);
extern void *fn_829E0C20(int, int);
extern int fn_829E1040(int, unsigned int, int, short *);
extern int fn_82A1DDC0(void *, int, int);
int fn_829E10F0(int param_1, int param_2, unsigned short *param_3)
{
  unsigned int *puVar2;
  int hr;
  unsigned int uVar3;
  short *psVar4;
  puVar2 = (unsigned int *)fn_829E0C20(param_2, *param_3);
  if (puVar2 == 0) return 0x80004005;
  hr = fn_829E0980(puVar2, 0x18, 8, 8, param_2);
  if (hr < 0) return hr;
  *param_3 = (unsigned short)(puVar2[1] >> 0x11);
  fn_82A1DDC0(puVar2 + 2, param_1, 0x10);
  uVar3 = 0;
  psVar4 = (short *)((*puVar2 >> 0xe) + (int)puVar2);
  do {
    hr = fn_829E1040(param_1, uVar3, param_2, psVar4);
    if (hr < 0) return hr;
    if (*psVar4 == 0) return 0x80004005;
    uVar3 = uVar3 + 1; psVar4 = psVar4 + 1;
  } while (uVar3 < 8);
  return 0;
}
