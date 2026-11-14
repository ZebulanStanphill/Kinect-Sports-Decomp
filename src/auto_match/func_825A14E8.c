typedef struct Event_825A14E8 {
    int type;
    int size;
    struct { void *sender; int value; } data;
} Event_825A14E8;

typedef struct Owner_825A14E8 {
    char pad[0x78];
    char dispatcher[1];
} Owner_825A14E8;

typedef struct Context_825A14E8 {
    char pad[0x4c];
    Owner_825A14E8 *owner;
} Context_825A14E8;

typedef struct Obj_825A14E8 {
    Context_825A14E8 *context;
    char pad[0x14];
    int count;
} Obj_825A14E8;

extern void XMemSet(void *dst, int value, int size);
extern void fn_8257C8F0(Owner_825A14E8 *owner, Event_825A14E8 *e);
extern void fn_8257CB40(void *dispatcher, Event_825A14E8 *e, unsigned char all);

void fn_825A14E8(Obj_825A14E8 *self)
{
    if (self->count == 0) {
        Owner_825A14E8 *owner = self->context->owner;
        Event_825A14E8 e;
        XMemSet(&e.data, 0, 8);
        e.type = 0x55;
        e.size = 0x10;
        e.data.sender = self;
        e.data.value = 1;
        fn_8257C8F0(owner, &e);
        fn_8257CB40(owner->dispatcher, &e, 1);
    }
    self->count++;
}
