typedef struct Src_82428268 {
    char pad[0x1c];
    float rate;
    int f20;
    int f24;
} Src_82428268;

typedef struct Dst_82428268 {
    char pad0[0x30];
    int f30;
    int f34;
    char pad38[0x40 - 0x38];
    int f40;
    int f44;
    int f48;
    int f4c;
    float rate;
    char pad54[0xe4 - 0x54];
    unsigned int irate;
    char pade8[0x19c - 0xe8];
    int f19c;
    int f1a0;
    int f1a4;
} Dst_82428268;

void fn_82428268(Src_82428268 *s, Dst_82428268 *d)
{
    d->f30 = 0;
    d->rate = s->rate;
    d->f40 = 0;
    d->f48 = s->f24;
    d->f4c = 0;
    d->f34 = 1;
    d->irate = (unsigned int)s->rate;
    d->f19c = 0;
    d->f1a0 = 0;
    d->f1a4 = 0;
}
