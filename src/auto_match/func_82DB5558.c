typedef struct Node {
    char pad[0xa8];
    unsigned short id;
} Node;

typedef struct Link {
    int pad0;
    Node *a;
    Node *b;
} Link;

typedef struct Obj {
    char pad[0x30];
    Link *link;
} Obj;

typedef struct Elem {
    Obj *obj;
    int b;
    int c;
} Elem;

typedef struct Array {
    Elem *data;
    int count;
} Array;
void fn_82DB5558(Array *arr, int *idx, unsigned char **table)
{
    int i;
    for (i = *idx; i < arr->count; i++) {
        Link *l = arr->data[i].obj->link;
        if ((*table)[l->a->id] == 0x10 && (*table)[l->b->id] == 0x10) {
            int j = (*idx)++;
            Elem *a = &arr->data[j];
            Elem *b = &arr->data[i];
            Elem t = *a;
            *a = *b;
            *b = t;
        }
    }
}
