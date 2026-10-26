typedef struct { char pad[0x2a]; unsigned short child; unsigned short next; char pad2[6]; } Node;
typedef struct { char pad[8]; Node *nodes; char pad2[0x10]; unsigned char *flags; } S;

void fn_827F9920(S *s, unsigned int idx, unsigned char flag)
{
    do {
        Node *n = &s->nodes[idx];
        s->flags[idx] |= flag;
        if (n->child != 0xffff)
            fn_827F9920(s, n->child, flag);
        idx = n->next;
    } while (idx != 0xffff);
}
