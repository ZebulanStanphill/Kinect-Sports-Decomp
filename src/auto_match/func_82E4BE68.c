typedef struct { void *head; int pad[3]; int count; } List;
extern int fn_82E91590(List *l, void **out, int idx);

void fn_82E4BE68(char *p, void **out, int idx)
{
  List *l = *(List **)(p + 0x230);
  int n = l->count;
  if (n == 0 || idx > n - 1 || fn_82E91590(l, out, idx) == 0) {
    *out = 0;
  }
}
