typedef struct Obj Obj;

typedef struct ObjVtbl {
  char pad0[0x6c];
  int (*f6c)(Obj *o, int arg);
  char pad1[0x7c - 0x70];
  int (*f7c)(Obj *o, int arg);
  char pad2[0x84 - 0x80];
  int (*f84)(Obj *o, int arg);
} ObjVtbl;

struct Obj {
  ObjVtbl *vt;
  int pad0[2];
  int xc;
  int pad1;
  int x14;
  int pad2[6];
  int x30;
  int pad3[12];
  int x64;
  int x68;
  int x6c;
  int x70;
  int x74;
  int pad4;
  int x7c;
};

typedef struct Elem {
  char pad[0x20];
  float f;
} Elem;

typedef struct Tbl {
  Elem **items;
  int pad[3];
  int cur;
} Tbl;

typedef struct Ctx {
  int pad[2];
  Tbl ***tbl;
} Ctx;

extern void fn_8239D490(Ctx *c, int a, int n);
extern void fn_8239D8B0(Ctx *c, int n);
extern int lbl_83276574;

int fn_823AB1F0(Obj *param_1, Ctx *param_2, int param_3, int param_4, int param_5)
{

  int n;
  Tbl *t;

  if (param_1->vt->f84(param_1, param_3) == 0) {
    return 1;
  }
  param_1->x7c = 1;
  if (param_4 == param_1->vt->f7c(param_1, param_3)) {
    if (param_1->x64 == param_4) {
      param_1->x68 = 1;
      param_1->x6c = 7;
      return 1;
    }
  } else if (param_1->vt->f6c(param_1, param_3) == 0) {
    if (param_1->x64 == param_4) {
      param_1->x70 = param_4;
      param_1->x74 = param_5;
      param_1->x68 = 1;
      param_1->x6c = 0;
      return 1;
    }
  } else {
    if (param_1->x64 == param_4) {
      t = **param_2->tbl;
      n = (int)t->items[t->cur]->f + 1;
      fn_8239D490(param_2, 0, n);
      if (lbl_83276574 < n) {
        lbl_83276574 = n;
      }
      fn_8239D8B0(param_2, n);
    }
    param_1->xc = param_4;
    param_1->x14 = param_5;
  }
  param_1->x30 = 0;
  return 0;
}
