typedef struct Link_82CF94F8 { struct Link_82CF94F8 *next; } Link_82CF94F8;
typedef struct Bucket_82CF94F8 { char pad[0xc]; Link_82CF94F8 *a; Link_82CF94F8 *b; } Bucket_82CF94F8;
typedef struct Node_82CF94F8 { char pad[4]; unsigned word; char pad2[8]; int payload; } Node_82CF94F8;
typedef struct AVT_82CF94F8 { char pad[0x24]; void *(*alloc)(void *, unsigned); void (*free)(void *, void *, unsigned); } AVT_82CF94F8;
typedef struct Alloc_82CF94F8 { AVT_82CF94F8 *vt; } Alloc_82CF94F8;
typedef struct Obj_82CF94F8 {
  char pad[0x28]; Alloc_82CF94F8 *alloc; char map[0x150]; Bucket_82CF94F8 *buckets[1]; char pad2[0x88]; int nbuckets;
} Obj_82CF94F8;
typedef void (*Cb_82CF94F8)(void *, unsigned, unsigned, int, void *);

extern int fn_82D00FB0(void *, int, int, void *);
extern void fn_82D019B8(Bucket_82CF94F8 *, void *, int);
extern void fn_82D020E8(Bucket_82CF94F8 *, Cb_82CF94F8, int, void *);
extern void fn_82D03A60(Node_82CF94F8 **, void *);
extern void fn_82D03AA8(void *, void *, Node_82CF94F8 **);
extern void fn_82D01418(void);

int fn_82CF94F8(Obj_82CF94F8 *o, Cb_82CF94F8 cb, void *arg)
{
  int total = 0;
  int i;
  int *buf;
  int *p;
  unsigned bytes;
  struct { char tmp[8]; Node_82CF94F8 *node; } L;

  for (i = 0; i < o->nbuckets; i++) {
    Bucket_82CF94F8 *b = o->buckets[i];
    int n1 = 0, n2;
    Link_82CF94F8 *x;
    for (x = b->b; x != 0; x = x->next) n1++;
    x = b->a;
    n2 = 0;
    for (; x != 0; x = x->next) n2++;
    total += n2 + n1;
  }
  bytes = total * 4;
  buf = (int *)o->alloc->vt->alloc(o->alloc, bytes);
  if (buf == 0) {
    return 1;
  }
  p = buf;
  for (i = 0; i < o->nbuckets; i++) {
    Bucket_82CF94F8 *b = o->buckets[i];
    int n1 = 0, n2, n;
    Link_82CF94F8 *x;
    for (x = b->b; x != 0; x = x->next) n1++;
    x = b->a;
    n2 = 0;
    for (; x != 0; x = x->next) n2++;
    n = n2 + n1;
    fn_82D019B8(b, p, n);
    p = p + n;
  }
  if (total > 1) {
    fn_82D00FB0(buf, 0, total - 1, fn_82D01418);
  }
  p = buf;
  fn_82D03A60(&L.node, o->map);
  while (L.node != 0) {
    if ((int *)&L.node->payload == (int *)*p) {
      p++;
    } else {
      cb(&L.node->payload, L.node->word & 0xfffffffc, L.node->word >> 1 & 1, 0, arg);
    }
    fn_82D03AA8(L.tmp, o->map, &L.node);
  }
  o->alloc->vt->free(o->alloc, buf, bytes);
  for (i = 0; i < o->nbuckets; i++) {
    fn_82D020E8(o->buckets[i], cb, i + 1, arg);
  }
  return 0;
}
