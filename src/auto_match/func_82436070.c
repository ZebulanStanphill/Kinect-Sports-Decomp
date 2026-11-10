struct Sub_82436070;
typedef struct SubVt_82436070 {
  int pad[15];
  unsigned char (*f3c)(struct Sub_82436070 *);
} SubVt_82436070;
typedef struct Sub_82436070 {
  SubVt_82436070 *vt;
} Sub_82436070;
typedef struct Ctx_82436070 {
  int pad[0x162];
  Sub_82436070 sub;
} Ctx_82436070;
struct Mgr_82436070;
typedef struct MgrVt_82436070 {
  int pad[2];
  Ctx_82436070 *(*f8)(struct Mgr_82436070 *);
} MgrVt_82436070;
typedef struct Mgr_82436070 {
  MgrVt_82436070 *vt;
} Mgr_82436070;
typedef struct Cfg_82436070 {
  int pad;
  char enabled;
} Cfg_82436070;
typedef struct Inner_82436070 {void *owner;int pad[102];int flag;} Inner_82436070;
typedef struct Obj_82436070 {char pad[0x40];Inner_82436070 *inner;} Obj_82436070;
typedef struct Owner_82436070 {char pad[0x168];Mgr_82436070 *mgr;} Owner_82436070;
extern Cfg_82436070 *fn_82250A18(void);
extern Cfg_82436070 *lbl_832975B0;
extern Owner_82436070 *fn_8242C1B8(void *);
extern int fn_8242E3E0(void *);
unsigned fn_82436070(Obj_82436070 *o) {
 Cfg_82436070 *c=lbl_832975B0?lbl_832975B0:fn_82250A18();
 Mgr_82436070 *m; Sub_82436070 *s;
 if(c->enabled && (m=fn_8242C1B8(o->inner->owner)->mgr)!=0) {
  s=&m->vt->f8(m)->sub;return s->vt->f3c(s)!=0;
 }
 if(o->inner->flag==0 && fn_8242E3E0(o->inner->owner)==0)return 0;
 return 1;
}
