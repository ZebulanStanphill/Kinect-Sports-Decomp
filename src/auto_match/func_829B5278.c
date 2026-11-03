typedef struct Cinfo_829B5278 Cinfo_829B5278;
typedef struct Err_829B5278 {
  void (*error_exit)(Cinfo_829B5278 *);
  int pad4[4];
  int msg_code;
  int p0, p1;
} Err_829B5278;
typedef struct Comp_829B5278 {
  int id, index, h, v, q, dc, ac;
  int wib, hib, dct, dw, dh, needed;
  int pad[6];
  int tbl;
  int pad2;
} Comp_829B5278;
typedef struct Master_829B5278 { int pad[4]; int flag; } Master_829B5278;
struct Cinfo_829B5278 {
  Err_829B5278 *err;
  int pad4[6];
  int width;
  int height;
  int ncomp;
  char pad28[0xb0];
  int precision;
  Comp_829B5278 *comp;
  int progressive;
  char pad_e4[0x54];
  int max_h;
  int max_v;
  int min_dct;
  int rows;
  char pad_144[4];
  int nscans;
  char pad_150[0x68];
  Master_829B5278 *master;
};
extern int fn_829B7760(int, int);

void fn_829B5278(Cinfo_829B5278 *c)
{
  int ci;
  Comp_829B5278 *p;
  int t;
  if (c->height > 0xffdc || c->width > 0xffdc) {
    c->err->msg_code = 0x29;
    c->err->p0 = 0xffdc;
    c->err->error_exit(c);
  }
  if (c->precision != 8) {
    c->err->msg_code = 0xf;
    c->err->p0 = c->precision;
    c->err->error_exit(c);
  }
  if (c->ncomp > 10) {
    c->err->msg_code = 0x1a;
    c->err->p0 = c->ncomp;
    c->err->p1 = 10;
    c->err->error_exit(c);
  }
  c->max_h = 1;
  c->max_v = 1;
  p = c->comp;
  for (ci = 0; ci < c->ncomp; ci++, p++) {
    if (p->h <= 0 || p->h > 4 || p->v <= 0 || p->v > 4) {
      c->err->msg_code = 0x12;
      c->err->error_exit(c);
    }
    t = c->max_h;
    if (t <= p->h) t = p->h;
    c->max_h = t;
    t = c->max_v;
    if (t <= p->v) t = p->v;
    c->max_v = t;
  }
  c->min_dct = 8;
  p = c->comp;
  for (ci = 0; ci < c->ncomp; ci++, p++) {
    p->dct = 8;
    p->wib = fn_829B7760(p->h * c->width, c->max_h * 8);
    p->hib = fn_829B7760(p->v * c->height, c->max_v * 8);
    p->dw = fn_829B7760(p->h * c->width, c->max_h);
    p->dh = fn_829B7760(p->v * c->height, c->max_v);
    p->needed = 1;
    p->tbl = 0;
  }
  c->rows = fn_829B7760(c->height, c->max_v * 8);
  if (c->nscans < c->ncomp || c->progressive != 0) {
    c->master->flag = 1;
  } else {
    c->master->flag = 0;
  }
}
