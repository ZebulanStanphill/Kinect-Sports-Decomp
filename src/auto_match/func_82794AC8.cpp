// Placeholder names: the original is an out-of-line member function
// (vector-style erase by index), so it needs a rename map.
struct Elem_82794AC8 { int w[3]; };

struct Vec_82794AC8 {
    Elem_82794AC8 *data;
    unsigned int size;
    void Erase(unsigned int i);
};

extern "C" void fn_8278FE78(Elem_82794AC8 *e, int flag);
extern "C" void fn_82794758(Vec_82794AC8 *v, unsigned int n);
extern "C" void *memmove(void *d, const void *s, unsigned int n);

void Vec_82794AC8::Erase(unsigned int i)
{
    if (size == 1) {
        fn_82794758(this, 0);
    } else {
        fn_8278FE78(&data[i], 0);
        memmove(&data[i], &data[i + 1], (size - i - 1) * sizeof(Elem_82794AC8));
        size--;
    }
}
