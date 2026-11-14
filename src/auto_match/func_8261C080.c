typedef struct Req_8261C080 {
    int f0;
    int f4;
    int f8;
    void *handle;
    int f10;
    int f14;
    int f18;
} Req_8261C080;

typedef struct Obj_8261C080 {
    char pad0[0x138];
    char ctx[0x100];
    int done;           /* 0x238 */
    Req_8261C080 req;   /* 0x23c */
    int result;         /* 0x258 */
} Obj_8261C080;

extern void fn_82A1E658(void *handle);
extern void XMemSet(void *dst, int c, unsigned int n);
extern int fn_82A264C8(void *ctx, Req_8261C080 *req);

static __forceinline void Reset_8261C080(Obj_8261C080 *self)
{
    if (self->req.handle != 0) {
        fn_82A1E658(self->req.handle);
    }
    XMemSet(&self->req, 0, sizeof(Req_8261C080));
}

void fn_8261C080(Obj_8261C080 *self)
{
    Reset_8261C080(self);
    Reset_8261C080(self);
    self->result = fn_82A264C8(self->ctx, &self->req);
    if (self->result == 0x3e5) {
        self->done = 1;
    }
}
