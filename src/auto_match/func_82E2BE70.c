extern int fn_82E2BBA0();
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

typedef struct { short type; short pad[3]; double value; } Entry_82E2BE70;

int fn_82E2BE70(char *param_2, int param_3, double param_1)

{
  Entry_82E2BE70 *e;
  int r;

  RtlEnterCriticalSection(param_2 + 8);
  e = (Entry_82E2BE70 *)fn_82E2BBA0(param_2, param_3);
  r = 0;
  if (e == 0) {
    r = 0x8007000e;
  }
  else {
    e->value = param_1;
    e->type = 5;
  }
  RtlLeaveCriticalSection(param_2 + 8);
  return r;
}
