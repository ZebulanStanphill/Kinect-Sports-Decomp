extern void *memset(void *, int, unsigned int);
typedef struct Cmd_82A9DD60 {
    unsigned int hi : 8;
    unsigned int lo : 4;
    unsigned int mode : 4;
    unsigned int rest : 16;
} Cmd_82A9DD60;

typedef struct Obj_82A9DD60 {
    char pad0[0x50];
    void *target;
    char pad54[0x90 - 0x54];
    int state;
} Obj_82A9DD60;

extern void fn_82A9D3D8(void *target, Cmd_82A9DD60 *cmd, int *state);

void fn_82A9DD60(Obj_82A9DD60 *self, unsigned int lo, unsigned int hi, unsigned int mode)
{
    Cmd_82A9DD60 cmd;

    if (self->state >= 0) {
        memset(&cmd, 0, sizeof(cmd));
        cmd.lo = lo;
        cmd.hi = hi;
        cmd.mode = mode;
        fn_82A9D3D8(self->target, &cmd, &self->state);
    }
}
