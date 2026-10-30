// Placeholder names: the original is an out-of-line member function
// (vector-style erase by index), so it needs a rename map.
struct Elem_82730C38 { int w[5]; };

struct Vec_82730C38 {
    Elem_82730C38 *data;
    unsigned int size;
    void Erase(unsigned int i);
};

extern "C" void fn_82725F50(Elem_82730C38 *e, int flag);
extern "C" void fn_82730B00(Vec_82730C38 *v, unsigned int n);
extern "C" void *memmove(void *d, const void *s, unsigned int n);

void Vec_82730C38::Erase(unsigned int i)
{
    if (size == 1) {
        fn_82730B00(this, 0);
    } else {
        fn_82725F50(&data[i], 0);
        memmove(&data[i], &data[i + 1], (size - i - 1) * sizeof(Elem_82730C38));
        size--;
    }
}
