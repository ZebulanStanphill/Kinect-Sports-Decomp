typedef struct Entry_82FB1278 { unsigned key; void *val; } Entry_82FB1278;
typedef struct Map_82FB1278 { char pad[0x88]; Entry_82FB1278 *first, *last; } Map_82FB1278;
extern int fn_83008390(void *, unsigned int, unsigned int, unsigned int, unsigned int);
static __forceinline void **select_82FB1278(Entry_82FB1278 *e, int ok) { return ok ? &e->val : 0; }
int fn_82FB1278(Map_82FB1278 *m, unsigned key, unsigned a, unsigned b, unsigned c, unsigned d)
{
 Entry_82FB1278 *end = m->last, *e = m->first;
 void **p;
 int delta;
 while (e != end && e->key != key) e++;
 delta = (unsigned)end - (unsigned)e;
 p = select_82FB1278(e, delta != 0);
 if (p) return fn_83008390(*p, a, b, c, d);
 return 2;
}
