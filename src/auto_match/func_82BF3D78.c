extern void *fn_82BE56B0(unsigned int size);
extern void *fn_82BFAED0(void *mem, void *arg);
extern void fn_82BFABD8(void *lock, const char *name);
extern void fn_82BFABE0(void *lock, const char *name);
extern int fn_82BF6AB8(void *list, void *cmd);
extern void fn_82BE8D50(void *cmd);
extern void fn_82BFAAE8(void *ev, int v);

int fn_82BF3D78(char *self, void *arg)
{
    void *mem;
    void *cmd;
    const char *name;
    int r;

    if (arg != 0) {
        mem = fn_82BE56B0(0x14);
        if (mem != 0)
            cmd = fn_82BFAED0(mem, arg);
        else
            cmd = 0;
        if (cmd != 0) {
            name = "CFileAsyncWorker::AddCommandInternal";
            fn_82BFABD8(self + 0x2c, name);
            r = fn_82BF6AB8(self + 0x18, cmd);
            fn_82BFABE0(self + 0x2c, name);
            if (r != 0) {
                fn_82BE8D50(cmd);
                fn_82BFAAE8(self + 0x58, 1);
                return 1;
            }
        }
    }
    return 0;
}
