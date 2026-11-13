typedef struct { void *begin; void *end; void *cap; } Vec_83013538;

extern int fn_82FA5190(unsigned int heap, void *p);
extern unsigned int lbl_831BC768;
extern Vec_83013538 lbl_832645D8;
extern Vec_83013538 lbl_832645E4;
extern Vec_83013538 lbl_832645F0;

static __forceinline void tidy(Vec_83013538 *v)
{
  if (v->begin != 0) {
    v->end = v->begin;
    fn_82FA5190(lbl_831BC768, v->begin);
    v->begin = 0;
    v->end = 0;
    v->cap = 0;
  }
}

int fn_83013538(void)
{
  tidy(&lbl_832645D8);
  tidy(&lbl_832645E4);
  tidy(&lbl_832645F0);
  return 1;
}
