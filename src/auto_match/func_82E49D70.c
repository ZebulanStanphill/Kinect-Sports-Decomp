typedef struct Vt_82E49D70 { void *f0; int (*f1)(void *); } Vt_82E49D70;
typedef struct Obj_82E49D70 { Vt_82E49D70 *vt; } Obj_82E49D70;
extern int memcmp(const void *,const void *,unsigned);
extern char lbl_8202F1FC[], lbl_821531E8[];
int fn_82E49D70(Obj_82E49D70 *self,const void *iid,void **out) {
 if (memcmp(iid,lbl_8202F1FC,16)!=0 && memcmp(iid,lbl_821531E8,16)!=0) return 0x80004002;
 *out=self;
 self->vt->f1(self);
 return 0;
}
