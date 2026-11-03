extern void fn_82CFF040(void *, int, int);
extern void fn_82CFF298(void *);

struct Al_82CFF358;
typedef struct AlVT_82CFF358 {
  int p0, p4;
  void (*f8)(struct Al_82CFF358 *, int, int);
  int pc;
  void (*f10)(struct Al_82CFF358 *, int, int, int);
} AlVT_82CFF358;
typedef struct Al_82CFF358 { AlVT_82CFF358 *vt; } Al_82CFF358;
typedef struct Svc_82CFF358 { char pad[0x10]; Al_82CFF358 *al; } Svc_82CFF358;
extern Svc_82CFF358 *fn_82CE5410(void);

typedef struct Hk_82CFF358 {
  int *data;
  int size;
  int cap;
} Hk_82CFF358;
typedef struct Arr_82CFF358 {
  int p0, p4;
  Hk_82CFF358 h;
} Arr_82CFF358;

void fn_82CFF358(void *ctx, Arr_82CFF358 *a)
{
  int size = a->h.size;
  int n = size - 1;
  int off;
  int e, k;
  Al_82CFF358 *al;
  if (n > 0) {
    off = 0;
    do {
      e = *(int *)((char *)a->h.data + off);
      fn_82CFF040(ctx, e, a->p0);
      k = a->p0;
      al = fn_82CE5410()->al;
      al->vt->f8(al, e, k);
      n--;
      off += 4;
    } while (n != 0);
  }
  if (size != 0) {
    e = *(int *)((char *)a->h.data + size * 4 - 4);
    fn_82CFF040(ctx, e, a->p4);
    k = a->p0;
    al = fn_82CE5410()->al;
      al->vt->f8(al, e, k);
  }
  {
    Hk_82CFF358 *h = &a->h;
    al = fn_82CE5410()->al;
    h->size = 0;
    if ((h->cap & (int)0x80000000) == 0) {
      al->vt->f10(al, (int)h->data, h->cap & 0x3fffffff, 4);
    }
    h->data = 0;
    h->cap = (int)0x80000000;
  }
  fn_82CFF298(a);
}
