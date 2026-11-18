struct Context_82961218;

typedef struct Constant_82961218 {
    char pad0[0x8];
    unsigned int parent; /* 0x08 */
} Constant_82961218;

typedef struct Vtable_82961218 {
    char pad0[0x134];
    int (*flush)(Context_82961218 *);                                          /* 0x134 */
    int (*begin)(Context_82961218 *, unsigned int, unsigned int, int);         /* 0x138 */
    int (*emit)(Context_82961218 *, unsigned int, unsigned int, unsigned int); /* 0x13c */
    char pad140[0x8];
    int (*lookup)(Context_82961218 *, Constant_82961218 *, unsigned int *, unsigned int *); /* 0x148 */
    int (*resolve)(Context_82961218 *, unsigned int *, int, unsigned int, unsigned int *);  /* 0x14c */
} Vtable_82961218;

typedef struct Source_82961218 {
    char pad0[0x3c];
    int location; /* 0x3c */
} Source_82961218;

struct Context_82961218 {
    int SetRelativeIndex(unsigned int index);

    Vtable_82961218 *vtable; /* 0x000 */
    char pad4[0x10];
    Constant_82961218 **constants; /* 0x014 */
    char pad18[0xca - 0x18];
    unsigned short version; /* 0x0ca */
    char padcc[0x104 - 0xcc];
    Source_82961218 *source; /* 0x104 */
    char pad108[0x13c - 0x108];
    unsigned int current; /* 0x13c */
};

extern "C" int fn_8295D0A8(Context_82961218 *, unsigned int);
extern "C" int fn_829548C8(Context_82961218 *);
extern "C" void fn_82975B00(Context_82961218 *, int, int, const char *, ...);

int Context_82961218::SetRelativeIndex(unsigned int index)
{
    Constant_82961218 *constant;
    int result;
    unsigned int address;
    unsigned int count;
    unsigned int resolved;

    constant = constants[index];
    if (version <= 0x100) {
        fn_82975B00(this, source->location, 0x119f,
                    "relative addressing not supported in vs_1_0 instruction set");
        return 0x80004001;
    }
    if (constant->parent != -1) {
        result = SetRelativeIndex(constant->parent);
        if (result < 0) {
            return result;
        }
    }
    if (current != index) {
        result = fn_8295D0A8(this, 1);
        if (result < 0) {
            return result;
        }
        result = vtable->begin(this, 0xb0000000, 0x10000, 0);
        if (result < 0) {
            return result;
        }
        result = vtable->lookup(this, constant, &address, &count);
        if (result < 0) {
            return result;
        }
        result = vtable->resolve(this, &index, 1, 0x10000, &resolved);
        if (result < 0) {
            return result;
        }
        result = vtable->emit(this, address, resolved, count);
        if (result < 0) {
            return result;
        }
        result = vtable->flush(this);
        if (result < 0) {
            return result;
        }
        result = fn_829548C8(this);
        if (result < 0) {
            return result;
        }
        current = index;
    }
    return 0;
}
