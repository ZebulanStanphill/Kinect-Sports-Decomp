typedef struct { unsigned int base; unsigned int pos; unsigned int pad8; int full; int v10; int v14; int pad18, pad1c; } Ent_8245CFC8;
typedef struct { int pad0; Ent_8245CFC8 *ents; unsigned int cur; int mode; unsigned int count; unsigned int limit; } Buf_8245CFC8;
extern int fn_82A1DD38(unsigned int, void *, unsigned int);

int fn_8245CFC8(Buf_8245CFC8 *param_1, void *param_2, unsigned int param_3, int param_4, int param_5, int param_6)
{
  Ent_8245CFC8 *e;
  unsigned int *pp;
  unsigned int i;
  unsigned int n;
  Buf_8245CFC8 *q = param_1;

  while (param_3 != 0) {
    e = param_1->ents + param_1->cur;
    pp = &e->pos;
    if (param_1->mode == 0) {
      if (*pp + param_3 > param_1->limit) {
        e->full = 1;
      }
    }
    else if (*pp == param_1->limit) {
      e->full = 1;
    }
    e = param_1->ents + param_1->cur;
    if (e->full != 0) {
      for (i = 0; i < q->count; i++) {
        if (param_1->ents[i].full == 0) break;
      }
      if (i == param_1->count) {
        return 0;
      }
      param_1->cur = i;
      e = param_1->ents + i;
      pp = &e->pos;
    }
    n = param_1->limit - *pp;
    if (param_3 < n) {
      n = param_3;
    }
    fn_82A1DD38(*pp + e->base, param_2, n);
    param_3 = param_3 - n;
    *pp = *pp + n;
    if (param_4 != 0) {
      param_1->ents[param_1->cur].full = 1;
    }
  }
  if (param_4 != 0) {
    param_1->ents[param_1->cur].v10 = param_5;
    param_1->ents[param_1->cur].v14 = param_6;
  }
  return 1;
}
