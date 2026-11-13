extern void fn_8288B300(void *p, int n);
extern void fn_82240DB8(void *p, int n);
extern void *fn_8265C9E0(unsigned int size);
extern void fn_8223B8C8(void *p);
extern void *memset(void *, int, unsigned int);
extern char lbl_821974A4[];
extern char lbl_82197590[];
extern char lbl_82197524[];
extern char lbl_82197534[];

typedef struct Buf_82242620 {
  int cap;
  void *data;
  int size;
} Buf_82242620;

typedef struct Sub_82242620 {
  void *vt;
  int f04;
  Buf_82242620 buf;
} Sub_82242620;

typedef struct Sub2_82242620 {
  void *vt;          /* 0xf4 */
  int f04;
  int f08;           /* 0xfc */
  int f0c;           /* 0x100 */
  char pad10[0x48];
  unsigned char f58; /* 0x14c */
  int f5c;           /* 0x150 */
  int f60;           /* 0x154 */
  int f64;           /* 0x158 */
} Sub2_82242620;

typedef struct Obj_82242620 {
  void *vt;
  char pad04[0x30];
  Sub_82242620 s;    /* 0x34 */
  char pad48[0x44];
  char f8c[0x68];
  Sub2_82242620 s2;  /* 0xf4 */
} Obj_82242620;

static __forceinline void BufInit_82242620(Buf_82242620 *b)
{
  void *d;
  b->cap = 7;
  b->size = 0x3e;
  d = fn_8265C9E0(0x3e);
  memset(d, 0, 0x3e);
  b->data = d;
}

Obj_82242620 *fn_82242620(Obj_82242620 *p)
{
  Sub2_82242620 *s2;
  fn_8288B300(p, 1);
  p->vt = lbl_821974A4;
  fn_82240DB8(&p->s, 1);
  p->s.vt = lbl_82197590;
  BufInit_82242620(&p->s.buf);
  p->s.vt = lbl_82197524;
  fn_8223B8C8(p->f8c);
  fn_82240DB8(&p->s2, 3);
  s2 = &p->s2;
  s2->f58 = 0;
  s2->f5c = 0;
  s2->f60 = -1;
  s2->f64 = 0x20;
  s2->f08 = 4;
  s2->f0c = 0;
  p->s2.vt = lbl_82197534;
  return p;
}
