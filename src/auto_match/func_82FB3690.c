typedef struct Obj_82FB3690 {
    int field_0;
    void *head;
    int field_8;
    int field_C;
    int field_10;
    unsigned int count;
} Obj_82FB3690;

extern int fn_82FB36E8(void **list, void *node, int flag);

static __forceinline int notNull(void *p)
{
    if (p != 0) {
        return 1;
    }
    return 0;
}

void fn_82FB3690(Obj_82FB3690 *param_1)
{
    if (param_1->count > 0) {
        while (notNull(param_1->head)) {
            fn_82FB36E8(&param_1->head, param_1->head, 0);
        }
    }
}
