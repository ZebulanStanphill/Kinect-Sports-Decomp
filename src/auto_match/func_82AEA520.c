typedef struct Inst_82AEA520 Inst_82AEA520;

typedef struct Flags_82AEA520 {
    unsigned int a : 1;
    unsigned int linked : 1;
    unsigned int c : 2;
    unsigned int mask : 3;
    unsigned int reg : 12;
    unsigned int swizzle : 8;
    unsigned int e : 4;
    unsigned int last : 1;
} Flags_82AEA520;

typedef struct Use_82AEA520 {
    Flags_82AEA520 flags;      /* 0x00 */
    unsigned int pad4;         /* 0x04 */
    struct Use_82AEA520 *next; /* 0x08 */
    Inst_82AEA520 *owner;      /* 0x0c */
    Inst_82AEA520 *user;       /* 0x10 */
} Use_82AEA520;

struct Inst_82AEA520 {
    int pad0;
    Use_82AEA520 *uses; /* 0x04 */
    unsigned int pad8 : 10;
    unsigned int argCount : 3; /* 0x08 */
    unsigned int pad8b : 19;
    int padC;
    unsigned char opFlags; /* 0x10 */
    char pad11[0x2c - 0x11];
    Use_82AEA520 *args[4]; /* 0x2c */
};

extern unsigned char fn_82ACB0F8(Inst_82AEA520 *inst, Inst_82AEA520 *user);

static __forceinline int Less_82AEA520(unsigned int index, unsigned int count)
{
    if (index < count) {
        return 1;
    }
    return 0;
}

static __forceinline int NotNull_82AEA520(Use_82AEA520 *use)
{
    if (use) {
        return 1;
    }
    return 0;
}

void fn_82AEA520(void *unused, Inst_82AEA520 *inst)
{
    unsigned int i;

    for (i = 0; Less_82AEA520(i, inst->argCount); i++) {
        Inst_82AEA520 *source = inst->args[i]->owner;
        Use_82AEA520 **link = &source->uses;
        Use_82AEA520 *use;

        while (NotNull_82AEA520(use = *link)) {
            Inst_82AEA520 *user = use->user;

            if (user != 0 && use->flags.mask != 0 && user != inst && (user->opFlags & 1) &&
                fn_82ACB0F8(inst, user)) {
                unsigned int map = 0;
                unsigned int j;
                unsigned int count = inst->argCount;
                Use_82AEA520 **prev;
                Use_82AEA520 *walk;
                unsigned int swizzle;

                for (j = 0; Less_82AEA520(j, count); j++) {
                    Use_82AEA520 *arg = inst->args[j];

                    if (arg->owner == source) {
                        unsigned int shift = (*(unsigned int *)&arg->flags >> 4) & 6;

                        map = (map & ~(3 << shift)) | (j << shift);
                    }
                }
                if ((unsigned char)use->flags.linked != 0) {
                    Use_82AEA520 *other;

                    for (other = inst->uses; NotNull_82AEA520(other); other = other->next) {
                        if (other->user != 0 && other->flags.mask != 0) {
                            break;
                        }
                    }
                    use->flags.linked = 0;
                    use->flags.reg = other->flags.reg;
                    use->flags.linked = 1;
                }
                prev = &use->owner->uses;
                while ((walk = *prev) != use) {
                    prev = &walk->next;
                }
                *prev = use->next;
                use->next = inst->uses;
                inst->uses = use;
                swizzle = use->flags.swizzle;
                use->owner = inst;
                use->flags.swizzle =
                    ((((map >> ((swizzle >> 5) & 6)) & 3) << 2 | ((map >> ((swizzle >> 3) & 6)) & 3)) << 2 |
                     ((map >> ((swizzle >> 1) & 6)) & 3))
                        << 2 |
                    ((map >> ((swizzle & 3) << 1)) & 3);
                use->flags.last = 0;
            }
            if (*link == use) {
                link = &use->next;
            }
        }
    }
}
