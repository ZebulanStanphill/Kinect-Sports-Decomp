typedef struct Entry_82A59718 {
    char pad[0x30];
    int key;
} Entry_82A59718;

typedef struct Node_82A59718 {
    Entry_82A59718 *value;
    struct Node_82A59718 *next;
} Node_82A59718;

typedef struct Bucket_82A59718 {
    Node_82A59718 *head;
    int pad[9];
} Bucket_82A59718;

typedef struct Table_82A59718 {
    int pad[8];
    Bucket_82A59718 buckets[13];
} Table_82A59718;

Entry_82A59718 *fn_82A59718(Table_82A59718 *t, int key)
{
    Node_82A59718 *n;
    Node_82A59718 *cur;
    Entry_82A59718 *e;

    n = t->buckets[key % 13].head;
    do {
        cur = n;
        if (cur != 0) {
            n = cur->next;
            e = cur->value;
        } else {
            e = 0;
        }
    } while (e->key != key);
    return e;
}
