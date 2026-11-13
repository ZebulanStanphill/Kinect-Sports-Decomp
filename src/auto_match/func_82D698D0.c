typedef struct { unsigned short pad; unsigned short id; int x; } Entry_82D698D0;
typedef struct { unsigned char a, b, count, pad; Entry_82D698D0 e[1]; } List_82D698D0;
typedef struct { char pad[0xc]; List_82D698D0 list; } Obj_82D698D0;
extern void fn_82DD8618(List_82D698D0 *list, int index);

void fn_82D698D0(void *self, Obj_82D698D0 *o, unsigned short id)
{
  List_82D698D0 *list = &o->list;
  int n = list->count;
  int i;

  for (i = 0; i < n; i++) {
    Entry_82D698D0 *e = list->e + i;
    if (e->id == id) {
      fn_82DD8618(list, i);
      return;
    }
  }
}
