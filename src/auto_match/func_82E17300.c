extern int fn_82CEA220();
extern int fn_82CEA358();


typedef struct { int v; int next; } N_82E17300;
void fn_82E17300(int *param_1)
{
  int first;
  int idx;
  int i;
  N_82E17300 *nodes;
  i = fn_82CEA220(param_1 + 3);
  first = ((N_82E17300 *)param_1[3])[i].next;
  fn_82CEA358(param_1 + 3, i);
  if (first != -1) {
    idx = first;
    while (((N_82E17300 *)*param_1)[idx].next != -1) {
      idx = ((N_82E17300 *)*param_1)[idx].next;
    }
    ((N_82E17300 *)*param_1)[idx].next = param_1[6];
    param_1[6] = first;
  }
}
