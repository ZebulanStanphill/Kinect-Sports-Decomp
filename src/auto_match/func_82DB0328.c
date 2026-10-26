typedef struct { void *p; int x; } Elem;
typedef struct { Elem *data; int size; } Arr;
typedef struct { char pad[0x60]; Arr arr; } Obj;
extern void fn_82D7BF58(void *p, void *arg);

void fn_82DB0328(Obj *o, void *arg)
{
  Arr *a = &o->arr;
  int i;
  for (i = 0; i < a->size; i++) {
    fn_82D7BF58(a->data[i].p, arg);
  }
}
