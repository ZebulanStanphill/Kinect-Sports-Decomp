/* NOTE: symbols.txt splits this function in two: fn_827B5D18 (size 0x8) is
   its loop-closing `bne` + `blr`. This source is the whole function; only the
   symbol boundary keeps it below 100%. */
typedef struct Node827B5CF8 {
    struct Node827B5CF8 *prev;
    struct Node827B5CF8 *next;
    char pad8[0x18];
    unsigned short flags;
} Node827B5CF8;

typedef struct List827B5CF8 {
    char pad0[0x30];
    Node827B5CF8 head;
} List827B5CF8;

void fn_827B5CF8(List827B5CF8 *list)
{
    Node827B5CF8 *n;

    for (n = list->head.next; n != &list->head; n = n->next) {
        n->flags &= 0x7fff;
    }
}
