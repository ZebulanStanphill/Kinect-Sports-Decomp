typedef struct Cmd_8263A120 {
    unsigned int top : 1;
    unsigned int flag : 1;
    unsigned int addr : 30;
    unsigned int value;
} Cmd_8263A120;

typedef struct Resource_8263A120 {
    unsigned int mask;
    int a;
    unsigned int fence;
} Resource_8263A120;

typedef struct Device_8263A120 {
    char pad0[0x2a9c];
    unsigned int fence;                 /* 0x2a9c */
    unsigned int mask;                  /* 0x2aa0 */
    char pad2aa4[0x3144 - 0x2aa4];
    Resource_8263A120 *resource;        /* 0x3144 */
    char pad3148[0x35a8 - 0x3148];
    Cmd_8263A120 *cmd;                  /* 0x35a8 */
    Cmd_8263A120 *cmdEnd;               /* 0x35ac */
} Device_8263A120;

extern Cmd_8263A120 *fn_8264B4A0(Device_8263A120 *dev);

void fn_8263A120(Device_8263A120 *dev, Resource_8263A120 *resource)
{
    Resource_8263A120 *old = dev->resource;

    if (old != 0) {
        if (dev->fence != 0) {
            old->fence = dev->fence;
        } else if ((dev->mask & old->mask) != 0) {
            Cmd_8263A120 cmd;
            Cmd_8263A120 *p = dev->cmd;
            if (p >= dev->cmdEnd) {
                p = fn_8264B4A0(dev);
            }
            cmd.addr = (unsigned int)old >> 2;
            cmd.value = 0xffffffff;
            cmd.flag = 0;
            *p = cmd;
            dev->cmd = p + 1;
        }
    }
    dev->resource = resource;
}
