typedef struct Format_82BD2A88 {
    unsigned int reserved : 28;
    unsigned int supported : 1;
    unsigned int reserved2 : 1;
    unsigned int alternate : 1;
    unsigned int reserved3 : 1;
    char data[0x30];
} Format_82BD2A88;
typedef struct Object_82BD2A88 Object_82BD2A88;

typedef struct Vtable_82BD2A88 {
    void *reserved[13];
    unsigned char (*test)(Object_82BD2A88 *);
} Vtable_82BD2A88;

struct Object_82BD2A88 {
    Vtable_82BD2A88 *vtable;
    char reserved4[0x14];
    unsigned int format; /* 0x18 */
    char reserved1C[0xc8];
    unsigned int reservedFlags : 30;
    unsigned int disabled : 1;
    unsigned int reservedFlag : 1;
};

typedef struct State_82BD2A88 {
    int reserved;
    unsigned int index;
} State_82BD2A88;

extern const Format_82BD2A88 lbl_8316FF50[];
extern const unsigned int lbl_820E8368[4][4];

static __forceinline unsigned char Supported_82BD2A88(Object_82BD2A88 *object)
{
    if ((unsigned char)object->disabled) {
        return 0;
    }
    return (unsigned char)lbl_8316FF50[object->format].supported;
}

unsigned int fn_82BD2A88(State_82BD2A88 *self, Object_82BD2A88 *object)
{
    unsigned int result = 0;
    if (!Supported_82BD2A88(object)) {
        result = lbl_820E8368[self->index][3];
    } else if (!object->vtable->test(object)) {
        if ((unsigned char)lbl_8316FF50[object->format].alternate) {
            result = lbl_820E8368[self->index][1];
        } else {
            result = lbl_820E8368[self->index][2];
        }
    }
    return (result + 1) != 0;
}
