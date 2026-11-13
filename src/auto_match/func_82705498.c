extern void *fn_8267B890(int, int, int);
extern void fn_8267C498(void *);
extern void *fn_82704C38(void *, int, int);

void *fn_82705498(int param_1)
{
  void *mem;
  void *o;

  if (*(int *)(param_1 + 0x11c) == 0) {
    mem = fn_8267B890(*(int *)(param_1 + 0x14), 0x50, 0);
    o = mem != 0 ? fn_82704C38(mem, *(int *)(param_1 + 0x14), 0) : 0;
    if (*(void **)(param_1 + 0x11c) != 0) {
      fn_8267C498(*(void **)(param_1 + 0x11c));
    }
    *(void **)(param_1 + 0x11c) = o;
  }
  return *(void **)(param_1 + 0x11c);
}
