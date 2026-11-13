typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entry_824C5588 {
    void *id;
    char pad04[0x4c];
    __vector4 color;    /* 0x50 */
    char pad60[0x10];
    float scale;        /* 0x70 */
} Entry_824C5588;

typedef struct Owner_824C5588 {
    char pad0[0x98];
    char table[4];      /* 0x98 */
} Owner_824C5588;

typedef struct Obj_824C5588 {
    char pad0[0xc];
    Owner_824C5588 *owner;  /* 0x0c */
    char pad10[0x18];
    int a;              /* 0x28 */
    int b;              /* 0x2c */
    int c;              /* 0x30 */
    int pad34;
    int d;              /* 0x38 */
    int e;              /* 0x3c */
} Obj_824C5588;

typedef struct Desc_824C5588 {
    int pad0;
    char name[4];       /* 0x04 */
} Desc_824C5588;

extern void fn_8229D728(Obj_824C5588 *self);
extern Entry_824C5588 *fn_82555A88(void *table, const char *name);
extern void fn_8229DA88(Obj_824C5588 *self, void *id, __vector4 *color, float scale);

Obj_824C5588 *fn_824C5588(Obj_824C5588 *self, Desc_824C5588 *desc)
{
    char *name;
    Entry_824C5588 *entry;
    __vector4 color;

    fn_8229D728(self);
    self->a = 0;
    self->b = 0;
    self->c = 0;
    self->d = 0;
    self->e = 0;
    name = desc->name;
    if (name != 0 && name[0] != 0) {
        entry = fn_82555A88(self->owner->table, name);
        if (entry != 0) {
            void *id = entry->id;
            color = entry->color;
            if (id != 0) {
                fn_8229DA88(self, id, &color, entry->scale);
            }
        }
    }
    return self;
}
