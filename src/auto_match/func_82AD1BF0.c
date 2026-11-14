struct Target_82AD1BF0 { int pad[10]; unsigned int *bits; };
struct Node_82AD1BF0 { int pad; struct Target_82AD1BF0 *target; int pad2; struct Node_82AD1BF0 *next; };
struct List_82AD1BF0 { int pad[2]; struct Node_82AD1BF0 *head; };
struct Key_82AD1BF0 { int pad[12]; unsigned int id; };

static __forceinline int NotNull(struct Node_82AD1BF0 *p) { if (p) return 1; return 0; }
struct Target_82AD1BF0 *fn_82AD1BF0(void *self, struct Key_82AD1BF0 *key, struct List_82AD1BF0 *list)
{
    struct Node_82AD1BF0 *node;
    int count = 0;
    struct Target_82AD1BF0 *found = 0;
    unsigned int id;

    for (node = list->head; NotNull(node); node = node->next) {
        id = key->id & 0x7ffff;
        if ((node->target->bits[(id >> 5) + 1] & (1 << (id & 31))) != 0) {
            count++;
            found = node->target;
        }
    }
    return count == 1 ? found : 0;
}