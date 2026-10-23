extern int fn_822EF538(void *h);

typedef struct {
    void *h;
    unsigned char flag;
} Obj;

void fn_822EF000(Obj *o)
{
    if (o->h == 0 || fn_822EF538(o->h) == -1) {
        o->h = 0;
        o->flag = 1;
    } else {
        o->flag = 0;
    }
}
