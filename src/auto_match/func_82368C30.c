typedef struct Group_82368C30 Group_82368C30;

typedef struct List_82368C30 {
    Group_82368C30 **groups;    /* 0x00 */
    char pad4[0xc];
    int current;                /* 0x10 */
} List_82368C30;

typedef struct Lists_82368C30 {
    List_82368C30 **items;
} Lists_82368C30;

typedef struct Self_82368C30 {
    char pad0[8];
    Lists_82368C30 *lists;      /* 0x008 */
    char pad1[0x41c - 0xc];
    int enabled;                /* 0x41c */
    int which;                  /* 0x420 */
    int key;                    /* 0x424 */
} Self_82368C30;

extern int fn_822ABA88(Group_82368C30 *group, int key);
int fn_82368C30(Self_82368C30 *self)
{
    List_82368C30 *list;
    int key;
    int r = 0;

    if (self->enabled != 0) {
        key = self->key;
        if (key != -1) {
            list = self->lists->items[self->which];
            r = fn_822ABA88(list->groups[list->current], key);
        }
    }
    return r;
}
