// Looks up key under the critical section at self+8; copies the entry into out via
// fn_82E50338 when out is given. Returns 0xc00d36e6 when the key is not found.
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void *fn_82E2AC98(int self, unsigned key);
extern unsigned fn_82E50338(void *out, void *entry);

unsigned fn_82E2B210(int self, unsigned key, void *out)
{
    unsigned hr = 0;
    void *e;
    RtlEnterCriticalSection((void *)(self + 8));
    e = fn_82E2AC98(self, key);
    if (e) {
        if (out) {
            hr = fn_82E50338(out, e);
        }
    } else {
        hr = 0xc00d36e6;
    }
    RtlLeaveCriticalSection((void *)(self + 8));
    return hr;
}
