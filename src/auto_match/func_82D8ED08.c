typedef struct Info {
    char pad[0xd4];
    unsigned int key;
} Info;

typedef struct Node {
    char pad[0x48];
    Info **info;
} Node;

void fn_82D8ED08(unsigned char *out, Node *a, Node *b)
{
    if (b == 0) {
        *out = 0;
        return;
    }
    if (a == 0) {
        *out = 1;
        return;
    }
    *out = (*a->info)->key < (*b->info)->key;
}
