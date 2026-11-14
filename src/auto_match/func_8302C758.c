typedef struct Ref_8302C758 {
    short count;
    unsigned char owned : 1;
    unsigned char fixed : 1;
} Ref_8302C758;
unsigned char fn_8302C758(void *self, Ref_8302C758 *ref)
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
