typedef struct { char pad[0xd4]; unsigned int key; } C;
typedef struct { char pad[0x48]; C **c; } N;

void fn_82DA7E38(unsigned char *out, N *a, N *b)
{
  *out = (*a->c)->key < (*b->c)->key;
}
