extern void fn_8289C1A0(void *p);

typedef struct Hdr {
    int pad[2];
    unsigned int count;
} Hdr;

typedef struct Owner {
    int pad[2];
    void **data;
    int pad2;
    Hdr *hdr;
} Owner;

void fn_82897648(Owner *param_1)
{
    unsigned int n;
    unsigned int i;
    void *v;

    if (param_1->hdr != 0) {
        n = param_1->hdr->count;
        for (i = 0; i < n; i++) {
            if (i < param_1->hdr->count) {
                v = param_1->data[i];
                if (v != 0) {
                    fn_8289C1A0(v);
                    if (i < param_1->hdr->count) {
                        param_1->data[i] = 0;
                    }
                }
            }
        }
    }
}
