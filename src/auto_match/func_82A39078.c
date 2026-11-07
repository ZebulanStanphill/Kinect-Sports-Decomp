typedef struct { int handle; } Entry_82A39078;
typedef struct { void *s0; void *s4; int (*lookup)(unsigned int, int *, unsigned int); } VT_82A39078;
typedef struct { VT_82A39078 *vt; int (*release)(int); char pad[0x48]; char table[4]; } Mgr_82A39078;
extern Mgr_82A39078 *lbl_83219598;
extern int fn_82A384E8(void *table, unsigned int key, Entry_82A39078 **out);
int fn_82A39078(unsigned int key, int *out, unsigned int flags)
{
    Mgr_82A39078 *m = lbl_83219598;
    Entry_82A39078 *e;
    int hr = fn_82A384E8(m->table, key, &e);
    if (e == 0 && hr != (int)0xC000011F) return m->vt->lookup(key, out, flags);
    if (flags & 1) {
        if (m->release(key) < 0) {
            if (e != 0) m->release(e->handle);
            return (int)0xC0000001;
        }
    }
    if (e != 0) {
        if (out != 0) *out = e->handle;
        else if (m->release(e->handle) < 0) return (int)0xC0000001;
    }
    return hr;
}
