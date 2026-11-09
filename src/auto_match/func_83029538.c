typedef struct Entry_83029538 { unsigned key; void *val; } Entry_83029538;
typedef struct Map_83029538 { char pad[0x88]; Entry_83029538 *first, *last; } Map_83029538;
extern int fn_83008390(void *, unsigned int, unsigned int, unsigned int, unsigned int);
static __forceinline void **select_83029538(Entry_83029538 *e, int ok) { return ok ? &e->val : 0; }
int fn_83029538(Map_83029538 *m, unsigned key, unsigned a, unsigned b, unsigned c, unsigned d)
{
 Entry_83029538 *end = m->last, *e = m->first;
 void **p;
 int delta;
 while (e != end && e->key != key) e++;
 delta = (unsigned)end - (unsigned)e;
 p = select_83029538(e, delta != 0);
 if (p) return fn_83008390(*p, a, b, c, d);
 return 2;
}
