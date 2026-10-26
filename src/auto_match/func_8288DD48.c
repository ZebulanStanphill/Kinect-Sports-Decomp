typedef struct { char pad[0x18]; int value; } Node;
typedef struct { Node *node; } Iter;
typedef struct { char pad[0xc]; int def; char pad2[0x14 - 0xc - 4]; int map; } S;
extern Iter *fn_8288DFB8(Iter *r, int *map, unsigned int *key);

int fn_8288DD48(S *s, unsigned int key)
{
    Iter it;

    if (key == 0x8000)
        return s->def;
    return fn_8288DFB8(&it, &s->map, &key)->node->value;
}
