typedef struct { int l, t, r, b; } Rect;
typedef struct { float x, y, pad[3]; } Vtx;
typedef struct {
  char pad0[0x50];
  Rect rect;
  Rect def;
  int useDefault;
  char pad74[0x90 - 0x74];
  Vtx v[6];
} Obj;
void *memcpy(void *dst, const void *src, unsigned int n);
extern int fn_82BFFF08(Obj *o);

int fn_82C00008(Obj *o, Rect *r)
{
  if (r == 0) {
    r = &o->def;
    o->useDefault = 1;
  }
  else {
    o->useDefault = 0;
    memcpy(&o->rect, r, sizeof(Rect));
  }
  o->v[0].x = (float)r->l;
  o->v[0].y = (float)r->t;
  o->v[1].x = (float)r->r;
  o->v[1].y = (float)r->t;
  o->v[2].x = (float)r->l;
  o->v[2].y = (float)r->b;
  o->v[3].x = (float)r->l;
  o->v[3].y = (float)r->b;
  o->v[4].x = (float)r->r;
  o->v[4].y = (float)r->t;
  o->v[5].x = (float)r->r;
  o->v[5].y = (float)r->b;
  fn_82BFFF08(o);
  return 0;
}
