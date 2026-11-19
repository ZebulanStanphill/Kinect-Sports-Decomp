typedef struct Function_822805D8 {
    int space[4];
    void *impl; /* 0x10 */
} Function_822805D8;

typedef struct Settings_822805D8 {
    char pad0[0xf4];
    Function_822805D8 func; /* 0xf4 */
} Settings_822805D8;

typedef struct Source_822805D8 {
    char pad0[0x1c];
    Settings_822805D8 settings; /* 0x1c */
} Source_822805D8;

typedef struct Manager_822805D8 {
    char pad0[0x44];
    int mode; /* 0x44 */
    char pad48[0x4];
    Source_822805D8 *primary;   /* 0x4c */
    void *primaryLayer;         /* 0x50 */
    Source_822805D8 *secondary; /* 0x54 */
    void *secondaryLayer;       /* 0x58 */
    char pad5C[0x7c - 0x5c];
    void *config; /* 0x7c */
} Manager_822805D8;

typedef struct Entry_822805D8 {
    void *screen;
    void *layer;
} Entry_822805D8;

extern void *fn_8265C9E0(unsigned int size);
extern Function_822805D8 *fn_822C5B18(Function_822805D8 *dst, const Function_822805D8 *src);
extern void *fn_82279768(void *self, Settings_822805D8 *settings, Manager_822805D8 *owner, int p4, int p5,
                         Function_822805D8 *func, void *config, int p8, int p9, void *listener);
extern void fn_82280798(Manager_822805D8 *self, Entry_822805D8 *entry, int p3, int p4);

void fn_822805D8(Manager_822805D8 *self)
{
    Entry_822805D8 entry;
    Function_822805D8 copy;
    void *mem;
    Settings_822805D8 *settings;

    if (self->mode == 1) {
        mem = fn_8265C9E0(0x130);
        if (mem != 0) {
            settings = &self->primary->settings;
            entry.screen =
                fn_82279768(mem, settings, self, 1, 1, fn_822C5B18(&copy, &self->primary->settings.func),
                            self->config, 1, 0, 0);
        } else {
            entry.screen = 0;
        }
        entry.layer = self->primaryLayer;
    } else {
        mem = fn_8265C9E0(0x130);
        if (mem != 0) {
            settings = &self->secondary->settings;
            entry.screen =
                fn_82279768(mem, settings, self, 1, 1, fn_822C5B18(&copy, &self->secondary->settings.func),
                            self->config, 1, 0, 0);
        } else {
            entry.screen = 0;
        }
        entry.layer = self->secondaryLayer;
    }
    fn_82280798(self, &entry, 0, 0);
}
