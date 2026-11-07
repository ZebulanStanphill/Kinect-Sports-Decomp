typedef struct Entry_8235D230 {
    unsigned char name[64];
    unsigned char data[64];
    float f[4];
    int v[4];
} Entry_8235D230;

typedef struct Owner_8235D230 {
    char pad[0x1b9c];
    Entry_8235D230 *entries;
    unsigned int count;
} Owner_8235D230;

int fn_8235D230(Owner_8235D230 *self, const unsigned char *name, Entry_8235D230 *out)
{
    Entry_8235D230 *arr;
    Entry_8235D230 *e;
    unsigned int i;
    int j;

    arr = self->entries;
    if (arr != 0) {
        for (i = 0; i < self->count; i++) {
            const unsigned char *p = name;
            const unsigned char *q = arr[i].name;
            unsigned char c1 = *p;
            unsigned char c2 = *q;
            while (c1 == c2) {
                p++;
                q++;
                if (c1 == 0)
                    goto found;
                c1 = *p;
                c2 = *q;
            }
            if (c1 - c2 == 0)
                goto found;
        }
    }
    return 0;

found:
    e = &arr[i];
    for (j = 0; j < 64; j++)
        out->name[j] = e->name[j];
    for (j = 0; j < 64; j++)
        out->data[j] = e->data[j];
    out->f[0] = e->f[0];
    out->f[1] = e->f[1];
    out->f[2] = e->f[2];
    out->f[3] = e->f[3];
    out->v[0] = e->v[0];
    out->v[1] = e->v[1];
    out->v[2] = e->v[2];
    out->v[3] = e->v[3];
    return 1;
}
