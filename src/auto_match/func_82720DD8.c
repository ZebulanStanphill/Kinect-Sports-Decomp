typedef struct Rc_82720F48 {
    int pad[2];
    int count;
} Rc_82720F48;

typedef struct Inner_82720F48 {
    char pad[0xc];
    Rc_82720F48 *rc;
} Inner_82720F48;

typedef struct Obj_82720F48 {
    char pad[0x80];
    int inner;
} Obj_82720F48;

typedef struct Settings_82720DD8 {
    char pad0[0x2a4];
    unsigned char mode; /* 0x2a4 */
} Settings_82720DD8;

typedef struct Context_82720DD8 {
    char pad0[0x78];
    Settings_82720DD8 *settings; /* 0x78 */
} Context_82720DD8;

typedef struct Pointer_82720DD8 {
    char pad0[0x14];
    float x; /* 0x14 */
    float y; /* 0x18 */
    char pad1c[8];
} Pointer_82720DD8;

typedef struct Input_82720DD8 {
    char pad0[0x944];
    Pointer_82720DD8 pointers[4]; /* 0x944 */
} Input_82720DD8;

typedef struct Tracker_82720DD8 {
    char pad0[8];
    int x;             /* 0x08 */
    int y;             /* 0x0c */
    unsigned int time; /* 0x10 */
} Tracker_82720DD8;

extern void fn_82720D48(char *owner, void *ctx, int a, int index, Rc_82720F48 **rc, int d, int e,
                        unsigned char f);
extern Inner_82720F48 *fn_8269F500(Obj_82720F48 *obj);
extern void fn_826944C8(Rc_82720F48 *rc);
extern unsigned __int64 fn_826933E8(void);
extern Input_82720DD8 *fn_826A7398(Context_82720DD8 *ctx);

void fn_82720DD8(Tracker_82720DD8 *self, Context_82720DD8 *ctx, unsigned int index, int e, Obj_82720F48 *obj)
{
    unsigned char unchanged = 0;
    unsigned int now;
    Input_82720DD8 *input;
    Pointer_82720DD8 *pointer;
    int x;
    int y;
    Inner_82720F48 *inner;
    Rc_82720F48 *rc;

    if (ctx->settings->mode == 1) {
        now = (unsigned int)(fn_826933E8() / 1000);
        input = fn_826A7398(ctx);
        if (index >= 4) {
            pointer = 0;
        } else {
            pointer = &input->pointers[index];
        }
        x = (int)(pointer->x * 0.05f);
        y = (int)(pointer->y * 0.05f);
        if (now <= self->time + 300 && self->x == x && self->y == y) {
            unchanged = 1;
        }
        self->x = x;
        self->y = y;
        self->time = now;
    }
    if (obj != 0) {
        if (obj->inner != 0) {
            inner = (Inner_82720F48 *)obj->inner;
        } else {
            inner = fn_8269F500(obj);
        }
        rc = inner->rc;
        rc->count = rc->count + 1;
        fn_82720D48((char *)self - 0x34, ctx, index, 100, &rc, e, 0, unchanged);
        {
            Rc_82720F48 *r = rc;
            if (--r->count == 0) {
                fn_826944C8(r);
            }
        }
    } else {
        fn_82720D48((char *)self - 0x34, ctx, index, 100, 0, e, 0, unchanged);
    }
}
