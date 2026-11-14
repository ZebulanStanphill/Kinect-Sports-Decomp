typedef struct Node_82AFE0E8 {
    unsigned int flags;          /* 0x0 */
    int unk4;
    struct Node_82AFE0E8 *next;  /* 0x8 */
    int unkc;
    unsigned int owner;          /* 0x10 */
} Node_82AFE0E8;

typedef struct List_82AFE0E8 {
    int unk0;
    Node_82AFE0E8 *first; /* 0x4 */
} List_82AFE0E8;

typedef struct Device_82AFE0E8 {
    char pad0[0x28];
    unsigned int flags;    /* 0x28 */
    char pad2c[0x26c];
    unsigned int level;    /* 0x298 */
} Device_82AFE0E8;

void fn_82AFA478(Device_82AFE0E8 *dev, unsigned int owner, unsigned int level);

static __forceinline int NotNull(Node_82AFE0E8 *p)
{
    if (p)
        return 1;
    return 0;
}

int fn_82AFE0E8(Device_82AFE0E8 *dev, List_82AFE0E8 *list, unsigned int owner, unsigned int level,
                unsigned int minLevel)
{
    Node_82AFE0E8 *n;

    if (level <= minLevel || level <= dev->level)
        return 1;
    if (level >= 0x14)
        return 0;
    if ((dev->flags & 0x2000000) != 0) {
        fn_82AFA478(dev, owner, level - 10);
        return 0;
    }
    if (level > dev->level + 10)
        return 0;
    for (n = list->first; NotNull(n); n = n->next) {
        if (n->owner != 0 && (n->flags & 0xe000000) != 0 && n->owner != owner)
            return 0;
    }
    return 1;
}
