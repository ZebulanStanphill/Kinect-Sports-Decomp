typedef struct State_826C4FD8 State_826C4FD8;
typedef struct Target_826C4FD8 Target_826C4FD8;
typedef struct Input_826C4FD8 Input_826C4FD8;

typedef struct Frame_826C4FD8 {
    State_826C4FD8 *self;
    Target_826C4FD8 *target;
    Input_826C4FD8 *input;
    unsigned int first;
    unsigned int second;
    unsigned int temp[5];
} Frame_826C4FD8;

typedef struct StateVt_826C4FD8 {
    void *pad00[9];
    Target_826C4FD8 *(*resolve)(State_826C4FD8 *self, Input_826C4FD8 *input, unsigned int *temp);
} StateVt_826C4FD8;

struct State_826C4FD8 {
    const StateVt_826C4FD8 *vt;
    char pad04[0x34];
    void *context;
    unsigned int data[3];
    unsigned int first;
    unsigned int second;
    char pad50[0x16];
    unsigned char flags;
};

typedef struct TargetVt_826C4FD8 {
    void *pad00;
    unsigned char (*canReport)(Target_826C4FD8 *self);
} TargetVt_826C4FD8;

struct Target_826C4FD8 {
    const TargetVt_826C4FD8 *vt;
    char pad04[0x70];
    State_826C4FD8 *owner;
    char pad78[0x4c];
    unsigned short depth;
};

struct Input_826C4FD8 {
    char pad00[4];
    unsigned int index;
    char pad08[0x10];
    Target_826C4FD8 *alternate;
};

extern void fn_826ADE60(Target_826C4FD8 *self, const char *format, ...);
extern void fn_826B55A0(void *context, Target_826C4FD8 *target, unsigned int first, unsigned int second,
                        unsigned int index, unsigned int *data, unsigned char flags);
extern void fn_826C36F0(int frame);
extern void fn_826C43B0(int *frame);
extern void fn_826C4E78(int *frame);

void fn_826C4FD8(State_826C4FD8 *self, Input_826C4FD8 *input, unsigned int first, unsigned int second)
{
    Frame_826C4FD8 frame;
    unsigned char allowed;
    unsigned short depth;

    frame.first = first;
    frame.self = self;
    frame.input = input;
    frame.second = second;
    frame.temp[0] = 0;
    frame.temp[1] = 0;
    frame.temp[2] = 0;
    frame.temp[3] = 0;
    frame.temp[4] = 0;
    frame.target = self->vt->resolve(self, input, frame.temp);
    if (frame.target->owner->flags & 0x10)
        frame.target = input->alternate;
    depth = frame.target->depth++;
    allowed = 0;
    if (depth < 0xff)
        allowed = 1;

    if (!allowed) {
        if (frame.target->vt->canReport(frame.target))
            fn_826ADE60(frame.target, "Error: Stack overflow, max level of 255 nested calls is reached.\n");
    } else {
        fn_826C43B0((int *)&frame);
        fn_826B55A0(self->context, frame.target, self->first, self->second, input->index, self->data,
                    self->flags);
        fn_826C4E78((int *)&frame);
    }
    --frame.target->depth;
    fn_826C36F0((int)&frame);
}
