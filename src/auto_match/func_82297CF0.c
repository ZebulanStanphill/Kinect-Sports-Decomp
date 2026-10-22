typedef int (*code)();
extern int fn_8223FDB8(int p);

typedef struct Sentry {
    int *ostr;
    char ok;
} Sentry;

#define IOS(p) ((char *)(p) + ((int *)*(p))[1])

Sentry *fn_82297CF0(Sentry *s, int *ostr)
{
    int buf;

    s->ostr = ostr;
    buf = *(int *)(IOS(ostr) + 0x38);
    if (buf != 0) {
        (*(code *)(*(int *)buf + 4))(buf);
    }
    if (*(int *)(IOS(ostr) + 0xc) == 0 && *(int *)(IOS(ostr) + 0x3c) != 0) {
        fn_8223FDB8(*(int *)(IOS(ostr) + 0x3c));
    }
    s->ok = *(int *)(IOS(ostr) + 0xc) == 0;
    return s;
}
