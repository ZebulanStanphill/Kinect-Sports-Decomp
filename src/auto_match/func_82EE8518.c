typedef struct Vt_82EE8518 { void *f0; int (*f1)(void *); } Vt_82EE8518;
typedef struct Obj_82EE8518 { Vt_82EE8518 *vt; } Obj_82EE8518;
extern int memcmp(const void *,const void *,unsigned);
extern char lbl_8202F1FC[], lbl_821531F8[];
int fn_82EE8518(Obj_82EE8518 *self,const void *iid,void **out) {
 if (memcmp(iid,lbl_821531F8,16)!=0 && memcmp(iid,lbl_8202F1FC,16)!=0) { *out=0; return 0x80004002; }
 *out=self;
 self->vt->f1(self);
 return 0;
}
