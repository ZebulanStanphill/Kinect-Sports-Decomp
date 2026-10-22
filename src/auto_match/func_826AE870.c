typedef struct { int f0; int f4; unsigned int refs; } RefObj;
typedef struct { RefObj *p; int x; } Handle;
typedef struct { RefObj *p; void *q; unsigned char flag; } Src;
typedef struct { RefObj *a; Handle h; unsigned char d; } Dst;

extern void fn_826C3378(Handle *h, void *q, int flag);

Dst *fn_826AE870(Dst *param_1, void **param_2)
{
  RefObj *a;
  RefObj *b;
  Src *src;
  Handle *h;

  a = *(RefObj **)param_2[0];
  h = &param_1->h;
  param_1->a = a;
  a->refs = a->refs + 1;
  src = (Src *)param_2[1];
  param_1->d = 0;
  b = src->p;
  h->p = b;
  if (b != 0) {
    b->refs = (b->refs + 1) & 0x8fffffff;
  }
  h->x = 0;
  if (src->q != 0) {
    fn_826C3378(h, src->q, src->flag & 1);
  }
  return param_1;
}
