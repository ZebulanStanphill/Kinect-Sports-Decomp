typedef struct Node_828ED880 {
  int pad[2];
  unsigned char type;
  char pad9[0xb];
  int f14;
} Node_828ED880;

typedef struct VT_828ED880 {
  int pad[4];
  Node_828ED880 *(*f10)(void *self);
} VT_828ED880;

typedef struct Obj_828ED880 {
  VT_828ED880 *vt;
} Obj_828ED880;

int fn_828ED880(Obj_828ED880 *o, int a, int b, unsigned char *ok)
{
  int r = 0;
  Node_828ED880 *n = o->vt->f10(o);

  if (n != 0 && n->type == 4) {
    r = n->f14;
    if (ok != 0) {
      *ok = 1;
    }
  } else {
    if (ok != 0) {
      *ok = (unsigned char)r;
    }
  }
  return r;
}
