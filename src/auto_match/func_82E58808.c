extern void fn_82E57B08(void *, unsigned, unsigned **);
typedef struct { char pad[0x48]; char sub[0x68]; unsigned count; } Obj_82E58808;
int fn_82E58808(Obj_82E58808 *o, unsigned short n, unsigned *out)
{
    unsigned *tmp[2];
    int hr = 0;
    if (out == 0) { hr = 0x80070057; goto done; }
    if (n >= o->count) { hr = 0x80070057; goto done; }
    fn_82E57B08(o->sub, n, tmp); *out = *tmp[0];
done:
    return hr; }
