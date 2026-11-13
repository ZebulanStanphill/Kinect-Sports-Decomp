extern int fn_82FF9E88();
extern int fn_8302B530();
extern int fn_8302B540();
void RtlEnterCriticalSection(void *cs);
void RtlLeaveCriticalSection(void *cs);

typedef struct Node { struct Node *next; unsigned int key; int value[1]; } Node;
typedef struct Map { char pad[0x50]; char cs[0x44]; Node *buckets[193]; } Map;

static int *find(Map *m, unsigned int key)
{
  Node *n;
  for (n = m->buckets[key % 0xc1]; n != 0; n = n->next) {
    if (n->key == key) return n->value;
  }
  return 0;
}

unsigned int * fn_82FFA5E0(unsigned int *param_1,Map *param_2,unsigned int param_3,int param_4)

{
  int *v;
  
  *param_1 = 0;
  param_1[1] = 0;
  fn_8302B530();
  RtlEnterCriticalSection(param_2->cs);
  v = find(param_2, param_3);
  if (v != 0) {
    fn_82FF9E88(v,param_1,param_4);
  }
  RtlLeaveCriticalSection(param_2->cs);
  fn_8302B540();
  return param_1;
}
