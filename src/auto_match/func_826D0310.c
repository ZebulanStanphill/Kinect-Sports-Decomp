extern int *fn_8267BED0();
extern int fn_826EBE48();
extern int fn_82768EA0();

typedef struct Vec_826D0310 {
  int **first;
  int **last;
  unsigned int cap;
  int f;
} Vec_826D0310;
typedef struct Pool_826D0310 {
  int *base;
  int *cur;
  int *end;
  int *mark;
  Vec_826D0310 blocks;
} Pool_826D0310;

Pool_826D0310 *fn_826D0310(Pool_826D0310 *p)
{
  int *buf;
  int *tmp;
  Vec_826D0310 *v = &p->blocks;

  v->first = 0;
  v->last = 0;
  v->cap = 0;
  v->f = 0;
  buf = fn_8267BED0(p, 0x84, 0);
  tmp = buf;
  if (p->blocks.cap < 0xf) {
    fn_82768EA0(&p->blocks, &p->blocks, 0xf);
  }
  fn_826EBE48(&p->blocks, &tmp);
  p->cur = buf;
  p->end = buf + 0x20;
  p->base = buf;
  p->mark = buf;
  if (buf != 0) {
    *buf = 0;
  }
  return p;
}
