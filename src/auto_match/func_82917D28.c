typedef struct Obj_82917D28 {
  char pad[0x14];
  void **items;
  unsigned count;
} Obj_82917D28;

extern int fn_82917B48(void *, int, int);

int fn_82917D28(Obj_82917D28 *o, int a)
{
  unsigned i;
  for (i = 0; i < o->count; i++) {
    int hr = fn_82917B48(o->items[i], a, 0);
    if (hr < 0) return hr;
  }
  return 0;
}
