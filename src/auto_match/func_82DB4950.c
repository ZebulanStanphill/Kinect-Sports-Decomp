typedef struct S82DB4950 {
    char pad[0xd4];
    unsigned int key;
} S82DB4950;

void fn_82DB4950(unsigned char *out, S82DB4950 *a, S82DB4950 *b)
{
    *out = a->key < b->key;
}
