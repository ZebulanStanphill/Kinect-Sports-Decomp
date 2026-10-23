char *strstr(const char *s, const char *sub);

typedef struct {
    char *name;
    char pad[0x4c];
} Item;

typedef struct {
    unsigned int count;
    Item *items;
} List;

int fn_82850B18(List *list, char *name, unsigned int *out)
{
    unsigned int i;

    for (i = 0; i < list->count; i++) {
        if (strstr(list->items[i].name, name) != 0) {
            *out = i;
            return 1;
        }
    }
    return 0;
}
