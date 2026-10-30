// Placeholder names: the original is an out-of-line member function
// (vector-style erase by index), so it needs a rename map.
struct Elem_82702A88 { int w[2]; };

struct Vec_82702A88 {
    Elem_82702A88 *data;
    unsigned int size;
    void Erase(unsigned int i);
};

extern "C" void fn_826F8438(Elem_82702A88 *e, int flag);
extern "C" void fn_826FE988(Vec_82702A88 *v, unsigned int n);
extern "C" void *memmove(void *d, const void *s, unsigned int n);

void Vec_82702A88::Erase(unsigned int i)
{
    if (size == 1) {
        fn_826FE988(this, 0);
    } else {
        fn_826F8438(&data[i], 0);
        memmove(&data[i], &data[i + 1], (size - i - 1) * sizeof(Elem_82702A88));
        size--;
    }
}
