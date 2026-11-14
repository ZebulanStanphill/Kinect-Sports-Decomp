typedef struct Request_82628AC0 {
    void *state;
    void *event;
} Request_82628AC0;

typedef struct Loader_82628AC0 {
    char pad0[0xc];
    void *name;         /* 0x0c */
    void *device;       /* 0x10 */
    void *cache;        /* 0x14 */
    char pad18[4];
    void *archive;      /* 0x1c */
    char pad20[4];
    int task0;          /* 0x24 */
    char pad28[4];
    int task1;          /* 0x2c */
    char pad30[4];
    int task2;          /* 0x34 */
} Loader_82628AC0;

extern int fn_827D50F8(void *state);
extern void fn_827D9D48(void *name);
extern int fn_827DA480(void *cache, void *name);
extern unsigned int fn_827D50B8(int task);
extern void fn_827D50C0(void *state, int code);
extern void fn_822315A0(void *event);
extern void fn_827D5078(void *state, unsigned int value);
extern void fn_827DEA50(void *device, void *archive);
extern void fn_82816F98(void *archive, int kind, unsigned int *out);
extern void *fn_828171A0(void *archive, const char *section);
extern void fn_827D5090(void *state, void *data);
extern void fn_827D50A8(void *state, void *data);

/* Sibling of Matching fn_82610C60. */
unsigned int fn_82628AC0(Loader_82628AC0 *self, int unused, Request_82628AC0 *req)
{
    unsigned int status;

    if (fn_827D50F8(req->state) != 0)
        fn_827D9D48(self->name);
    if (fn_827DA480(self->cache, self->name) == 0) {
        if (self->archive != 0) {
            unsigned int size;
            void *state;
            void *data;
            fn_827DEA50(self->device, self->archive);
            fn_82816F98(self->archive, 1, &size);
            state = req->state;
            data = fn_828171A0(self->archive, ".data");
            fn_827D5090(state, data);
            state = req->state;
            data = fn_828171A0(self->archive, ".gpu");
            fn_827D50A8(state, data);
            fn_827D5078(req->state, size);
            if (req->event != 0)
                fn_822315A0(req->event);
            return 0;
        }
        status = 0x65b;
        if (self->task0 != 0 && (status = fn_827D50B8(self->task0)) == 0
            && self->task1 != 0 && (status = fn_827D50B8(self->task1)) == 0
            && self->task2 != 0)
            status = fn_827D50B8(self->task2);
        fn_827D5078(req->state, 0);
        if (req->event != 0)
            fn_822315A0(req->event);
        return status;
    }
    fn_827D50C0(req->state, 0x3e5);
    if (req->event != 0)
        fn_822315A0(req->event);
    return 0x3e5;
}
