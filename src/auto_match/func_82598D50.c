typedef struct Item Item;
struct Item {
    int pad0;
    Item *next;
    char pad[0x190 - 8];
    int (*check)(Item *);
};

typedef struct {
    unsigned short elemSize;
    short pad;
    char *begin;
    char *end;
} Vec;

typedef struct {
    char pad[0x8cc];
    Vec *stack;
    int count;
} Mgr;

int fn_82598D50(Mgr *param_1, Item **__restrict param_2, Item **__restrict param_3)
{
    int result;
    Item *it;

    *param_2 = 0;
    *param_3 = 0;
    result = 1;
    if (param_1->count != 0) {
        for (it = *(Item **)(param_1->stack->end - param_1->stack->elemSize); it != 0; it = it->next) {
            if (it->check(it) == 0) {
                result = 0;
                if (*param_2 == 0) {
                    *param_2 = it;
                } else if (*param_3 == 0) {
                    *param_3 = it;
                }
            }
        }
    }
    return result;
}
