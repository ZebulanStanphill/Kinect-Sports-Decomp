typedef struct Entry_830162F8 { unsigned int key; int value; } Entry_830162F8;
typedef struct Vec_830162F8 { Entry_830162F8 *begin; Entry_830162F8 *end; } Vec_830162F8;
extern Entry_830162F8 *fn_83015EE8(Vec_830162F8 *v);

static __forceinline int *Vec_find(Vec_830162F8 *v, unsigned int key)
{
  Entry_830162F8 *e; int found;
  for (e = v->begin; e != v->end && e->key != key; e++) {
  }
  found = e != v->end; return found ? &e->value : 0;
}

int *fn_830162F8(Vec_830162F8 *v, unsigned int key, int value)
{
  int *p = Vec_find(v, key);
  if (p != 0) {
    *p = value;
  } else {
    Entry_830162F8 *e = fn_83015EE8(v);
    if (e != 0) {
      p = &e->value;
      e->key = key;
      e->value = value;
    }
  }
  return p;
}
