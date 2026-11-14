typedef struct Lock_82FB75A8 Lock_82FB75A8;
typedef struct LockVtbl_82FB75A8 {
    void *slots[4];
    void *(*fail)(Lock_82FB75A8 *self);
} LockVtbl_82FB75A8;
struct Lock_82FB75A8 {
    LockVtbl_82FB75A8 *vt;
};

typedef struct Result_82FB75A8 {
    char pad[0x40];
    int ready;          /* 0x40 */
} Result_82FB75A8;

typedef struct Obj_82FB75A8 {
    char pad0[0x40];
    Lock_82FB75A8 lock;         /* 0x40 */
    Result_82FB75A8 *current;   /* 0x44 */
    char pad48[8];
    Result_82FB75A8 *result;    /* 0x50 */
    char pad54[8];
    char request[4];            /* 0x5c */
} Obj_82FB75A8;

extern void fn_82FAD2E8(Lock_82FB75A8 *lock);
extern int fn_82FB91C0(void *request, unsigned int arg);
extern Result_82FB75A8 *fn_82FB72B0(Obj_82FB75A8 *self);

Result_82FB75A8 *fn_82FB75A8(Obj_82FB75A8 *self, unsigned int arg)
{
    Result_82FB75A8 *r;

    Lock_82FB75A8 *lock;

    Result_82FB75A8 *result;

    if (arg == 0)
        return self->current;
    lock = &self->lock;
    fn_82FAD2E8(lock);
    if (fn_82FB91C0(self->request, arg) != 1)
        return lock->vt->fail(lock);
    r = fn_82FB72B0(self);
    self->result = r;
    if (r != 0 && r->ready == 0) {
        fn_82FAD2E8(lock);
        result = 0;
    }
    else
        result = r;
    return result;
}
