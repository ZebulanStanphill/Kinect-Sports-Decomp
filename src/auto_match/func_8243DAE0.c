#include <string.h>

typedef struct Node_8243DAE0 {
    struct Node_8243DAE0 *left;
    struct Node_8243DAE0 *parent;
    struct Node_8243DAE0 *right;
    const char *key;
    char pad[5];
    unsigned char isnil;
} Node_8243DAE0;

typedef struct {
    int pad;
    Node_8243DAE0 *head;
} Tree_8243DAE0;

void fn_8243DAE0(Node_8243DAE0 **out, Tree_8243DAE0 *t, const char **key)
{
    Node_8243DAE0 *lo = t->head;
    Node_8243DAE0 *hi = t->head;
    Node_8243DAE0 *p = t->head->parent;

    while (!p->isnil) {
        if (strcmp(p->key, *key) < 0) {
            p = p->right;
        } else {
            if (hi->isnil && strcmp(*key, p->key) < 0) {
                hi = p;
            }
            lo = p;
            p = p->left;
        }
    }
    if (hi->isnil) {
        p = t->head->parent;
    } else {
        p = hi->left;
    }
    while (!p->isnil) {
        if (strcmp(*key, p->key) < 0) {
            hi = p;
            p = p->left;
        } else {
            p = p->right;
        }
    }
    out[0] = lo;
    out[1] = hi;
}
