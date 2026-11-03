extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern int _snprintf(char *, unsigned, const char *, ...);
extern char *fn_82A236C8(int, unsigned *);
extern void fn_82F664B0(char *, int, const char *);
extern void fn_82F668D8(char *, int, const char *, unsigned);
extern void fn_82F69A80(char *, int, const char *);
extern void *lbl_83219B90[];
extern char lbl_821AC4B4[];

void fn_82A23B20(int param_1, int param_2, char *param_3, int param_4)
{
  char *base;
  char *q;
  unsigned len;
  unsigned n;
  char buf[20];

  if (lbl_83219B90[1] != 0) {
    RtlEnterCriticalSection(lbl_83219B90[1]);
  }
  base = fn_82A236C8(param_1, &len);
  q = base + len - 1;
  while (q > base) {
    if (*q == '\\') { q++; break; }
    if (*q == ':') { q++; break; }
    q--;
  }
  n = (unsigned)(base + (len - (unsigned)q));
  if (n > 0x14) {
    n = 0x14;
  }
  *param_3 = 0;
  if (param_2 != 0) {
    fn_82F664B0(param_3, param_4, "cache:\\$cache$\\");
  }
  fn_82F668D8(param_3, param_4, q, n);
  fn_82F69A80(param_3, param_4, lbl_821AC4B4);
  _snprintf(buf, 0x14, "%x", *(unsigned *)(param_1 + 0x14));
  fn_82F69A80(param_3, param_4, buf);
  if (lbl_83219B90[1] != 0) {
    RtlLeaveCriticalSection(lbl_83219B90[1]);
  }
}
