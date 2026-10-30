extern char lbl_82196582[];
extern void *memset(void *d, int c, unsigned n);
extern void *fn_82C562F0(void *ctx, unsigned size, char *tag);
extern int fn_82C53220(void *ctx, void *n, int a, int b, int c);
extern int fn_82CAAFD8(void *pool, int n);
extern void fn_82CAADA0(void *ctx, void *list);

typedef struct Cell_82CAB0E0 { struct Cell_82CAB0E0 *next; void *item; } Cell_82CAB0E0;
typedef struct Pool_82CAB0E0 {
  Cell_82CAB0E0 *head; Cell_82CAB0E0 *tail; Cell_82CAB0E0 *free; Cell_82CAB0E0 *freetail; int count;
} Pool_82CAB0E0;
typedef struct List_82CAB0E0 { int f0; int f4; int f8; Pool_82CAB0E0 *pool; } List_82CAB0E0;
typedef struct Item_82CAB0E0 { char pad[0x280]; int idx; int pad2; } Item_82CAB0E0;

int fn_82CAB0E0(void *ctx, List_82CAB0E0 *l, int a, int b, int n, int c, int u9, int u10, int zero)
{
  int err;
  int i;
  l->f0 = 0;
  l->f8 = 0;
  if (l->pool == 0) {
    l->pool = (Pool_82CAB0E0 *)fn_82C562F0(ctx, 0x18, lbl_82196582);
    if (l->pool == 0) {
      err = -9;
      goto fail;
    }
    err = fn_82CAAFD8(l->pool, n);
    if (err != 0) goto fail;
  }
  for (i = 0; i < n; i++) {
    Item_82CAB0E0 *it = (Item_82CAB0E0 *)fn_82C562F0(ctx, 0x288, lbl_82196582);
    Pool_82CAB0E0 *p;
    Cell_82CAB0E0 *cell;
    if (it == 0) { err = -9; goto fail; }
    if (zero != 0) {
      memset(it, 0, 0x288);
      it->idx = -1;
    } else {
      err = fn_82C53220(ctx, it, a, b, c);
      if (err != 0) goto fail;
    }
    it->idx = i;
    p = l->pool;
    if (p == 0 || p->count < 0) { err = -9; goto fail; }
    cell = p->free;
    p->free = cell->next;
    if (p->free == 0) p->freetail = 0;
    cell->item = it;
    cell->next = p->head;
    p->head = cell;
    if (p->tail == 0) p->tail = cell;
    p->count = p->count + 1;
  }
  return 0;
fail:
  fn_82CAADA0(ctx, l);
  return err;
}
