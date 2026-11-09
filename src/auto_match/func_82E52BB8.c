// Kinect Sports retail 4D5308C9, function 0x82E52BB8 (120 bytes).
// Looks up key under the store lock (self+4); copies the entry into out via fn_82E50338
// when out is given. Returns 0xc00d36e6 when the key is not found.
extern void fn_82E50F00(int lock, int mode);
extern void fn_82E51028(int lock, int mode);
extern void *fn_82E52428(int self, unsigned key);
extern unsigned fn_82E50338(void *out, void *entry);

unsigned fn_82E52BB8(int self, unsigned key, void *out)
{
    unsigned hr = 0;
    void *e;
    fn_82E50F00(self + 4, 1);
    e = fn_82E52428(self, key);
    if (e) {
        if (out) {
            hr = fn_82E50338(out, e);
        }
    } else {
        hr = 0xc00d36e6;
    }
    fn_82E51028(self + 4, 1);
    return hr;
}
