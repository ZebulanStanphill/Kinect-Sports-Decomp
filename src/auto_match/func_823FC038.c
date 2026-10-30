typedef struct SP_823FC038 {
  void *ptr;
  void *rc;
} SP_823FC038;
typedef struct Self_823FC038 {
  void *vt;
  int f4;
  int f8;
  char body[1];
} Self_823FC038;

extern unsigned char fn_8223AAC0(void *);
extern void *fn_82365BD8(void *, void *);
extern void fn_823FD088(void *, void *, SP_823FC038 *, void *, void *, SP_823FC038 *);
extern char lbl_821AD588[];

Self_823FC038 *fn_823FC038(Self_823FC038 *self, void *a, SP_823FC038 *w3, void *b, void *c, SP_823FC038 *w6)
{
  struct {
    SP_823FC038 p3;
    SP_823FC038 p6;
    char t1[8];
    char t2[8];
    char t3[8];
  } L;
  void *rc;
  void *ptr;
  self->f4 = 1;
  self->vt = lbl_821AD588;
  self->f8 = 1;
  if (self->body != 0) {
    rc = w6->rc;
    ptr = w6->ptr;
    L.p6.ptr = 0;
    L.p6.rc = 0;
    if (rc != 0) {
      if (fn_8223AAC0(rc) != 0) {
        L.p6.rc = rc;
        L.p6.ptr = ptr;
      }
    }
    rc = w3->rc;
    ptr = w3->ptr;
    L.p3.ptr = 0;
    L.p3.rc = 0;
    if (rc != 0) {
      if (fn_8223AAC0(rc) != 0) {
        L.p3.rc = rc;
        L.p3.ptr = ptr;
      }
    }
    fn_823FD088(self->body, fn_82365BD8(L.t3, a), &L.p3, fn_82365BD8(L.t2, b), fn_82365BD8(L.t1, c), &L.p6);
  }
  return self;
}
