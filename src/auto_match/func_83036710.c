extern void fn_83024AD8(void *);
typedef struct E_83036710 { void *a; void *b; int pad[2]; } E_83036710;
typedef struct Vec_83036710 { E_83036710 *first; E_83036710 *last; } Vec_83036710;

static unsigned int size(Vec_83036710 *v) { return v->last - v->first; }

void fn_83036710(Vec_83036710 *v)
{
  unsigned int i;
  for (i = 0; i < size(v); i++) {
    E_83036710 *e = v->first + i;
    if (e->a != 0) {
      fn_83024AD8(e->a);
    }
    if (e->b != 0) {
      fn_83024AD8(e->b);
    }
  }
}
