typedef struct Node_828ED800 {
  int pad[2];
  unsigned char type;
  char pad9[7];
  __int64 f10;
} Node_828ED800;

typedef struct VT_828ED800 {
  int pad[4];
  Node_828ED800 *(*f10)(void *self);
} VT_828ED800;

typedef struct Obj_828ED800 {
  VT_828ED800 *vt;
} Obj_828ED800;

__int64 fn_828ED800(Obj_828ED800 *o, int a, int b, unsigned char *ok)
{
  __int64 r = 0;
  Node_828ED800 *n = o->vt->f10(o);

  if (n != 0 && n->type == 2) {
    r = n->f10;
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
