extern void fn_8288B300(void *p, int n);
extern void fn_8223B930(void *p);
extern void fn_82240DB8(void *p, int n);
extern void *fn_8265C9E0(unsigned int size);
extern void *memset(void *, int, unsigned int);
extern char lbl_82196D80[];
extern char lbl_82196CA0[];
extern char lbl_82196D88[];
extern char lbl_82196CD0[];
extern char lbl_82196D28[];

typedef struct Sub_82233640 {
  void *vtbl;
  int pad;
  int a;
  int b;
  int n;
  char rest[0x44];
} Sub_82233640;

typedef struct Buf_82233640 {
  int cap;
  void *data;
  int size;
} Buf_82233640;

typedef struct BufSub_82233640 {
  void *vt;
  int f04;
  Buf_82233640 buf;
  char rest[0x44];
} BufSub_82233640;

typedef struct Obj_82233640 {
  void *vt;
  char pad04[0x30];
  char f34[0x68];
  char f9c[0x68];
  Sub_82233640 s1;
  BufSub_82233640 s2;
  Sub_82233640 s3;
} Obj_82233640;

static __forceinline void BufInit_82233640(Buf_82233640 *b)
{
  void *d;
  b->cap = 7;
  b->size = 8;
  d = fn_8265C9E0(8);
  memset(d, 0, 8);
  b->data = d;
}

Obj_82233640 *fn_82233640(Obj_82233640 *p)
{
  Sub_82233640 *s;

  fn_8288B300(p, 1);
  p->vt = lbl_82196D80;
  fn_8223B930(p->f34);
  fn_8223B930(p->f9c);
  s = &p->s1;
  fn_82240DB8(s, 1);
  s->a = 7;
  s->n = 4;
  s->b = 0;
  p->s1.vtbl = lbl_82196CA0;
  fn_82240DB8(&p->s2, 1);
  p->s2.vt = lbl_82196D88;
  BufInit_82233640(&p->s2.buf);
  p->s2.vt = lbl_82196CD0;
  s = &p->s3;
  fn_82240DB8(s, 1);
  s->a = 7;
  s->n = 4;
  s->b = 0;
  p->s3.vtbl = lbl_82196D28;
  return p;
}
