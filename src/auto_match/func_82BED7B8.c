typedef struct Input_82BED7B8 {
    char pad0[0xc];
    unsigned int size; /* 0xc */
} Input_82BED7B8;

typedef struct Buffer_82BED7B8 {
    char pad0[0x10];
    Input_82BED7B8 *input; /* 0x10 */
} Buffer_82BED7B8;

typedef struct Request_82BED7B8 Request_82BED7B8;

typedef struct RequestVtbl_82BED7B8 {
    void *destroy;                             /* 0x0 */
    void *unk4;                                /* 0x4 */
    int (*IsComplete)(Request_82BED7B8 *self); /* 0x8 */
    int (*Succeeded)(Request_82BED7B8 *self);  /* 0xc */
} RequestVtbl_82BED7B8;

struct Request_82BED7B8 {
    RequestVtbl_82BED7B8 *vt; /* 0x00 */
    char pad4[0x10 - 0x4];
    int buffer; /* 0x10 */
};

typedef struct Pending_82BED7B8 {
    char pad0[0x10];
    Request_82BED7B8 *request; /* 0x10 */
} Pending_82BED7B8;

typedef struct Task_82BED7B8 Task_82BED7B8;

typedef struct TaskVtbl_82BED7B8 {
    void *destroy;                     /* 0x0 */
    int (*Start)(Task_82BED7B8 *self); /* 0x4 */
} TaskVtbl_82BED7B8;

struct Task_82BED7B8 {
    TaskVtbl_82BED7B8 *vt; /* 0x0 */
};

typedef struct Loader_82BED7B8 Loader_82BED7B8;

typedef struct LoaderVtbl_82BED7B8 {
    void *unk[4];
    void (*OnLoaded)(Loader_82BED7B8 *self); /* 0x10 */
} LoaderVtbl_82BED7B8;

struct Loader_82BED7B8 {
    LoaderVtbl_82BED7B8 *vt; /* 0x00 */
    int pad4;                /* 0x04 */
    void *context;           /* 0x08 */
    char padC[0x2c - 0xc];
    char tasks[8];             /* 0x2c */
    Pending_82BED7B8 *pending; /* 0x34 */
    char pad38[0x44 - 0x38];
    unsigned int size; /* 0x44 */
    char pad48[0x50 - 0x48];
    int state; /* 0x50 */
};

extern unsigned int lbl_83175468;
extern void *fn_82BE56B0(unsigned int size);
extern Task_82BED7B8 *fn_82BF7B48(void *memory, int a, void *context, unsigned int type, int b, int c);
extern void fn_82BE8D50(Task_82BED7B8 *task);
extern int fn_82BF6B38(void *tasks, Task_82BED7B8 *task);
extern void fn_82BF6BC0(void *tasks, Pending_82BED7B8 *pending);
extern int fn_82BED468(Loader_82BED7B8 *self, Input_82BED7B8 *input);
extern void fn_82BED360(Loader_82BED7B8 *self);

static __forceinline Input_82BED7B8 *GetInput(Request_82BED7B8 *request)
{
    return request->buffer != 0 ? ((Buffer_82BED7B8 *)request->buffer)->input : 0;
}

void fn_82BED7B8(Loader_82BED7B8 *self)
{
    Pending_82BED7B8 *pending;
    Request_82BED7B8 *request;
    Task_82BED7B8 *task;
    void *memory;

    if (self->state == 2 || self->state != 0) {
        return;
    }
    pending = self->pending;
    if (pending != 0) {
        request = pending->request;
        if (request != 0) {
            if (request->vt->IsComplete(request) == 0) {
                return;
            }
            if (request->vt->Succeeded(request) != 0 && fn_82BED468(self, GetInput(request)) != 0) {
                self->size = GetInput(request)->size;
                fn_82BF6BC0(self->tasks, pending);
                self->vt->OnLoaded(self);
                return;
            }
        }
        fn_82BED360(self);
        return;
    }
    memory = fn_82BE56B0(0x1c);
    if (memory != 0) {
        task = fn_82BF7B48(memory, 0, self->context, lbl_83175468, 0, 0);
    } else {
        task = 0;
    }
    if (task == 0) {
        self->state = 2;
        return;
    }
    if (fn_82BF6B38(self->tasks, task) == 0) {
        self->state = 2;
        fn_82BE8D50(task);
        return;
    }
    if (task->vt->Start(task) == 0) {
        self->state = 2;
        fn_82BE8D50(task);
        return;
    }
    fn_82BE8D50(task);
}
