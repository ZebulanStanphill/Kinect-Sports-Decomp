typedef struct Item {
  void *vt;
  int f4;
  int refs;
} Item;

typedef struct List List;
typedef struct {
  void *f0[3];
  void (*add)(List *self, Item *it);
  void *f10[4];
  unsigned int (*count)(List *self);
  Item *(*get)(List *self, unsigned int i);
} ListVt;
struct List { ListVt *vt; };

typedef struct {
  int f0;
  int f4;
  List *list;
} S;

extern unsigned char fn_82F52B50(Item *it, void *key, int *val);
extern Item *fn_82F52FA0(void *a, void *key);
extern void *fn_82F53208(void);

Item *fn_82F53270(S *s, void *key, int *val, unsigned char nosearch)
{
  unsigned int i;
  Item *it;

  if (s->list != 0) {
    for (i = 0; i < s->list->vt->count(s->list); i++) {
      it = s->list->vt->get(s->list, i);
      if (nosearch == 0 && fn_82F52B50(it, key, val)) {
        it->refs++;
        return it;
      }
    }
    it = fn_82F52FA0(fn_82F53208(), key);
    if (it != 0) {
      s->list->vt->add(s->list, it);
      it->refs++;
      it->f4 = *val;
      return it;
    }
  }
  return 0;
}
