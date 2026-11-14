typedef struct WaitBlock_82A59C80 { int w[6]; } WaitBlock_82A59C80;
typedef struct Self_82A59C80 { char pad[0x18]; void *handles[3]; } Self_82A59C80;

extern unsigned int KeWaitForMultipleObjects(unsigned int count, void **objects, int waitType,
    int reason, int mode, int alertable, __int64 *timeout, WaitBlock_82A59C80 *waitBlocks);

int fn_82A59C80(Self_82A59C80 *self, unsigned int ms)
{
    __int64 timeout;
    __int64 *pt;
    void *objects[64];
    WaitBlock_82A59C80 blocks[64];
    unsigned int status;
    int i;

    for (i = 0; i < 3; i++)
        objects[i] = self->handles[i];
    if (ms != 0xffffffff) {
        timeout = (__int64)ms * -10000;
        pt = &timeout;
    } else {
        pt = 0;
    }
    while ((status = KeWaitForMultipleObjects(3, objects, 1, 3, 1, 0, pt, blocks)) == 1) {
        for (i = 0; i < 3; i++)
            objects[i] = self->handles[i];
        pt = 0;
    }
    if (status == 0x102 || status == 2)
        return 1;
    return 0;
}
