extern int memcmp(const void *, const void *, unsigned);
extern char lbl_8215ED68[], lbl_8215464C[], lbl_8202F1FC[], lbl_82153E6C[], lbl_82153E5C[], lbl_82154C38[];
typedef struct Object_82E433D8 Object_82E433D8;
typedef struct Vtable_82E433D8 { void *f0; void (*f4)(Object_82E433D8 *); } Vtable_82E433D8;
struct Object_82E433D8 { Vtable_82E433D8 *vt; };
int fn_82E433D8(Object_82E433D8 *self, const char *iid, Object_82E433D8 **out) {
 int hr;
 if (out == 0) return 0x80070057;
 hr=0; *out=0;
 if (memcmp(iid,lbl_8215ED68,16)==0 || memcmp(iid,lbl_8215464C,16)==0 || memcmp(iid,lbl_8202F1FC,16)==0) *out=self;
 else if (memcmp(iid,lbl_82153E6C,16)==0) *out=self ? (Object_82E433D8 *)((char *)self+0x4) : 0;
 else if (memcmp(iid,lbl_82153E5C,16)==0) *out=self ? (Object_82E433D8 *)((char *)self+0x8) : 0;
 else if (memcmp(iid,lbl_82154C38,16)==0) *out=self ? (Object_82E433D8 *)((char *)self+0xc) : 0;
 else hr=0x80004002;
 if (hr==0) (*out)->vt->f4(*out);
 return hr;
}
