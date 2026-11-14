typedef struct Inst_82AC6740 {
    unsigned int w0;
    unsigned int w4;
    unsigned int bits;
} Inst_82AC6740;

typedef struct Ext_82AC6740 {
    unsigned int flags;
    int kind;
} Ext_82AC6740;

typedef struct Page_82AC6740 {
    struct { char pad[0x94]; void *layout; } *owner;
} Page_82AC6740;

extern int fn_82ABDD90(void *layout, int op, unsigned int a, int b);

static __forceinline unsigned char IsArith(unsigned int op)
{
    if (op >= 1 && op <= 0x66) {
        return 1;
    }
    return 0;
}

int fn_82AC6740(Inst_82AC6740 *inst)
{
    unsigned int op = (inst->bits >> 7) & 0x7f;
    Ext_82AC6740 *ext;

    if (IsArith(op)) {
        return 1;
    }
    switch (op) {
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
        return 1;
    case 0x75: {
        Page_82AC6740 *page = (Page_82AC6740 *)((unsigned int)inst & 0xfffff000);
        ext = (Ext_82AC6740 *)((char *)inst - 0x10 + fn_82ABDD90(page->owner->layout, 0x75, 0, 0));
        if ((ext->flags & 7) != 7) {
            return 0;
        }
        if (ext->kind == 2 || ext->kind == 3) {
            return 1;
        }
        return 0;
    }
    case 0x7b:
        return 1;
    }
    return 0;
}
