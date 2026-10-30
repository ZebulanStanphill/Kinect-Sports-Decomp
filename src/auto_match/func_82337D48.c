struct Sub_82337D48;
typedef struct SubVt_82337D48 {
  int pad[15];
  unsigned char (*f3c)(struct Sub_82337D48 *);
} SubVt_82337D48;
typedef struct Sub_82337D48 {
  SubVt_82337D48 *vt;
} Sub_82337D48;
typedef struct Ctx_82337D48 {
  int pad[0x177];
  Sub_82337D48 sub;
} Ctx_82337D48;
struct Mgr_82337D48;
typedef struct MgrVt_82337D48 {
  int pad[2];
  Ctx_82337D48 *(*f8)(struct Mgr_82337D48 *);
} MgrVt_82337D48;
typedef struct Mgr_82337D48 {
  MgrVt_82337D48 *vt;
} Mgr_82337D48;
typedef struct Cfg_82337D48 {
  int pad;
  char enabled;
} Cfg_82337D48;
typedef struct Inner_82337D48 {
  int pad[0x61];
  unsigned int f184;
} Inner_82337D48;
typedef struct Obj_82337D48 {
  int pad0[0x5a];
  Mgr_82337D48 *mgr;
  int pad1[13];
  Inner_82337D48 *inner;
} Obj_82337D48;

extern Cfg_82337D48 *fn_82250A18(void);
extern Cfg_82337D48 *lbl_832975B0;

unsigned int fn_82337D48(Obj_82337D48 *o)
{
  Cfg_82337D48 *c = lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
  Mgr_82337D48 *m;
  Sub_82337D48 *s;
  if (c->enabled != 0 && (m = o->mgr) != 0) {
    s = &m->vt->f8(m)->sub;
    return s->vt->f3c(s) != 0;
  }
  return o->inner->f184;
}
