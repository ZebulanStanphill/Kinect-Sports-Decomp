typedef struct Config_82E1D9E0 {
    char pad0[0xc];
    char error[0x80];         /* 0x0c */
} Config_82E1D9E0;

extern int fn_82F64068(char *buf, unsigned int size, unsigned int count, const char *fmt, ...);

void fn_82E1D9E0(Config_82E1D9E0 *self, int line, const char *msg)
{
    if (line == 0) {
        fn_82F64068(self->error, 0x80, 0x7f, "Could not open config file: %s", msg);
    } else {
        fn_82F64068(self->error, 0x80, 0x7f, "Error in config file at line %d: %s", line, msg);
    }
    self->error[0x7f] = 0;
}
