typedef struct Info_829549B8 {
    int f0;
    unsigned int version; /* 0x4 */
    int rest[2];
} Info_829549B8;

typedef struct Value_829549B8 {
    char pad0[0x18];
    void *data; /* 0x18 */
} Value_829549B8;

typedef struct Annotation_829549B8 {
    int f0;
    int kind; /* 0x4 */
    char pad8[8];
    Value_829549B8 *target;       /* 0x10 */
    Value_829549B8 *registerName; /* 0x14 */
} Annotation_829549B8;

typedef struct Link_829549B8 {
    int f0;
    int f4;
    Annotation_829549B8 *item;  /* 0x8 */
    struct Link_829549B8 *next; /* 0xc */
} Link_829549B8;

typedef struct Variable_829549B8 {
    char pad0[0x40];
    Link_829549B8 *annotations; /* 0x40 */
} Variable_829549B8;

typedef struct Binding_829549B8 {
    char pad0[0xa];
    unsigned short flags; /* 0xa */
} Binding_829549B8;

typedef struct Compiler_829549B8 {
    char pad0[0xc8];
    unsigned int target; /* 0xc8 */
    char padCC[0x90];
    int bindRegisters; /* 0x15c */
} Compiler_829549B8;

extern int fn_828F0170(void *target, int zero, Info_829549B8 *info);
extern void fn_82975B00(Compiler_829549B8 *self, int location, int error, const char *format, ...);
extern int fn_82F65B18(const char *text);
extern int tolower(int c);
extern int isdigit(int c);

int fn_829549B8(Compiler_829549B8 *self, Variable_829549B8 *variable, Binding_829549B8 *binding)
{
    Link_829549B8 *link;
    Annotation_829549B8 *annotation;
    void *target;
    char *name;
    char *exact;
    char *compatible;
    char *any;
    char *p;
    unsigned int index;
    Info_829549B8 info;

    exact = 0;
    compatible = 0;
    any = 0;
    for (link = variable->annotations; link != 0; link = link->next) {
        annotation = link->item;
        if (annotation->kind != 0x12)
            continue;
        target = 0;
        if (annotation->target != 0)
            target = annotation->target->data;
        name = 0;
        if (annotation->registerName != 0)
            name = (char *)annotation->registerName->data;
        if (target != 0) {
            if (name != 0 && fn_828F0170(target, 0, &info) >= 0 && tolower(*name) == 'c') {
                if (self->target == info.version)
                    exact = name;
                else if (((self->target ^ info.version) & 0xffff0000) == 0 && (info.version & 0xffff) == 0)
                    compatible = name;
            }
        } else if (name != 0 && tolower(*name) == 'c') {
            any = name;
        }
    }
    if (exact == 0) {
        exact = compatible;
        if (exact == 0) {
            exact = any;
            if (exact == 0)
                return 0;
        }
    }
    if (self->bindRegisters != 0) {
        if (tolower(exact[0]) != 'c')
            return 0;
        if (!isdigit(exact[1]))
            return 0;
        for (p = exact + 2; isdigit(*p); p++) {
        }
        if (*p != 0)
            return 0;
        index = fn_82F65B18(exact + 1);
        if (index > 0x1fff) {
            fn_82975B00(self, 0, 0,
                        "Constant variable '%s' bound to register greater than 8191 (%d requested)",
                        exact + 2, index);
            return 0x80004005;
        }
        binding->flags |= (unsigned short)(index << 2) | 2;
    } else {
        binding->flags |= 2;
    }
    return 0;
}
