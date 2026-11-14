typedef struct Ref_82FB7808 {
    short count;
    unsigned char owned : 1;
    unsigned char fixed : 1;
} Ref_82FB7808;
unsigned char fn_82FB7808(void *self, Ref_82FB7808 *ref)
{
    unsigned char r = 0;
    if (ref == 0) {
        r = 1;
    } else if (ref->owned) {
        if (ref->fixed) {
            r = 1;
        } else {
            r = --ref->count != 0;
        }
    }
    return r;
}
