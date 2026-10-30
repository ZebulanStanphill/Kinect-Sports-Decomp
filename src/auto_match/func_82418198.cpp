class Svc_82418198 {
public:
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
  virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
  virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
  virtual void v25(); virtual void v26();
  virtual int Create(unsigned int a, void *b);
};
struct Ent_82418198 { char data[0x14]; int f14; char pad[0x1ac - 0x18]; };
struct Obj_82418198 {
  int pad0;
  Svc_82418198 *svc;
  Ent_82418198 *ents;
  char pad1[0x18 - 0xc];
  unsigned int idx;
  char pad2[0x27c - 0x1c];
  int state;
  char pad3[0x290 - 0x280];
  int r290;
  int r294;
};
extern "C" int fn_8241AFD0(Obj_82418198 *o, int r, int a, int b);
extern "C" int fn_8241C3A0(Obj_82418198 *o, void *buf);

extern "C" void fn_82418198(Obj_82418198 *o)
{
  char buf[104];
  int r;
  if (o->state == 0 || o->state == 1) {
    fn_8241C3A0(o, buf);
    r = o->svc->Create((unsigned int)(o->ents + o->idx), buf);
    if (o->r294 == 0) {
      fn_8241AFD0(o, r, o->ents[o->idx].f14, 0);
      o->r294 = r;
    }
    o->r290 = r;
  }
}
