extern int memcmp(const void *, const void *, unsigned);
extern char lbl_8215466C[], lbl_82153178[], lbl_8202F1FC[], lbl_821545BC[], lbl_8215FA24[];
typedef struct Object_82E51038 Object_82E51038;
typedef struct Vtable_82E51038 { void *f0; void (*f4)(Object_82E51038 *); } Vtable_82E51038;
struct Object_82E51038 { Vtable_82E51038 *vt; };
int fn_82E51038(Object_82E51038 *self, const char *iid, Object_82E51038 **out) {
 int hr;
 if (out == 0) return 0x80070057;
 hr=0; *out=0;
 if (memcmp(iid,lbl_8215466C,16)==0 || memcmp(iid,lbl_82153178,16)==0 || memcmp(iid,lbl_8202F1FC,16)==0) *out=self;
 else if (memcmp(iid,lbl_821545BC,16)==0) *out=self ? (Object_82E51038 *)((char *)self+0x4c) : 0;
 else if (memcmp(iid,lbl_8215FA24,16)==0) *out=self ? (Object_82E51038 *)((char *)self+0x50) : 0;
 else hr=0x80004002;
 if (hr==0) (*out)->vt->f4(*out);
 return hr;
}
