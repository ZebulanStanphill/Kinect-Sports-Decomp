typedef struct Entry {
  unsigned int key;
  int pad4;
  int value[8];
} Entry;
typedef struct Map {
  Entry *begin;
  Entry *end;
} Map;
extern Entry *fn_82FA8200();

static __inline int Found(Map *m, Entry *p) { return p != m->end; }
static __inline int *Get(Map *m, Entry *p) { return Found(m, p) ? p->value : 0; }
int *fn_83014128(Map *param_1,unsigned int param_2)

{
  Entry *e;
  Entry *p;
  int *r;
  
  for (p = param_1->begin; p != param_1->end && p->key != param_2; p++) {
  }
  r = Get(param_1, p);
  if (r == 0) {
    e = fn_82FA8200();
    if (e != 0) {
      r = e->value;
      e->key = param_2;
    }
  }
  return r;
}
