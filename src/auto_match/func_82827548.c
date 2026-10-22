typedef struct Node { struct Node *next; int pad[4]; int x14; } Node;
typedef struct { int x0; Node *head; } List;
typedef struct Item { char pad[0x28]; List *list; } Item;
extern void fn_82518FF0(Node **it);
extern void fn_828223C8(void *cur, Item **next);
static Item *nextItem(void *cur) { Item *next; fn_828223C8(cur, &next); return next; }
void fn_82827548(char *param_1, int *count, int *total)
{
    Item *it;
    Node *head;
    Node *n;
    int c = 0;
    int s = 0;

    it = (Item *)(param_1 + 0x2f4);
    while ((it = nextItem(it)) != 0) {
        head = it->list->head;
        n = head->next;
        while (n != head) {
            c++;
            s += n->x14;
            fn_82518FF0(&n);
        }
    }
    *count = c;
    *total = s;
}
