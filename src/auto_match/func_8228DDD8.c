typedef struct G_8228DDD8 { int pad0; int pad4; int h8; } G_8228DDD8;
typedef struct Glob_8228DDD8 { unsigned int user; char pad4[0x41]; unsigned char online; } Glob_8228DDD8;
typedef struct Str_8228DDD8 {
    union { char buf[16]; char *ptr; } u;
    unsigned int size;
    unsigned int capacity;
} Str_8228DDD8;
typedef struct Obj_8228DDD8 { char pad[0x178]; void *dlg; char pad17c[0x1c]; int uploading; } Obj_8228DDD8;

extern unsigned short lbl_820E975C;
extern G_8228DDD8 lbl_83276728;
extern Glob_8228DDD8 lbl_83265988;
extern void fn_82528BF8(int, const char *, void *, int, int, int);
extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...);
extern Str_8228DDD8 *fn_82E1DAA0(unsigned int user);
extern void fn_8229E360(void *dlg, unsigned short *title, unsigned short *content);

void fn_8228DDD8(Obj_8228DDD8 *o)
{
    if (lbl_83265988.online != 0 && o->dlg != 0) {
        unsigned short title[0x100] = { lbl_820E975C };
        unsigned short uploading[0x400] = { lbl_820E975C };
        unsigned short content[0x400] = { lbl_820E975C };
        Str_8228DDD8 *name;
        unsigned int user = lbl_83265988.user;
        fn_82528BF8(lbl_83276728.h8, "uploadTitle", title, 0x100, 0, 1);
        fn_82528BF8(lbl_83276728.h8, "uploading", uploading, 0x400, 0, 1);
        name = fn_82E1DAA0(user);
        fn_82528EE0(content, 0x400, L"%S\n%s", name->capacity >= 16 ? name->u.ptr : name->u.buf, uploading);
        fn_8229E360(o->dlg, title, content);
        o->uploading = 1;
    }
}
