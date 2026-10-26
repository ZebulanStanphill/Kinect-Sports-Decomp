typedef struct {
    char pad[0x14];
    int count;
    unsigned int *data;
} S;

void fn_827F3C58(S *p, unsigned short idx, unsigned int v)
{
    if (p->data[idx] == v) {
        return;
    }
    p->data[idx] = v;
    p->count++;
}
