typedef struct ListItem_82AB66F8 {
    unsigned int unk0;
    unsigned int unk4;
    unsigned int next;
} ListItem_82AB66F8;

typedef struct List_82AB66F8 {
    unsigned int unk0[4];
    unsigned int end;
} List_82AB66F8;

extern void fn_82AB15D0(int level, const char *fmt, ...);

unsigned int fn_82AB66F8(List_82AB66F8 *list, ListItem_82AB66F8 *item)
{
    unsigned int next;

    if (item == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pItem",
                    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp",
                    0xdd4);
        next = 0;
    } else {
        next = item->next;
    }
    return next != list->end ? next : 0;
}
