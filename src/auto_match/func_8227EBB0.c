typedef struct Item_8227EBB0 {
    char pad0[0x18];
    unsigned int priority; /* 0x18 */
    char pad1C[0x6c - 0x1c];
    unsigned int flagsPad : 30;
    unsigned int disabled : 1; /* 0x6c, bit 1 */
    unsigned int hidden : 1;   /* 0x6c, bit 0 */
} Item_8227EBB0;

typedef struct Manager_8227EBB0 {
    char pad0[0xc];
    Item_8227EBB0 **begin; /* 0xc */
    Item_8227EBB0 **end;   /* 0x10 */
    char pad14[0x2c - 0x14];
    int current; /* 0x2c */
} Manager_8227EBB0;

int fn_8227EBB0(Manager_8227EBB0 *manager)
{
    int current;
    unsigned int best;
    unsigned int limit;
    unsigned int result;
    unsigned int index;
    unsigned int priority;
    Item_8227EBB0 **it;

    current = manager->current;
    best = 0;
    limit = 0xffffffff;
    result = 0xffffffff;
    if (current != -1) {
        limit = manager->begin[current]->priority - 1;
        if ((int)limit < 0) {
            limit = 0;
        }
    }
    index = 0;
    for (it = manager->begin; it != manager->end; it++, index++) {
        if ((unsigned char)!(*it)->disabled && (unsigned char)!(*it)->hidden) {
            priority = (*it)->priority;
            if (priority == limit) {
                result = index;
                break;
            }
            if (best <= priority && priority < limit) {
                best = priority;
                result = index;
            }
        }
    }
    if (result == 0xffffffff) {
        result = current;
    }
    return result;
}
