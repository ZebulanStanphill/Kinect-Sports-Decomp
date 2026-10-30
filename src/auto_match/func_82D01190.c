struct Al_82D01190; typedef struct Al_82D01190 { struct AlVt_82D01190 *vt; } Al_82D01190;
struct AlVt_82D01190 { void *s0; void *(*alloc)(Al_82D01190 *, unsigned); void (*free)(Al_82D01190 *, void *, unsigned); };
typedef struct { char pad[0x14]; Al_82D01190 *al; } Ctx_82D01190;
typedef struct { int *keys; char *rows; int count; } O_82D01190;
extern Ctx_82D01190 *fn_82CE5410();
extern void fn_82D00FB0(int **, int, int, void *);
extern void fn_82D010E8(void);
extern void *memcpy(void *, const void *, unsigned);
static void *Alloc(unsigned n) { Al_82D01190 *al = fn_82CE5410()->al; return al->vt->alloc(al, n); }
static void Free(void *p, unsigned n) { Al_82D01190 *al = fn_82CE5410()->al; al->vt->free(al, p, n); }
void fn_82D01190(O_82D01190 *o)
{
  int n = o->count;
  if (n > 1) {
    int **ptrs, i;
    int *newkeys;
    char *newrows;
    int **pp;
    char *dst;
    ptrs = (int **)Alloc(n << 2);
    for (i = 0; i < o->count; i++) ptrs[i] = o->keys + i;
    if (o->count > 1) fn_82D00FB0(ptrs, 0, o->count - 1, (void *)fn_82D010E8);
    n = o->count;
    newkeys = (int *)Alloc(n << 2);
    n = o->count;
    newrows = (char *)Alloc(n * 0x48);
    i = 0;
    if (o->count > 0) {
      dst = newrows;
      pp = ptrs;
      do {
        int idx;
        *(int *)((char *)newkeys + ((char *)pp - (char *)ptrs)) = **pp;
        idx = *pp - o->keys;
        memcpy(dst, o->rows + idx * 0x48, 0x48);
        i++;
        pp++;
        dst += 0x48;
      } while (i < o->count);
    }
    { int *pn = &o->count; n = *pn;
    Free(ptrs, n << 2);
    n = *pn;
    Free(o->keys, n << 2);
    n = *pn;
    Free(o->rows, n * 0x48); }
    o->keys = newkeys;
    o->rows = newrows;
  }
}
