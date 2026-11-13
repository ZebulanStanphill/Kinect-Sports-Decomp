extern int fn_82E47918();
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

typedef struct { short type; short pad[3]; double value; } Entry_82E48A18;

int fn_82E48A18(char *param_2, int param_3, double param_1)

{
  Entry_82E48A18 *e;
  int r;

  RtlEnterCriticalSection(param_2 + 4);
  e = (Entry_82E48A18 *)fn_82E47918(param_2, param_3);
  r = 0;
  if (e == 0) {
    r = 0x8007000e;
  }
  else {
    e->value = param_1;
    e->type = 5;
  }
  RtlLeaveCriticalSection(param_2 + 4);
  return r;
}
