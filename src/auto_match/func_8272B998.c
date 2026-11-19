/* setImageSubstitutions(): null clears the substitution list, an array adds each element,
   any other object adds that one; anything else logs a warning. */

typedef struct Value_8272B998 {
    unsigned char type; /* 0x0 */
    char pad1[3];
    unsigned char flag; /* 0x4 */
} Value_8272B998;

typedef struct Iface_8272B998 Iface_8272B998;

typedef struct IfaceVt_8272B998 {
    void *slots[2];
    int (*getType)(Iface_8272B998 *self); /* 0x8 */
} IfaceVt_8272B998;

struct Iface_8272B998 {
    IfaceVt_8272B998 *vt;
};

typedef struct Object_8272B998 {
    char pad0[0x10];
    Iface_8272B998 iface; /* 0x10 */
    char pad14[0x20];
    Value_8272B998 **items; /* 0x34 */
    int count;              /* 0x38 */
} Object_8272B998;

typedef struct Substitutions_8272B998 {
    char pad0[0x18];
    void *list; /* 0x18 */
    char pad1c[0x123];
    unsigned char flags; /* 0x13f */
} Substitutions_8272B998;

typedef struct Name_8272B998 {
    char pad0[8];
    char **text; /* 0x8 */
} Name_8272B998;

typedef struct Def_8272B998 {
    char pad0[0x78];
    Name_8272B998 *name; /* 0x78 */
} Def_8272B998;

typedef struct Sprite_8272B998 Sprite_8272B998;

typedef struct SpriteVt_8272B998 {
    void *slots[22];
    Def_8272B998 *(*getDef)(Sprite_8272B998 *self); /* 0x58 */
} SpriteVt_8272B998;

struct Sprite_8272B998 {
    SpriteVt_8272B998 *vt;
    char pad4[8];
    char log[0x74];      /* 0xc */
    Name_8272B998 *name; /* 0x80 */
    char pad84[0x1c];
    Substitutions_8272B998 *subst; /* 0xa0 */
};

typedef struct Call_8272B998 {
    void *pad0;
    Value_8272B998 *result; /* 0x4 */
    Iface_8272B998 *target; /* 0x8 */
    char padc[0xc];
    void *env; /* 0x18 */
    int argc;  /* 0x1c */
} Call_8272B998;

extern void fn_826959C8(Value_8272B998 *value);
extern Value_8272B998 *fn_826957D0(Call_8272B998 *call, int index);
extern Object_8272B998 *fn_82696958(Value_8272B998 *value, void *env);
extern void fn_8272B128(Sprite_8272B998 *sprite);
extern void fn_8272A678(void *list, int release);
extern Name_8272B998 *fn_8269F500(Sprite_8272B998 *sprite);
extern void fn_82681E98(void *log, const char *format, ...);
extern void fn_8272B2E8(Sprite_8272B998 *sprite, Call_8272B998 *call, int index, Value_8272B998 *value);

void fn_8272B998(Call_8272B998 *call)
{
    Value_8272B998 *result;
    Sprite_8272B998 *sprite;
    Substitutions_8272B998 *subst;
    Object_8272B998 *object;
    Name_8272B998 *name;
    char ***text;
    int count;
    int i;

    result = call->result;
    fn_826959C8(result);
    result->type = 2;
    result->flag = 0;
    if (call->target != 0 && call->target->vt->getType(call->target) == 4) {
        sprite = call->target != 0 ? (Sprite_8272B998 *)((char *)call->target - 0x68) : 0;
        if (call->argc >= 1) {
            if (fn_826957D0(call, 0)->type == 1) {
                fn_8272B128(sprite);
                subst = sprite->subst;
                if (subst->list != 0) {
                    fn_8272A678(subst->list, 1);
                }
                subst->list = 0;
                sprite->subst->flags |= 2;
            } else {
                object = fn_82696958(fn_826957D0(call, 0), call->env);
                if (object != 0) {
                    if (object->iface.vt->getType(&object->iface) == 7) {
                        count = object->count;
                        for (i = 0; i < count; i++) {
                            fn_8272B2E8(sprite, call, i, object->items[i]);
                        }
                    } else {
                        fn_8272B2E8(sprite, call, 0, fn_826957D0(call, 0));
                    }
                } else {
                    name = (int)sprite->name != 0 ? sprite->name : fn_8269F500(sprite);
                    if (name != 0) {
                        text = &name->text;
                    } else {
                        text = &sprite->vt->getDef(sprite)->name->text;
                    }
                    fn_82681E98(sprite->log,
                                "%s.setImageSubstitutions() failed: parameter should be either 'null', "
                                "object or array\n",
                                **text);
                }
            }
        }
    }
}
