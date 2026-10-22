typedef struct { int id; unsigned short idx; } Ent;
extern int fn_82EEDD00(int p, unsigned int i, Ent **out);

int fn_82EEE258(int param_1, Ent *param_2)
{
  int hr;
  unsigned int i;
  unsigned int count;
  Ent *e;

  hr = 0;
  count = *(unsigned int *)(param_1 + 0x70);
  if (*(int *)((char *)param_2 + 0x58) != 0) {
    for (i = 0; count > i; i++) {
      e = 0;
      hr = fn_82EEDD00(param_1, i, &e);
      if (hr < 0) {
        return hr;
      }
      if (e == 0) {
        return 0xc00d36bb;
      }
      if (e->id == param_2->id && e->idx > param_2->idx) {
        e->idx--;
      }
    }
  }
  return hr;
}
