extern int fn_82FFF908(void *);
extern void fn_82FFF990(void *);

typedef struct {
  void **begin;
  void **end;
} Vec;

int fn_8302EE08(void *param_1, Vec *v)
{
  void **it;
  void **j;
  int r;

  r = 1;
  for (it = v->begin; it != v->end; it++) {
    r = fn_82FFF908(*it);
    if (r != 1) {
      for (j = v->begin; j != it; j++) {
        fn_82FFF990(*j);
      }
    }
  }
  return r;
}
