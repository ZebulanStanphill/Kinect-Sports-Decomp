typedef struct Object_8302E350 Object_8302E350;
typedef struct Context_8302E350 Context_8302E350;

typedef struct ObjectVtbl_8302E350 {
    void *slot0;
    void *slot4;
    void (*release)(Object_8302E350 *self); /* 0x8 */
    void *slotC[3];
    int (*apply)(Object_8302E350 *self, Context_8302E350 *context); /* 0x18 */
} ObjectVtbl_8302E350;

struct Object_8302E350 {
    ObjectVtbl_8302E350 *vt;
};

typedef struct Frame_8302E350 {
    Object_8302E350 *object;    /* 0x0 */
    int state;                  /* 0x4 */
    short count;                /* 0x8 */
    unsigned char multiple : 1; /* 0xa, 0x80 */
    unsigned char empty : 1;    /* 0xa, 0x40 */
    unsigned char bits : 6;
    unsigned char pad0B;
    int pad0C[2];
} Frame_8302E350;

typedef struct FrameStack_8302E350 {
    Frame_8302E350 *begin; /* 0x0 */
    Frame_8302E350 *end;   /* 0x4 */
    unsigned int capacity; /* 0x8 */
} FrameStack_8302E350;

typedef struct Pool_8302E350 {
    int pad0;
    FrameStack_8302E350 frames; /* 0x4 */
} Pool_8302E350;

typedef struct Runtime_8302E350 {
    char pad0[0x10];
    Pool_8302E350 *pool; /* 0x10 */
} Runtime_8302E350;

typedef struct ValueStack_8302E350 {
    unsigned int count;
    unsigned short values[32];
    unsigned int flags;
} ValueStack_8302E350;

struct Context_8302E350 {
    int pad0[2];
    int scope; /* 0x8 */
    char padC[0x1c];
    ValueStack_8302E350 values; /* 0x28 */
    char pad70[8];
    Runtime_8302E350 *runtime; /* 0x78 */
};

typedef struct Node_8302E350 Node_8302E350;

typedef struct NodeVtbl_8302E350 {
    char pad0[0x154];
    int (*evaluate)(Node_8302E350 *self, Context_8302E350 *context); /* 0x154 */
} NodeVtbl_8302E350;

struct Node_8302E350 {
    NodeVtbl_8302E350 *vt;
    char pad4[0x11c];
    short argCount; /* 0x120 */
};

extern Frame_8302E350 *fn_8302EB70(FrameStack_8302E350 *frames);
extern void fn_8302EA08(Frame_8302E350 *frame, Node_8302E350 *node, unsigned char addRef);
extern Object_8302E350 *fn_8302DD08(Object_8302E350 *object, int scope, unsigned short *value, int *extra,
                                    int *state, short *count);
extern void fn_8302C580(ValueStack_8302E350 *stack, unsigned short value, unsigned char set);
extern void fn_83032BE0(Frame_8302E350 *frame);

int fn_8302E350(Node_8302E350 *self, Context_8302E350 *context)
{
    Frame_8302E350 *frame;
    Object_8302E350 *object;
    FrameStack_8302E350 *frames;
    unsigned short value;
    int extra;
    int result;
    int count;

    frame = fn_8302EB70(&context->runtime->pool->frames);
    if (frame != 0) {
        fn_8302EA08(frame, self, 1);
        frame->multiple = self->argCount != 1;
        frame->empty = self->argCount == 0;
        if (!frame->multiple) {
            count = 1;
        } else if (frame->empty) {
            count = 1;
        } else {
            count = self->argCount;
        }
        frame->count = count;
        object = fn_8302DD08(frame->object, context->scope, &value, &extra, &frame->state, &frame->count);
        if (object != 0) {
            fn_8302C580(&context->values, value, 1);
            result = object->vt->apply(object, context);
            object->vt->release(object);
            return result;
        }
        frames = &context->runtime->pool->frames;
        fn_83032BE0(frames->end - 1);
        frames->end--;
    }
    result = self->vt->evaluate(self, context);
    if (result == 3) {
        result = 1;
    }
    return result;
}
