typedef struct N_82E06078 { char pad[0x28]; struct N_82E06078 **arr; int count; } N_82E06078;

int fn_82E06078(N_82E06078 *o)
{
  int sum = o->count;
  int i;
  for (i = 0; i < o->count; i++) {
    sum += fn_82E06078(o->arr[i]);
  }
  return sum;
}
