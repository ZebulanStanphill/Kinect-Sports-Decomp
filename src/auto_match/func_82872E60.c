extern void fn_8265CA20(void *);
typedef struct { char *begin, *end, *capacity; } Vec;
void fn_82872E60(Vec *v) {
 char *p = v->begin;
 if (p) {
  char *i;
  for (i = p; i != v->end; i += 0xc) {}
  fn_8265CA20(p);
 }
 v->begin = 0; v->end = 0; v->capacity = 0;
}
