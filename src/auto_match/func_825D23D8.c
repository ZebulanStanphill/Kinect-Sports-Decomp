typedef struct Pool_825D23D8 {
    char *cur;
    char *end;
    unsigned int count;
    unsigned short elemSize;
    unsigned short blockCount;
} Pool_825D23D8;

typedef struct Msg_825D23D8 {
    void *handle;
    int type;
} Msg_825D23D8;

typedef struct Owner_825D23D8 {
    char pad[0xB8];
    char *queue;
} Owner_825D23D8;

typedef struct Obj_825D23D8 {
    void *vt;
    char pad04[0x38];
    Owner_825D23D8 *owner;
    char pad40[0x10];
    void *handle;
    char pad54[0x1C];
    void *buffer;
} Obj_825D23D8;

extern void *fn_8251E4D0(Pool_825D23D8 *pool);
extern void fn_82A1DD38(void *dst, const void *src, unsigned int n);
extern void fn_82522ED8(void *p);
extern void fn_825D50C0(Obj_825D23D8 *self);
extern char lbl_821C980C[];

void fn_825D23D8(Obj_825D23D8 *self)
{
    Msg_825D23D8 msg;
    Pool_825D23D8 *pool;
    void *dst;

    self->vt = lbl_821C980C;
    if (self->handle != 0) {
        msg.handle = self->handle;
        msg.type = 3;
        pool = (Pool_825D23D8 *)(self->owner->queue + 8);
        dst = fn_8251E4D0(pool);
        fn_82A1DD38(dst, &msg, pool->elemSize);
    }
    if (self->buffer != 0) {
        fn_82522ED8(self->buffer);
    }
    fn_825D50C0(self);
}
