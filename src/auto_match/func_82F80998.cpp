struct ExceptionRecord_82F80998 {
    char pad0[0x18];
    char *object;
};

struct Handler_82F80998 {
    unsigned int flags;
    void *type;
    int displacement;
};

struct Displacement_82F80998 {
    int member;
    int vbptr;
    int vbase;
};

struct CatchableType_82F80998 {
    unsigned int flags;
    void *type;
    Displacement_82F80998 displacement;
    int size;
    void *copy;
};

extern "C" int __BuildCatchObjectHelper(ExceptionRecord_82F80998 *exception, char *frame,
                                        const Handler_82F80998 *handler, const CatchableType_82F80998 *type);
extern void terminate();

static __forceinline char *AdjustObject(char *object, const Displacement_82F80998 &offset)
{
    char *adjusted = object + offset.member;
    if (offset.vbptr >= 0) {
        int entry = offset.vbase;
        const char *table = *reinterpret_cast<const char **>(object + offset.vbptr);
        int adjustment = *reinterpret_cast<const int *>(table + entry);
        adjusted += adjustment;
        adjusted += offset.vbptr;
    }
    return adjusted;
}

extern "C" void __BuildCatchObject(ExceptionRecord_82F80998 *exception, char *frame,
                                   const Handler_82F80998 *handler, const CatchableType_82F80998 *type)
{
    char *target = handler->flags & 0x80000000 ? frame : frame + handler->displacement;

    __try {
        int result = __BuildCatchObjectHelper(exception, frame, handler, type);
        switch (result) {
        case 1: {
            typedef void (*Copy)(char *, char *);
            reinterpret_cast<Copy>(type->copy)(target, AdjustObject(exception->object, type->displacement));
            break;
        }
        case 2: {
            typedef void (*Copy)(char *, char *, int);
            reinterpret_cast<Copy>(type->copy)(target, AdjustObject(exception->object, type->displacement),
                                               1);
            break;
        }
        }
    } __except (1) {
        terminate();
    }
}
