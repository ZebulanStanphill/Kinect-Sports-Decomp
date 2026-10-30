typedef struct {
    unsigned char type;
    void *sender;
} Event_82D89D70;

typedef struct {
    char pad[0x94];
    int active;
} Target_82D89D70;

typedef struct {
    char pad[8];
    Target_82D89D70 *target;
} Self_82D89D70;

extern void fn_82D80C48(Target_82D89D70 *t, Event_82D89D70 *e);
extern void fn_82D89BD8(Self_82D89D70 *self);

void fn_82D89D70(Self_82D89D70 *self)
{
    Target_82D89D70 *t = self->target;
    if (t != 0 && t->active != 0) {
        Event_82D89D70 e;
        e.type = 0x21;
        e.sender = self;
        fn_82D80C48(t, &e);
        return;
    }
    fn_82D89BD8(self);
}
