typedef struct Item Item;

typedef struct Elem {
  Item *a;
  Item *b;
  int pad[2];
} Elem;

typedef struct Vec {
  Elem *begin;
  Elem *end;
  Elem *cap;
} Vec;

extern void fn_82FA5190(void *heap, void *p);
extern void fn_830224E8(void *p);
extern void fn_83024470(Item *p);
extern void fn_830245A0(Item *p);
extern void *lbl_831BC768;
extern void *lbl_831BC770;

static void DestroyItem(Item **pp)
{
  if (*pp != 0) {
    fn_830245A0(*pp);
    fn_83024470(*pp);
    fn_830224E8((char *)*pp + 0x80);
    fn_82FA5190(lbl_831BC770, *pp);
    *pp = 0;
  }
}

int fn_83036810(Vec *v)
{
  unsigned int i;

  for (i = 0; i < (unsigned int)(v->end - v->begin); i++) {
    Elem *e = &v->begin[i];
    DestroyItem(&e->b);
    DestroyItem(&e->a);
  }
  if (v->begin != 0) {
    v->end = v->begin;
    fn_82FA5190(lbl_831BC768, v->begin);
    v->begin = 0;
    v->end = 0;
    v->cap = 0;
  }
  return 1;
}
