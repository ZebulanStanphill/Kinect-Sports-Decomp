extern void fn_826944C8(void *);
extern void fn_826C1AD8(void *);
extern void fn_826C26B0(void *);
extern char lbl_8200E898[];
extern char lbl_8200E89C[];
extern char lbl_8200E980[];

typedef struct { int a; int b; int count; } R;
typedef struct {
  void *vt;
  int pad[3];
  void *vt2;
  int pad2[7];
  R *rc;
  void *vt3;
} P;

void fn_82710740(P *p)
{
  R *r;
  p->vt = lbl_8200E89C;
  p->vt2 = lbl_8200E980;
  p->vt3 = lbl_8200E898;
  fn_826C26B0(&p->vt3);
  r = p->rc;
  if (--r->count == 0) {
    fn_826944C8(r);
  }
  fn_826C1AD8(p);
}
