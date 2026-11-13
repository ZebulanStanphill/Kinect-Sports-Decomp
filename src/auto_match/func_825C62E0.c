typedef struct Item_825C62E0 { void **obj; struct Item_825C62E0 *next; } Item_825C62E0;
typedef struct { int pad[2]; Item_825C62E0 *head; unsigned char flag; } List_825C62E0;
extern int fn_82619478(void *, int, float);

void fn_825C62E0(List_825C62E0 *l, int a, float x)
{
  Item_825C62E0 *it;
  it = l->head;
  l->flag = 0;
  for (; it != 0; it = it->next) {
    if (*(int *)(*(int *)((char *)it->obj + 4) + 0x190) != 0) {
      fn_82619478(it->obj, a, x);
      l->flag = 1;
    }
  }
}
