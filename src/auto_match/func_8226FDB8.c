typedef struct Node_8226FDB8 {
    struct Node_8226FDB8 *next;
    struct Node_8226FDB8 *prev;
    void *key;
    unsigned char pad[0x10b4 - 0xc];
    int busy;
} Node_8226FDB8;

typedef struct Manager_8226FDB8 {
    unsigned char pad[0xa8];
    Node_8226FDB8 *list;
} Manager_8226FDB8;

extern Manager_8226FDB8 *fn_82270B70(void);

int fn_8226FDB8(void *key, int onlyIdle)
{
    if (key != 0) {
        Node_8226FDB8 *head = fn_82270B70()->list;
        Node_8226FDB8 *n;

        for (n = head->next; n != head; n = n->next) {
            if (n->key == key && (onlyIdle == 0 || n->busy == 0)) {
                return 1;
            }
        }
    }
    return 0;
}
