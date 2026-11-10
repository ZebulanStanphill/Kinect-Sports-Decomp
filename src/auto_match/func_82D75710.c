typedef struct { unsigned short pad; unsigned short id; int x; } Entry_82D75710;
typedef struct { unsigned char a, b, count, pad; Entry_82D75710 e[1]; } List_82D75710;
typedef struct { char pad[0x30]; List_82D75710 list; } Obj_82D75710;
extern void fn_82DD8618(List_82D75710 *list, int index);

void fn_82D75710(Obj_82D75710 *o, unsigned short id)
{
  int n = o->list.count;
  int i;

  for (i = 0; i < n; i++) {
    Entry_82D75710 *e = o->list.e + i;
    if (e->id == id) {
      fn_82DD8618(&o->list, i);
      return;
    }
  }
}
