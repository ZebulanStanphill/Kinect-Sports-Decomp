extern int memcmp(const void *, const void *, unsigned);
extern char lbl_82153238[], lbl_8202F1FC[], lbl_82153178[], lbl_82153D7C[];
typedef struct Object_82E495F0 Object_82E495F0;
typedef struct Vtable_82E495F0 { void *f0; void (*f4)(Object_82E495F0 *); } Vtable_82E495F0;
struct Object_82E495F0 { Vtable_82E495F0 *vt; };
int fn_82E495F0(Object_82E495F0 *self, const char *iid, Object_82E495F0 **out) {
 int hr;
 if (out == 0) return 0x80070057;
 hr=0; *out=0;
 if (memcmp(iid,lbl_82153238,16)==0 || memcmp(iid,lbl_8202F1FC,16)==0) *out=self;
 else if (memcmp(iid,lbl_82153178,16)==0) *out=self ? (Object_82E495F0 *)((char *)self+8) : 0;
 else if (memcmp(iid,lbl_82153D7C,16)==0) *out=self ? (Object_82E495F0 *)((char *)self+4) : 0;
 else hr=0x80004002;
 if (hr==0) (*out)->vt->f4(*out);
 return hr;
}
