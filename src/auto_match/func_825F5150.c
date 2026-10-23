extern void fn_82BFEDE8(void *h, int *out);
extern void fn_82BFFBC0(void *h);

typedef struct Inner {
    int flag;
    int pad[5];
    void *h;
} Inner;

typedef struct Sub {
    Inner *inner;
    int pad[7];
    int state;
} Sub;

void fn_825F5150(char *param_1)
{
    Sub *s = (Sub *)(param_1 + 0x8dc);
    Inner *in;
    int st[2];

    in = s->inner;
    if (in != 0) {
        if (s->state != 3) {
            if (s->state != 4) {
                return;
            }
            if (in->h != 0) {
                fn_82BFEDE8(in->h, st);
                if (st[0] == 5) {
                    fn_82BFFBC0(in->h);
                }
                in->flag = 1;
            }
        }
        s->state = 2;
    }
}
