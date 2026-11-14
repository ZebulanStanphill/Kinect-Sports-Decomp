extern void *memset(void *, int, unsigned int);

typedef struct Cmd_82A9DCD8 {
    unsigned int a : 12;
    unsigned int b : 6;
    unsigned int c : 12;
    unsigned int pad0 : 2;
    unsigned int d : 9;
    unsigned int e : 1;
    unsigned int pad1 : 22;
} Cmd_82A9DCD8;

typedef struct Obj_82A9DCD8 {
    char pad0[0x4c];
    void *target;
    char pad50[0x90 - 0x50];
    int state;
} Obj_82A9DCD8;

extern void fn_82A9D360(void *target, Cmd_82A9DCD8 *cmd, int *state);

void fn_82A9DCD8(Obj_82A9DCD8 *self, unsigned int a, unsigned int b, unsigned int c, unsigned int d,
                 unsigned int e)
{
    Cmd_82A9DCD8 cmd;

    if (self->state >= 0) {
        memset(&cmd, 0, sizeof(cmd));
        cmd.a = a;
        cmd.b = b;
        cmd.c = c;
        cmd.d = d;
        cmd.e = e;
        fn_82A9D360(self->target, &cmd, &self->state);
    }
}
