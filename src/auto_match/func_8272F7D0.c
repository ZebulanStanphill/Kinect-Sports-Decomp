typedef struct Movie_8272F7D0 Movie_8272F7D0;
typedef struct Script_8272F7D0 Script_8272F7D0;

typedef struct MovieVtable_8272F7D0 {
    void *pad0[23];
    Script_8272F7D0 *(*script)(Movie_8272F7D0 *);
    void *pad60[(0x1ac - 0x60) / 4];
    void (*setName)(Movie_8272F7D0 *, const char *, unsigned int, int);
} MovieVtable_8272F7D0;

typedef struct Ref_8268ACE8 {
    unsigned int tagged;
} Ref_8268ACE8;

typedef struct Resource_8272F7D0 {
    char pad0[0x48];
    Ref_8268ACE8 name;
} Resource_8272F7D0;

typedef struct Link_8272F7D0 {
    char pad0[0x10];
    void *object;
} Link_8272F7D0;

struct Movie_8272F7D0 {
    MovieVtable_8272F7D0 *vtable;
    char pad4[0x80];
    void *view;
    char pad88[0x14];
    Resource_8272F7D0 *resource;
    void *root;
    char pada4[0x10];
    Link_8272F7D0 *link;
    char padb8[0x10];
    unsigned short flags;
};

typedef struct Value_8272F7D0 {
    unsigned char type;
    char storage[15];
} Value_8272F7D0;

typedef struct Transform_8272F7D0 {
    double fields[7];
} Transform_8272F7D0;

extern unsigned int fn_8268ACE8(Ref_8268ACE8 *);
extern unsigned char fn_826B44A0(Script_8272F7D0 *, Link_8272F7D0 **, Value_8272F7D0 *, int, int, int, int);
extern void fn_82696330(Value_8272F7D0 *);
extern void fn_82722C50(Movie_8272F7D0 *);
extern void fn_8272C1E0(Movie_8272F7D0 *);
extern void fn_8279FB38(void *);
extern void fn_8269AB28(Movie_8272F7D0 *);
extern Transform_8272F7D0 *fn_82681930(Transform_8272F7D0 *);
extern void *fn_8272DDC8(Movie_8272F7D0 *, Transform_8272F7D0 *, unsigned char);
extern const char lbl_82196582[];

void fn_8272F7D0(Movie_8272F7D0 *self)
{
    if (fn_8268ACE8(&self->resource->name) != 0) {
        unsigned char handled = 0;
        Link_8272F7D0 **link = &self->link;
        if ((*link)->object != 0) {
            Script_8272F7D0 *script = self->vtable->script(self);
            if (script != 0) {
                Value_8272F7D0 value;
                value.type = 0;
                handled = fn_826B44A0(script, link, &value, 0, 0, 0, 0);
                fn_82696330(&value);
            }
        }
        if (!handled) {
            self->vtable->setName(self, (const char *)(self->resource->name.tagged & ~3u) + 8,
                                  (self->flags >> 1) & 1, 1);
            fn_82722C50(self);
        }
    } else {
        self->vtable->setName(self, lbl_82196582, (self->flags >> 1) & 1, 0);
    }
    fn_8272C1E0(self);
    fn_8279FB38(self->root);
    fn_8269AB28(self);
    if (self->view == 0) {
        Transform_8272F7D0 transform;
        fn_82681930(&transform);
        fn_8272DDC8(self, &transform, 1);
    }
}
