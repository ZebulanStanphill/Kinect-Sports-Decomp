extern unsigned char lbl_8200E81C[];

typedef struct Quad_8270D7A0 {
  float m00, m01, m02;
  float m10, m11, m12;
} Quad_8270D7A0;

typedef struct Map_8270D7A0 {
  char pad0[0x30];
  Quad_8270D7A0 pre;       /* 0x30 */
  char pad48[0x18];
  float xmin, ymin;        /* 0x60, 0x64 */
  float xmax, ymax;        /* 0x68, 0x6c */
  Quad_8270D7A0 post;      /* 0x70 */
  Quad_8270D7A0 region[1]; /* 0x88 */
} Map_8270D7A0;

void fn_8270D7A0(Map_8270D7A0 *m, float *px, float *py)
{
  float x = *px;
  float y = *py;
  Quad_8270D7A0 *q;
  int code, fx, fy, fxm, fym;
  *px = m->pre.m01 * y + m->pre.m00 * x + m->pre.m02;
  y = m->pre.m11 * y + m->pre.m10 * x + m->pre.m12;
  *py = y;
  x = *px;
  fx = x > m->xmax;
  fy = y > m->ymax;
  fxm = x < m->xmin;
  fym = y < m->ymin;
  code = ((fym << 1 | fxm) << 1 | fy) << 1 | fx;
  q = &m->region[lbl_8200E81C[code]];
  *px = q->m01 * y + q->m00 * x + q->m02;
  y = q->m11 * y + q->m10 * x + q->m12;
  *py = y;
  x = *px;
  *px = m->post.m01 * y + m->post.m00 * x + m->post.m02;
  *py = m->post.m11 * y + m->post.m10 * x + m->post.m12;
}
