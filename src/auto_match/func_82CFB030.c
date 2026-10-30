struct Result { unsigned char value; };
struct Receiver;
struct VTable {
    void (*reserved[6])(void);
    struct Result *(*get)(struct Result *, struct Receiver *);
};
struct Receiver { struct VTable *vtable; };
struct Object { int a, b; struct Receiver *receiver; };
struct Result *fn_82CFB030(struct Result *out, struct Object *object) {
    struct Result temporary;
    struct Result *result;
    if (object->receiver)
        result = object->receiver->vtable->get(&temporary, object->receiver);
    else {
        temporary.value = 1;
        result = &temporary;
    }
    out->value = result->value;
    return out;
}
