typedef unsigned int undefined4;

extern void *fn_8267B890(void *heap, int size, int flags);
extern void fn_826824B0(void *obj);
extern void fn_82696BC8(void *owner, void *obj);
extern void *fn_826C59F8(void);
extern void fn_82737928(void *obj, void *item);
extern void *fn_82738DE8(void *mem, void *ctx);

void fn_826CFDB8(int param_1)
{
  void *item;
  void *mem;
  void *obj;

  item = fn_826C59F8();
  if (item != 0) {
    mem = fn_8267B890(*(void **)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                      0x44, 0);
    if (mem != 0) {
      obj = fn_82738DE8(mem, *(void **)(param_1 + 0x18));
    }
    else {
      obj = 0;
    }
    fn_82737928(obj, item);
    fn_82696BC8(*(void **)(param_1 + 4), obj);
    if (obj != 0) {
      fn_826824B0(obj);
    }
  }
  return;
}
