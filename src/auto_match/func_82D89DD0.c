typedef struct {
    unsigned char type;
    void *sender;
} Event_82D89DD0;

typedef struct {
    char pad[0x94];
    int active;
} Target_82D89DD0;

typedef struct {
    char pad[8];
    Target_82D89DD0 *target;
} Self_82D89DD0;

extern void fn_82D80C48(Target_82D89DD0 *t, Event_82D89DD0 *e);
extern void fn_82D89C68(Self_82D89DD0 *self);

void fn_82D89DD0(Self_82D89DD0 *self)
{
    Target_82D89DD0 *t = self->target;
    if (t != 0 && t->active != 0) {
        Event_82D89DD0 e;
        e.type = 0x22;
        e.sender = self;
        fn_82D80C48(t, &e);
        return;
    }
    fn_82D89C68(self);
}
