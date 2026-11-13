extern void *memset(void *, int, unsigned int);
typedef struct Funcs_82A86B30 {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
    void *f10;
} Funcs_82A86B30;

extern void fn_82A86500(void);
extern void fn_82A865F0(void);
extern void fn_82A86338(void);
extern void fn_82A863D0(void);
extern void fn_82A86478(void);

void fn_82A86B30(Funcs_82A86B30 *t)
{
    memset(t, 0, sizeof(*t));
    t->f0 = (void *)fn_82A86500;
    t->f4 = (void *)fn_82A865F0;
    t->f8 = (void *)fn_82A86338;
    t->fc = (void *)fn_82A863D0;
    t->f10 = (void *)fn_82A86478;
}
