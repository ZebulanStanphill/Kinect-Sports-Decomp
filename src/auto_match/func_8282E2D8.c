typedef struct LNode { struct LNode *next; struct LNode *prev; int pad8; void *src; unsigned int size; int pad14; int off; } LNode;
typedef struct { int pad; LNode *head; } List;
typedef struct { char pad[0x14]; unsigned char key; char pad2[0xb]; int base; } A;
typedef struct { char pad[0x24]; int base; unsigned char key; char pad2[0x13]; List *list; } B;
typedef struct { char pad[0x2f4]; char la[8]; char lb[8]; } Self;
extern void fn_828223C8(void *node, void *out);
extern void fn_82518FF0(LNode **it);
extern void *memcpy(void *d, const void *s, unsigned int n);

void fn_8282E2D8(Self *self)
{
    A *an;
    A *a;
    B *b;
    LNode *it;
    LNode *head;
    List **pl;
    int *pbase;
    for (fn_828223C8(self->la, &an); an != 0; fn_828223C8(an, &an)) { a = an;
        fn_828223C8(self->lb, &b);
        while (b != 0) {
            if (b->key == a->key) {
                pl = &b->list;
                head = (*pl)->head;
                it = head->next;
                if (it != head) {
                    pbase = &b->base;
                    do {
                        memcpy((char *)(it->off + a->base + *pbase), it->src, it->size);
                        fn_82518FF0(&it);
                    } while (it != (*pl)->head);
                }
            }
            fn_828223C8(b, &b);
        }
    }
}
