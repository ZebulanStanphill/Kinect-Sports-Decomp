typedef struct { char pad[0x14]; unsigned int key; } Node;
typedef struct { int unk0; Node *node; } Ref;

unsigned char fn_83089DB8(Ref *a, Ref *b)
{
    return a->node->key < b->node->key;
}
