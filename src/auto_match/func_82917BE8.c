typedef struct Vt_82917BE8 { void *f0; int (*f1)(void *); } Vt_82917BE8;
typedef struct Obj_82917BE8 { Vt_82917BE8 *vt; } Obj_82917BE8;
extern int memcmp(const void *,const void *,unsigned);
extern char lbl_8202F1FC[], lbl_8202F1EC[];
int fn_82917BE8(Obj_82917BE8 *self,const void *iid,void **out) {
 *out=0;
 if (memcmp(iid,lbl_8202F1FC,16)==0) *out=self;
 else if (memcmp(iid,lbl_8202F1EC,16)==0) *out=self;
 else return 0x80004002;
 self->vt->f1(self);
 return 0;
}
