typedef struct TypeInfo_8317F680 {
    char pad[10];
    short align;
} TypeInfo_8317F680;

typedef struct Type_82CFD778 {
    int pad0;
    void *members;
    int pad8;
    unsigned char kind;
    unsigned char subkind;
    unsigned char padE[2];
    unsigned short flags;
} Type_82CFD778;

extern int fn_82CEAE80(void *list);
extern Type_82CFD778 *fn_82CEAEA8(void *list, int index);
extern TypeInfo_8317F680 lbl_8317F680[];

int fn_82CFD778(Type_82CFD778 *type);

static __forceinline int BaseAlign_82CFD778(Type_82CFD778 *type)
{
    int kind = type->kind;
    int align;
    int i;

    if (kind == 0x18 || kind == 0x1f) {
        kind = type->subkind;
    }
    if (kind == 0x19) {
        align = 1;
        for (i = 0; i < fn_82CEAE80(type->members); i++) {
            if (fn_82CFD778(fn_82CEAEA8(type->members, i)) > align) {
                align = fn_82CFD778(fn_82CEAEA8(type->members, i));
            }
        }
        return align;
    }
    return lbl_8317F680[kind].align;
}

int fn_82CFD778(Type_82CFD778 *type)
{
    int align = BaseAlign_82CFD778(type);
    int extra;

    if ((type->flags & 0x180) != 0) {
        extra = ((unsigned char)(type->flags >> 8) & 1) ? 16 : 8;
        if (extra > align) {
            align = extra;
        }
    }
    return align;
}
