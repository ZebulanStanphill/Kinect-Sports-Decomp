typedef struct Cmd_82A5B750 {
    int pad0[2];
    int type;            /* 0x08 */
    int pad0c;
    unsigned int arg;    /* 0x10 */
} Cmd_82A5B750;

typedef struct Obj_82A5B750 {
    char pad0[0x90];
    unsigned int device; /* 0x90 */
} Obj_82A5B750;

extern int fn_82A5C208(Obj_82A5B750 *self, Cmd_82A5B750 *cmd);
extern void fn_82A77458(unsigned int device);
extern void fn_82A77490(unsigned int device);
extern void fn_82A77C10(unsigned int device);
extern int fn_82A783F8(unsigned int device, unsigned int arg);
extern int fn_82A78518(unsigned int device, unsigned int arg);
extern int fn_82A78648(unsigned int device, unsigned int arg);
extern int fn_82A786C8(unsigned int device, unsigned int arg);

/* handles commands 5..12 on the device, passing the others on to fn_82A5C208 */
int fn_82A5B750(Obj_82A5B750 *self, Cmd_82A5B750 *cmd)
{
    int hr = 0;
    switch (cmd->type) {
    case 5:
    case 6:
        hr = fn_82A786C8(self->device, cmd->arg);
        break;
    case 7:
        fn_82A77C10(self->device);
        break;
    case 8:
        fn_82A77458(self->device);
        break;
    case 9:
        fn_82A77490(self->device);
        break;
    case 10:
        hr = fn_82A783F8(self->device, cmd->arg);
        break;
    case 11:
        hr = fn_82A78518(self->device, cmd->arg);
        break;
    case 12:
        hr = fn_82A78648(self->device, cmd->arg);
        break;
    default:
        hr = fn_82A5C208(self, cmd);
        break;
    }
    return hr;
}
