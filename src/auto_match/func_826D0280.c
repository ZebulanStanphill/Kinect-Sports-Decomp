extern char *fn_8267BED0();
extern int fn_826EBE48();
extern int fn_82768EA0();

typedef struct Vec_826D0280 {
  char **first;
  char **last;
  unsigned int cap;
  int f;
} Vec_826D0280;
typedef struct Pool_826D0280 {
  char *base;
  char *cur;
  char *end;
  char *mark;
  Vec_826D0280 blocks;
} Pool_826D0280;

Pool_826D0280 *fn_826D0280(Pool_826D0280 *p)
{
  char *buf;
  char *tmp;
  Vec_826D0280 *v = &p->blocks;

  v->first = 0;
  v->last = 0;
  v->cap = 0;
  v->f = 0;
  buf = fn_8267BED0(p, 0x208, 0);
  tmp = buf;
  if (p->blocks.cap < 0xf) {
    fn_82768EA0(&p->blocks, &p->blocks, 0xf);
  }
  fn_826EBE48(&p->blocks, &tmp);
  p->cur = buf;
  p->end = buf + 0x200;
  p->base = buf;
  p->mark = buf;
  if (buf != 0) {
    *buf = 0;
  }
  return p;
}
