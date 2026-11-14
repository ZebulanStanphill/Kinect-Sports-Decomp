typedef struct FuncImpl_82456D58 FuncImpl_82456D58;
typedef struct {
    void *f0;
    void (*call)(FuncImpl_82456D58 *);
} FuncImplVt_82456D58;
struct FuncImpl_82456D58 {
    FuncImplVt_82456D58 *vt;
};

typedef struct {
    char pad0[0x10];
    FuncImpl_82456D58 *impl;
} Function_82456D58;

typedef struct {
    char pad0[0x1c];
    int pending;
    char pad20[0x3c - 0x20];
    int active;
    char pad40[0x48 - 0x40];
    int count;
} Track_82456D58;

typedef struct {
    char pad0[0x8];
    char lock[0x70 - 0x8];
    Track_82456D58 *track;
    unsigned int sound;
    unsigned int *bank;
} Player_82456D58;

extern void fn_8227CB30(void *);
extern unsigned int fn_82535298(unsigned int *, unsigned int, void *, void *);
extern void fn_82536288(unsigned int *);
extern __declspec(noreturn) void fn_82F63108(void);
extern char lbl_83296BC0[];
extern char lbl_83296BD0[];

static __forceinline void Call_82456D58(const Function_82456D58 *f)
{
    if (f->impl == 0)
        fn_82F63108();
    f->impl->vt->call(f->impl);
}

void fn_82456D58(Player_82456D58 *self, const Function_82456D58 *done)
{
    Track_82456D58 *track;
    unsigned int handle;

    if (self->track != 0) {
        if (self->track->pending != 0) {
            fn_8227CB30(self->lock);
            track = self->track;
            track->active = 1;
            track->count = 0;
            handle = self->sound;
            handle = fn_82535298(&handle, *self->bank, lbl_83296BC0, lbl_83296BD0);
            fn_82536288(&handle);
        } else {
            Call_82456D58(done);
        }
    }
}
