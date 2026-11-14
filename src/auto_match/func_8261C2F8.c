typedef struct Overlapped_8261C2F8 { unsigned int internalLow; unsigned int internalHigh; void *event; unsigned int pad; void *busy; } Overlapped_8261C2F8;
typedef struct Obj_8261C2F8 {
    unsigned char pad[0x304];
    void *handle;
    int failed;
    Overlapped_8261C2F8 overlapped;
    int status;
} Obj_8261C2F8;

extern void fn_82A1E658(void *p);
extern void XMemSet(void *dst, int c, unsigned int n);
extern int fn_82A2A108(void *handle, int a, int b, unsigned int *out, Overlapped_8261C2F8 *ov);
extern int fn_82A1F470(void);

unsigned int fn_8261C2F8(Obj_8261C2F8 *self, int a, int b, void *event)
{
    unsigned int result;
    Overlapped_8261C2F8 *ov;

    if (event == (void *)-1) {
        ov = 0;
    } else {
        if (self->overlapped.busy != 0) {
            fn_82A1E658(self->overlapped.busy);
        }
        XMemSet(&self->overlapped, 0, sizeof(self->overlapped));
        self->overlapped.event = event;
        ov = &self->overlapped;
    }
    if (fn_82A2A108(self->handle, a, b, &result, ov) == 0) {
        self->status = fn_82A1F470();
        if (self->status == 0x3e5) {
            self->failed = 1;
        }
    }
    return result;
}
