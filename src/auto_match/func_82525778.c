extern void fn_8265CA20(void *p);

typedef struct Inner {
  char pad[0x2c];
  void *p2c;
} Inner;

typedef struct Outer {
  char pad[0xb68];
  int fb68;
  char pad2[0xb7c - 0xb6c];
  Inner *fb7c;
  int fb80;
} Outer;

typedef struct Obj {
  struct { void (*f0)(struct Obj *, int); } *vt;
} Obj;

void fn_82525778(Outer *param_1, Obj *param_2)
{
  if (param_2 != 0) {
    param_2->vt->f0(param_2, 1);
  }
  if (param_1->fb7c != 0) {
    if (param_1->fb7c->p2c != 0) {
      fn_8265CA20(param_1->fb7c->p2c);
      param_1->fb7c->p2c = 0;
    }
    if (param_1->fb7c != 0) {
      fn_8265CA20(param_1->fb7c);
      param_1->fb7c = 0;
    }
  }
  param_1->fb80 = 0;
  param_1->fb68 = 0;
}
