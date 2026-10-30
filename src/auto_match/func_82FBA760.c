typedef struct Al_82FBA760 Al_82FBA760;
typedef struct AVt_82FBA760 { void *pad; void *(*alloc)(Al_82FBA760 *, int); } AVt_82FBA760;
struct Al_82FBA760 { AVt_82FBA760 *vt; };
typedef struct Data_82FBA760 { unsigned char b[0x44]; } Data_82FBA760;
typedef struct Obj_82FBA760 { void *vt; Data_82FBA760 d; unsigned char f48, f49, f4a; } Obj_82FBA760;
typedef struct Src_82FBA760 { int pad; Data_82FBA760 d; } Src_82FBA760;
extern char lbl_8216DA40[];
Obj_82FBA760 *fn_82FBA760(Src_82FBA760 *src, Al_82FBA760 *al)
{
  Obj_82FBA760 *o = (Obj_82FBA760 *)al->vt->alloc(al, 0x4c);
  if (o != 0) {
    o->vt = lbl_8216DA40;
    o->d = src->d;
    o->f48 = 1;
    o->f49 = 1;
    o->f4a = 1;
    return o;
  }
  return 0;
}
