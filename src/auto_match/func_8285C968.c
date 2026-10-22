typedef struct Info {
    unsigned char pad[0x44];
    int count;
} Info;

typedef struct Ext {
    unsigned char pad[0x44];
    Info *info;
} Ext;

typedef struct Node {
    unsigned char pad0[0x1c];
    unsigned char a[0xc];
    unsigned char b[0xc];
    struct Node *n34;
    struct Node *n38;
    unsigned char pad3c[4];
    Ext *ext;
} Node;

void fn_8285C968(Node *self, Node *link, int *base, Node **other, unsigned char **side,
                 int *first, int *total)
{
    int v;
    int n;
    Info *info;

    v = *base;
    *total = 0;
    n = v + 1;
    *first = v;
    if (link->n34 == self) {
        *other = link->n38;
        *side = link->a;
        if (self->ext == 0) {
            return;
        }
        if (*(int *)((unsigned char *)self->ext + 0x44) == 0) {
            return;
        }
    } else {
        *other = link->n34;
        *side = link->b;
        if (self->ext == 0) {
            return;
        }
        if (*(int *)((unsigned char *)self->ext + 0x44) == 0) {
            return;
        }
        info = (*other)->ext->info;
        if (info != 0) {
            n = info->count + n;
        }
    }
    *total = n;
}
