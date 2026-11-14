typedef struct Info_8301A738 {
  char pad0[0x5c];
  int state;
} Info_8301A738;

typedef struct Node_8301A738 {
  int pad0[2];
  Info_8301A738 *info;
} Node_8301A738;

typedef struct Iter_8301A738 {
  int a;
  int b;
  Node_8301A738 *node;
} Iter_8301A738;

extern Iter_8301A738 fn_82FFDF28(void *table, int key);

int fn_8301A738(char *self, int key)
{
  Iter_8301A738 it = fn_82FFDF28(self + 0x24, key);
  if (it.node != 0)
    return it.node->info->state > 1;
  return 0;
}
