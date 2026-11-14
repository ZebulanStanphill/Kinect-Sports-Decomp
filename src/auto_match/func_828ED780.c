typedef struct Res_828ED780 {
  char pad0[8];
  unsigned char kind;
  char pad9[7];
  unsigned val;
} Res_828ED780;

typedef struct Obj_828ED780 Obj_828ED780;
typedef struct {
  void *f0[4];
  Res_828ED780 *(*f10)(Obj_828ED780 *);
} Vt_828ED780;
struct Obj_828ED780 {
  Vt_828ED780 *vt;
};

unsigned fn_828ED780(Obj_828ED780 *self, int a, int b, unsigned char *out)
{
  Res_828ED780 *r;
  unsigned v;

  v = 0;
  r = self->vt->f10(self);
  if (r != 0 && r->kind == 1) {
    v = r->val;
    if (out != 0) {
      *out = r->kind;
    }
  } else {
    if (out != 0) {
      *out = 0;
    }
  }
  return v;
}
