typedef struct Sub_8236D958 {
  void *vt;
  struct Sub_8236D958 *a;
  struct Sub_8236D958 *b;
  int c;
  int d;
} Sub_8236D958;
typedef struct {
  void *vt;
  char pad[0x64];
  Sub_8236D958 sub;
} Obj_8236D958;
extern void fn_82895048(void *, void *, int);
extern char lbl_82197CE0[];
extern char lbl_821B3080[];
extern char lbl_821B96A8[];
Obj_8236D958 *fn_8236D958(Obj_8236D958 *self, void *arg)
{
  Sub_8236D958 *q;
  fn_82895048(self, arg, 3);
  q = &self->sub;
  (*q).vt = lbl_82197CE0;
  self->sub.c = 0;
  (*q).b = (Sub_8236D958 *)&(*q).a;
  (*q).a = (Sub_8236D958 *)&(*q).a;
  (*q).d = 0;
  self->vt = lbl_821B3080;
  self->sub.vt = lbl_821B96A8;
  return self;
}
