typedef struct Node { struct Node *next; } Node;
typedef struct { Node **tbl; unsigned int bucket; Node *node; } It;

void fn_8301A448(It *it)
{
    it->node = it->node->next;
    while (it->node == 0) {
        if (++it->bucket >= 0xc1)
            return;
        it->node = it->tbl[it->bucket];
    }
}
