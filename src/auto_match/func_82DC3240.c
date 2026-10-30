extern void fn_82CEA8B0(void *);
extern int fn_82D89E30(void *);
extern void *fn_82D89E40(void *, int);

struct Sink_82DC3240;
typedef struct SinkVt_82DC3240 {
  int pad;
  void (*f4)(struct Sink_82DC3240 *, void *);
} SinkVt_82DC3240;
typedef struct Sink_82DC3240 {
  SinkVt_82DC3240 *vt;
} Sink_82DC3240;
typedef struct Group_82DC3240 {
  int pad[0x12];
  void **kids;
  int nkids;
} Group_82DC3240;
typedef struct List_82DC3240 {
  Group_82DC3240 **items;
  int count;
  int pad;
} List_82DC3240;
typedef struct Dst_82DC3240 {
  int pad0[0xc];
  char sub[0x10];
  Sink_82DC3240 sink;
} Dst_82DC3240;
typedef struct Src_82DC3240 {
  int pad[10];
  List_82DC3240 lists[2];
} Src_82DC3240;

void fn_82DC3240(Dst_82DC3240 *d, Src_82DC3240 *s)
{
  List_82DC3240 *l;
  int k;
  int i;
  int j;
  int n;
  int m;
  Group_82DC3240 *g;
  void *kid;
  fn_82CEA8B0(d->sub);
  l = &s->lists[0];
  for (k = 0; k < 2; k++, l = &s->lists[1]) {
    for (i = 0; i < l->count; i++) {
      g = l->items[i];
      for (j = 0; j < g->nkids; j++) {
        kid = g->kids[j];
        n = fn_82D89E30(kid);
        for (m = 0; m < n; m++) {
          d->sink.vt->f4(&d->sink, fn_82D89E40(kid, m));
        }
      }
    }
  }
}
