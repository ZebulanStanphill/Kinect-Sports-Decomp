typedef struct { void *data; int size; int cap; } Arr_82DE0D40;
typedef struct { int *vt; } Alloc_82DE0D40;
typedef struct { char pad[0x10]; Alloc_82DE0D40 *heap; } Router_82DE0D40;
extern Router_82DE0D40 *fn_82CE5410();


void fn_82DE0D40(char *param_1)
{
  Alloc_82DE0D40 *h;
  Arr_82DE0D40 *a = (Arr_82DE0D40 *)(param_1 + 0x34);
  h = fn_82CE5410()->heap;
  a->size = 0;
  if ((a->cap & (int)0x80000000) == 0) {
    (*(void (*)(Alloc_82DE0D40 *, void *, int, int))(*(int *)((char *)h->vt + 0x10)))(h, a->data, a->cap & 0x3fffffff, 4);
  }
  a->data = 0;
  a->cap = (int)0x80000000;
}
