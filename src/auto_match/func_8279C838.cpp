// Placeholder names: the original is an out-of-line member function
// (vector-style erase by index), so it needs a rename map.
struct Elem_8279C838 { int w[12]; };

struct Vec_8279C838 {
    Elem_8279C838 *data;
    unsigned int size;
    void Erase(unsigned int i);
};

extern "C" void fn_827245E8(Elem_8279C838 *e, int flag);
extern "C" void fn_8279BAE0(Vec_8279C838 *v, unsigned int n);
extern "C" void *memmove(void *d, const void *s, unsigned int n);

void Vec_8279C838::Erase(unsigned int i)
{
    if (size == 1) {
        fn_8279BAE0(this, 0);
    } else {
        fn_827245E8(&data[i], 0);
        memmove(&data[i], &data[i + 1], (size - i - 1) * sizeof(Elem_8279C838));
        size--;
    }
}
