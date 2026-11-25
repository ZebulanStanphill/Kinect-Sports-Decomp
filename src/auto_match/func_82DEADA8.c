typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float values[4];
} __vector4;

typedef struct Source_82DEADA8 Source_82DEADA8;

typedef struct SourceVt_82DEADA8 {
    char pad[0x10];
    float (*getValue)(Source_82DEADA8 *);
} SourceVt_82DEADA8;

struct Source_82DEADA8 {
    SourceVt_82DEADA8 *vt;
};

typedef struct Entry_82DEADA8 {
    char pad[0x14];
    unsigned char fallback;
    char pad2[7];
    int lookup[1];
} Entry_82DEADA8;

typedef struct State_82DEADA8 {
    char pad[8];
    void *first;
    char pad2[4];
    void *second;
    char pad3[0x84];
    Entry_82DEADA8 *entry;
} State_82DEADA8;

typedef struct Context_82DEADA8 {
    char pad[0xc];
    Source_82DEADA8 *source;
    char pad2[4];
    State_82DEADA8 *state;
} Context_82DEADA8;

extern void fn_82CE5458(unsigned char *, const float *);
extern const __vector4 *fn_82DBE7C8(Source_82DEADA8 *);
extern const __vector4 *fn_82DBE8C8(Source_82DEADA8 *);
extern int fn_82DBED98(void *, void *, const __vector4 *);
extern unsigned char fn_82CEA280(int *, unsigned int, int);
extern const float lbl_82131F88[256];

Entry_82DEADA8 *fn_82DEADA8(State_82DEADA8 *self, Context_82DEADA8 *context, unsigned char *fallback,
                            int *index, unsigned char *value)
{
    unsigned char code;
    const __vector4 *position;
    __vector4 copy;
    int found;
    Source_82DEADA8 *source = context->source;
    Entry_82DEADA8 *entry = self->entry;
    {
        float raw = source->vt->getValue(source);
        fn_82CE5458(&code, &raw);
    }
    *value = (unsigned char)lbl_82131F88[code];
    if (entry != 0) {
        position = self == context->state ? fn_82DBE7C8(context->source) : fn_82DBE8C8(context->source);
        copy = *position;
        found = fn_82DBED98(self->first, self->second, &copy);
        *index = found;
        if (found != -1 && fn_82CEA280(entry->lookup, found, 0)) {
            return entry;
        }
        if (entry->fallback) {
            *fallback = 1;
            return entry;
        }
    }
    return 0;
}
