extern void fn_8248F8E8(void *);
typedef struct { char *begin, *end, *capacity; } Vec;
void fn_82491E88(Vec *v) {
 char *p = v->begin;
 if (p) {
  char *i;
  for (i = p; i != v->end; i += 0x1c) {}
  fn_8248F8E8(p);
 }
 v->begin = 0; v->end = 0; v->capacity = 0;
}
