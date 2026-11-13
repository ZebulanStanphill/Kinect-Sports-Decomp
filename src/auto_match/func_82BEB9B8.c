typedef struct Request_82BEB9B8 {
  char pad[0x10];
  int status;
  char list[1];
} Request_82BEB9B8;

extern void *fn_82BE56B0(unsigned int size);
extern void *fn_82BEB628(void *mem, void *item);
extern int fn_82BE52B8(void *list, void *node);
extern void fn_82BEB640(void *node);
extern void fn_82BE56C0(void *mem);
extern int fn_82BE5240();

int fn_82BEB9B8(Request_82BEB9B8 *r, void *item)
{
  void *mem;
  void *node;

  mem = fn_82BE56B0(0xc);
  if (mem != 0) {
    node = fn_82BEB628(mem, item);
  } else {
    node = 0;
  }
  if (node == 0) {
    r->status = 0;
    return fn_82BE5240(r, 0x65, "CMassiveListNode in AddToRequestCollection");
  }
  if (fn_82BE52B8(r->list, node) == 0) {
    fn_82BEB640(node);
    fn_82BE56C0(node);
    return 1000;
  }
  return 0;
}
