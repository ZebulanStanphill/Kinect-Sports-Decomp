typedef struct {
    int pad[2];
    int refs;
} Rc;

typedef struct {
    unsigned char a;
    unsigned char b;
} Info;

typedef struct {
    Rc **rc;
    Info *info;
} Src;

typedef struct {
    Rc *rc;
    int pad;
    unsigned char kind;
    unsigned char b;
} Dst;

extern void fn_826944C8(Rc *rc);
extern void fn_82695FA0(unsigned char *kind, Info *info);

void fn_826BE0E0(Dst *d, Src *s)
{
    Rc *rc = *s->rc;
    Rc *old;
    Info *info;

    rc->refs++;
    old = d->rc;
    if (--old->refs == 0) {
        fn_826944C8(old);
    }
    d->rc = rc;
    info = s->info;
    fn_82695FA0(&d->kind, info);
    d->b = info->b;
}
