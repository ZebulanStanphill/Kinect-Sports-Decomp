typedef struct Event_82437130 {
    char pad[0x114];
    int kind;               /* 0x114 */
} Event_82437130;

typedef struct Self_82437130 {
    char pad[0x40];
    Event_82437130 *event;  /* 0x40 */
} Self_82437130;

extern char lbl_83297B48[];
extern int fn_82526C70(char *buf, int size, const char *fmt, ...);

char *fn_82437130(Self_82437130 *self, const char *name)
{
    const char *prefix = 0;

    switch (self->event->kind) {
    case 1:
        prefix = "race_";
        break;
    case 2:
        prefix = "hurdles_";
        break;
    case 3:
        prefix = "longjump_";
        break;
    case 4:
        prefix = "discus_";
        break;
    case 5:
        prefix = "javelin_";
        break;
    }
    fn_82526C70(lbl_83297B48, 0x40, "%s%s", prefix, name);
    return lbl_83297B48;
}
