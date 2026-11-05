struct Msg_82FB02C8 { int kind; int f4; unsigned state; int f0c; int f10; unsigned char f14; };
struct Child_82FB02C8 {
  virtual void v0() {}
  virtual void v1() {}
  virtual void v2() {}
  virtual void v3() {}
  virtual void v4() {}
  virtual void v5() {}
  virtual void v6() {}
  virtual void v7() {}
  virtual int f8(Msg_82FB02C8 *m);
  int f4; int f8x; int fc; int f10; int f14;
};
struct Pair_82FB02C8 { int a; Child_82FB02C8 *c; };
struct Obj_82FB02C8 {
  virtual void v0() {}
  virtual void v1() {}
  virtual void v2() {}
  virtual void v3() {}
  virtual void v4() {}
  virtual void v5() {}
  virtual void v6() {}
  virtual void v7() {}
  virtual void v8() {}
  virtual void v9() {}
  virtual void v10() {}
  virtual void v11() {}
  virtual void v12() {}
  virtual void v13() {}
  virtual void v14() {}
  virtual void v15() {}
  virtual void v16() {}
  virtual void v17() {}
  virtual void v18() {}
  virtual void v19() {}
  virtual void v20() {}
  virtual void v21() {}
  virtual void v22() {}
  virtual void v23() {}
  virtual void v24() {}
  virtual void v25() {}
  virtual void v26() {}
  virtual void v27() {}
  virtual void v28() {}
  virtual void v29() {}
  virtual void v30() {}
  virtual void v31() {}
  virtual void v32() {}
  virtual void v33() {}
  virtual void v34() {}
  virtual void v35() {}
  virtual void v36() {}
  virtual void v37() {}
  virtual void v38() {}
  virtual void v39() {}
  virtual void f40(int flag);
  char pad[0x7c - 4];
  Pair_82FB02C8 *b;
  Pair_82FB02C8 *e;
};
extern "C" unsigned char fn_82FFF8C0(Obj_82FB02C8 *, int, int);
static __forceinline unsigned char chk(Obj_82FB02C8 *o, Child_82FB02C8 *c, Msg_82FB02C8 *m) { int a = c->fc; return fn_82FFF8C0(o, a, m->f4); }

extern "C" int fn_82FB02C8(Obj_82FB02C8 *o, Msg_82FB02C8 *m)
{
  int r = 1;
  if (m->state == 0) {
    int fl = 0;
    if (m->kind == 2) fl = 1;
    o->f40(fl);
  }
  Pair_82FB02C8 *p = o->b;
  if (p != o->e) {
    do {
      Child_82FB02C8 *c = p->c;
      if ((m->f14 == 0 || c->f14 == 0) && chk(o, c, m) == 0) {
        r = c->f8(m);
        if (r != 1) return r;
      }
      p++;
    } while (p != o->e);
  }
  return r;
}
