typedef struct { void (*f[4])(void *,unsigned); } Vt_8257C8F0;
typedef struct { Vt_8257C8F0 *vt; } Item_8257C8F0;
typedef struct { Item_8257C8F0 *obj; unsigned data; } Entry_8257C8F0;
typedef struct { char pad[0x310]; Entry_8257C8F0 *begin,*end; } Obj_8257C8F0;
extern int fn_825597C0(void);
extern void fn_82558B08(void);
void fn_8257C8F0(Obj_8257C8F0 *o,unsigned arg) {
 Entry_8257C8F0 *p=o->begin,*end=o->end;
 if(fn_825597C0()) {
  for(;p<end;p++) { fn_82558B08(); p->obj->vt->f[3](p->obj,arg); }
 } else {
  for(;p<end;p++) { p->obj->vt->f[3](p->obj,arg); }
 }
}
