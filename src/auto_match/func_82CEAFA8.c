typedef struct Seg_82CEAFA8 {
  int f0;
  struct Seg_82CEAFA8 *next;
  int f8;
  int fc;
  int f10;
  int f14;
  char *data;
  int size;
} Seg_82CEAFA8;

extern int fn_82CEAE80(Seg_82CEAFA8 *);
extern int fn_82CFBBF0(int, int);

char *fn_82CEAFA8(Seg_82CEAFA8 *self, int key)
{
  int i;
  int total;
  int idx;
  Seg_82CEAFA8 *s;
  char *e;

  for (i = 0; i < fn_82CEAE80(self); i++) {
    total = self->size;
    for (s = self->next; s != 0; s = s->next) {
      total = s->size + total;
    }
    s = self;
    idx = i - total;
    do {
      idx = s->size + idx;
      if (idx >= 0) {
        e = s->data + idx * 24;
        goto found;
      }
      s = s->next;
    } while (s != 0);
    e = self->data;
found:
    if (fn_82CFBBF0(*(int *)e, key) == 0) {
      return e;
    }
  }
  return 0;
}
