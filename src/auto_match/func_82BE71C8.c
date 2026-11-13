
typedef struct RequestManager_82BE71C8 {
    char pad0[0x28];
    int paused;
    char lock[4];
} RequestManager_82BE71C8;

extern int fn_82BEA200(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);

int fn_82BE71C8(RequestManager_82BE71C8 *self)
{
    if (fn_82BEA200(&self->lock, "CRequestManager::ResumeAll") == 0)
        return 0x2c0;
    self->paused = 0;
    fn_82BEA230(&self->lock, "CRequestManager::ResumeAll");
    return 0;
}
