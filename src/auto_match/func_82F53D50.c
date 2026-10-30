extern void fn_824B4280(void *);
typedef struct { char *begin, *end, *capacity; } Vec;
void fn_82F53D50(Vec *v) {
 char *p = v->begin;
 if (p) {
  char *i;
  for (i = p; i != v->end; i += 8) {}
  fn_824B4280(p);
 }
 v->begin = 0; v->end = 0; v->capacity = 0;
}
