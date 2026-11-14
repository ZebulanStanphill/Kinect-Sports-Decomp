typedef struct Request_82610C60 {
    void *state;
    void *event;
} Request_82610C60;

typedef struct Loader_82610C60 {
    char pad0[0x10];
    void *device;
    char pad14[8];
    void *archive;
    char pad20[0xc];
    void *task;
} Loader_82610C60;

extern unsigned int fn_827D50B8(void *task);
extern void fn_827D50C0(void *state, int code);
extern void fn_822315A0(void *event);
extern void fn_827D5078(void *state, unsigned int value);
extern void fn_827DEA50(void *device, void *archive);
extern void fn_82816F98(void *archive, int kind, unsigned int *out);
extern void *fn_828171A0(void *archive, const char *section);
extern void fn_827D5090(void *state, void *data);
extern void fn_827D50A8(void *state, void *data);

unsigned int fn_82610C60(Loader_82610C60 *self, int unused, Request_82610C60 *req)
{
    unsigned int status = fn_827D50B8(self->task);
    if (status == 0x3e5 || status == 0x3e4) {
        fn_827D50C0(req->state, 0x3e5);
        if (req->event != 0)
            fn_822315A0(req->event);
        return 0x3e5;
    }
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
        fn_827D50C0(req->state, 0);
        if (req->event != 0)
            fn_822315A0(req->event);
        return 0;
    }
    fn_827D5078(req->state, 0);
    if (req->event != 0)
        fn_822315A0(req->event);
    return 2;
}
