typedef struct Req_8261C118 {
    int f0;
    int f4;
    int f8;
    void *handle;
    int f10;
    int f14;
    int f18;
} Req_8261C118;

typedef struct Content_8261C118 {
    unsigned long deviceId;
    char rest[0x134 - 4];
} Content_8261C118;

typedef struct Obj_8261C118 {
    void *player;
    Content_8261C118 content;  /* 0x4 */
    char rootName[0x100];      /* 0x138 */
    int done;                  /* 0x238 */
    Req_8261C118 req;          /* 0x23c */
    int result;                /* 0x258 */
} Obj_8261C118;

extern void fn_82A1E658(void *handle);
extern void XMemSet(void *dst, int c, unsigned int n);
extern unsigned long fn_82A264D8(unsigned long deviceId, void *overlapped);
extern unsigned long fn_823AB478(void *player);
extern unsigned long fn_82A26568(unsigned long userIndex, const char *rootName, const void *contentData,
                                 unsigned long contentFlags, unsigned long *disposition,
                                 unsigned long *licenseMask, void *overlapped);

static __forceinline void Reset_8261C118(Obj_8261C118 *self)
{
    if (self->req.handle != 0) {
        fn_82A1E658(self->req.handle);
    }
    XMemSet(&self->req, 0, sizeof(Req_8261C118));
}

void fn_8261C118(Obj_8261C118 *self, unsigned long flags)
{
    Reset_8261C118(self);
    if (fn_82A264D8(self->content.deviceId, 0) == 0) {
        unsigned long user = fn_823AB478(self->player);
        self->result = fn_82A26568(user, self->rootName, &self->content, flags, 0, 0,
                                   &self->req);
    } else {
        self->result = 0x48f;
    }
    if (self->result == 0x3e5) {
        self->done = 1;
    }
}
