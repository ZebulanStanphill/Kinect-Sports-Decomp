typedef struct Node { struct Node *next; unsigned int key; int value; } Node;
typedef struct Hash { int count; Node *buckets[193]; } Hash;
extern int *fn_8301A490(Hash *h, unsigned int key, unsigned int index);

int *fn_8301B1E8(Hash *h, unsigned int key)
{
    unsigned int i = key % 193;
    Node *n;
    int *v;
    for (n = h->buckets[i]; n != 0; n = n->next) {
        if (n->key == key) {
            break;
        }
    }
    v = n ? &n->value : 0;
    if (v != 0) {
        return v;
    }
    return fn_8301A490(h, key, i);
}
