typedef struct O { char pad[0x14]; unsigned int flags; } O;
extern int fn_82F49100(void *a, void *b, O **out);

int fn_82F40FE0(void *self, void *a, unsigned int mask)
{
    O *o = 0;
    int hr = fn_82F49100(a, a, &o);
    if (hr >= 0 && (hr != 0 || (o->flags & mask) == 0))
        hr = 1;
    return hr;
}
