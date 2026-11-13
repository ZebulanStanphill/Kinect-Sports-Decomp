typedef struct Vt_828F9940 { void *f0; int (*f1)(void *); } Vt_828F9940;
typedef struct Obj_828F9940 { Vt_828F9940 *vt; } Obj_828F9940;
extern int memcmp(const void *,const void *,unsigned);
extern char lbl_8202F1FC[], lbl_8202F1DC[];
int fn_828F9940(Obj_828F9940 *self,const void *iid,void **out) {
 *out=0;
 if (memcmp(iid,lbl_8202F1FC,16)==0) *out=self;
 else if (memcmp(iid,lbl_8202F1DC,16)==0) *out=self;
 else return 0x80004002;
 self->vt->f1(self);
 return 0;
}
