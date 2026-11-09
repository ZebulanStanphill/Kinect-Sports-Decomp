extern unsigned int fn_827DA768(void *o);
extern unsigned int fn_827DA928(void *o);
extern unsigned int fn_827DA8B0(void *o);
extern void fn_827DACA8(void *o);

unsigned int fn_827DAD60(void *o)
{
    unsigned int r;

    r = fn_827DA768(o);
    r = fn_827DA928(o) | r;
    r = fn_827DA8B0(o) | r;
    fn_827DACA8(o);
    return r;
}
