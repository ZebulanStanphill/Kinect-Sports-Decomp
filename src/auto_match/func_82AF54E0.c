typedef struct { unsigned int pad : 3; unsigned int val : 16; unsigned int count : 13; int x[5]; unsigned int keys[1]; } Hdr;
typedef struct Node { Hdr *hdr; struct Node *next; } Node;
typedef struct { char pad[0x20]; Node *list; } S;

unsigned int fn_82AF54E0(void *a, S *s, unsigned int key)
{
    unsigned int best = 0;
    Node *n;

    for (n = s->list; n != 0; n = n->next) {
        Hdr *h = n->hdr;
        unsigned int i;
        for (i = 0; i < h->count; i++) {
            if (key == h->keys[i]) {
                if (h->val > best)
                    best = h->val;
                break;
            }
        }
    }
    return best;
}
