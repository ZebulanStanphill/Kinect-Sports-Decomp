typedef struct Alloc_82CE4918 Alloc_82CE4918;
typedef struct AVt_82CE4918 { int pad[4]; void (*dealloc)(Alloc_82CE4918 *, void *, unsigned, int); } AVt_82CE4918;
struct Alloc_82CE4918 { AVt_82CE4918 *vt; };
typedef struct Mem_82CE4918 { char pad[0x10]; Alloc_82CE4918 *alloc; } Mem_82CE4918;
typedef struct Elem_82CE4918 { char pad[8]; char x[8]; } Elem_82CE4918;
typedef struct Arr_82CE4918 { Elem_82CE4918 *data; int count; int cap; } Arr_82CE4918;
extern Mem_82CE4918 *fn_82CE5410(void);
extern void fn_82CED5B8(void *);

void fn_82CE4918(Arr_82CE4918 *a)
{
  Mem_82CE4918 *m = fn_82CE5410();
  int n = a->count;
  Elem_82CE4918 *p = a->data;
  Alloc_82CE4918 *al = m->alloc;
  if (n > 0) {
    do {
      fn_82CED5B8(p->x);
      n--;
      p++;
    } while (n != 0);
  }
  a->count = 0;
  if ((a->cap & (int)0x80000000) == 0) {
    al->vt->dealloc(al, a->data, a->cap & 0x3fffffff, 0x10);
  }
  a->data = 0;
  a->cap = (int)0x80000000;
}
