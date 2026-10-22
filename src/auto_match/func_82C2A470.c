typedef unsigned __int64 U64;

typedef struct Node {
    U64 key;
    char pad[0x1c];
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct List {
    int pad0;
    Node *head;
    Node *tail;
    int count;
} List;

typedef struct Owner {
    char pad[0x2c];
    List *list;
} Owner;

int fn_82C2A470(Owner *o, Node *n)
{
    List *list = o->list;
    Node *cur;

    n->next = 0;
    n->prev = 0;
    cur = list->head;
    if (cur == 0) {
        list->tail = n;
        list->head = n;
    } else {
        do {
            if (n->key >= cur->key) {
                n->next = cur;
                n->prev = cur->prev;
                if (cur->prev != 0) {
                    cur->prev->next = n;
                }
                cur->prev = n;
                if (cur == list->head) {
                    list->head = n;
                }
                break;
            }
            if (cur->next == 0) {
                n->prev = cur;
                n->next = 0;
                cur->next = n;
                if (cur == list->head) {
                    list->head = n;
                }
                list->tail = n;
            }
            cur = cur->next;
        } while (cur != 0);
    }
    list->count++;
    return 0;
}
