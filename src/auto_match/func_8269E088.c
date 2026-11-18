typedef struct Text_8269E088 {
    const char **chars; /* 0x00 */
} Text_8269E088;

typedef struct Name_8269E088 {
    char pad0[8];
    Text_8269E088 text; /* 0x08 */
} Name_8269E088;

typedef struct Definition_8269E088 {
    char pad0[0x78];
    Name_8269E088 *name; /* 0x78 */
} Definition_8269E088;

typedef struct Kind_8269E088 Kind_8269E088;

typedef struct KindVtable_8269E088 {
    void *slot0;
    void *slot4;
    int (*getType)(Kind_8269E088 *self); /* 0x08 */
} KindVtable_8269E088;

struct Kind_8269E088 {
    KindVtable_8269E088 *vtable;
};

typedef struct Character_8269E088 Character_8269E088;

typedef struct CharacterVtable_8269E088 {
    void *slots[0x16];
    Definition_8269E088 *(*getDefinition)(Character_8269E088 *self); /* 0x58 */
} CharacterVtable_8269E088;

struct Character_8269E088 {
    CharacterVtable_8269E088 *vtable; /* 0x00 */
    char pad4[0x1c];
    Character_8269E088 *parent; /* 0x20 */
    char pad24[0x44];
    Kind_8269E088 kind; /* 0x68 */
    char pad6c[0x14];
    Name_8269E088 *name; /* 0x80 */
    char pad84[0x124];
    int level; /* 0x1a8 */
};

typedef struct FormatRequest_8269E088 {
    int value;  /* 0x00 */
    int unused; /* 0x04 */
    int zero;   /* 0x08 */
    void *out;  /* 0x0c */
} FormatRequest_8269E088;

extern void fn_8268B610(void *out, const char *text, int length);
extern void fn_8268BEA8(void *out);
extern void fn_8269DCE8(void *sink, const char *format, void *value);
extern Name_8269E088 *fn_8269F500(Character_8269E088 *self);

static __forceinline Name_8269E088 *GetName(Character_8269E088 *self)
{
    if (*(int *)&self->name != 0) {
        return self->name;
    }
    return fn_8269F500(self);
}

/* Appends the dotted path of a character ("_level0.a.b") to `out`. */
void fn_8269E088(Character_8269E088 *self, void *out)
{
    Name_8269E088 *name;
    const Text_8269E088 *text;
    FormatRequest_8269E088 request;

    if (self->parent != 0) {
        fn_8269E088(self->parent, out);
        fn_8268B610(out, ".", -1);
        name = GetName(self);
        if (name != 0) {
            text = &name->text;
        } else {
            text = &self->vtable->getDefinition(self)->name->text;
        }
        fn_8268B610(out, *text->chars, -1);
    } else {
        int type = self->kind.vtable->getType(&self->kind);
        if (type == 2) {
            request.value = self->level;
            request.zero = 0;
            request.out = out;
            fn_8269DCE8(&request.zero, "_level{0}", &request.value);
        } else {
            fn_8268BEA8(out);
        }
    }
}
