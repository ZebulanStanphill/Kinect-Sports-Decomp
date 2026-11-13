typedef struct Vt_82F48D68 { void *f0; int (*f1)(void *); } Vt_82F48D68;
typedef struct Obj_82F48D68 { Vt_82F48D68 *vt; } Obj_82F48D68;
extern int memcmp(const void *,const void *,unsigned);
extern char lbl_8202F1FC[], lbl_82154C28[];
int fn_82F48D68(Obj_82F48D68 *self,const void *iid,void **out) {
 if (memcmp(iid,lbl_82154C28,16)==0) *out=self;
 else if (memcmp(iid,lbl_8202F1FC,16)==0) *out=self;
 else { *out=0; return 0x80004002; }
 self->vt->f1(self);
 return 0;
}
