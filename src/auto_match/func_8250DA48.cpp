#include <vector>

namespace std
{
template <> vector<float>::vector(const vector<float> &source);
template <> bool vector<float>::_Buy(size_type capacity);
} // namespace std

struct Source_8250DA48 {
    int unused00;
    void *shape; /* 0x04 */
    char pad08[0x28];
    float weight; /* 0x30 */
};

extern "C" unsigned int fn_827F3EB0(void *shape);

struct __declspec(novtable) Base_8250DA48 {
    Base_8250DA48(Source_8250DA48 *source);
    virtual void Unused();

    char pad04[0xe4];
};

struct Weights_8250DA48 : Base_8250DA48 {
    Weights_8250DA48(Source_8250DA48 *source);
    virtual void Unused();

    std::vector<float> values;  /* 0xe8 */
    std::vector<float> current; /* 0xf8 */
    float weight;               /* 0x108 */
    float target;               /* 0x10c */
    int unused110;              /* 0x110 */
    int unused114;              /* 0x114 */
};

Weights_8250DA48::Weights_8250DA48(Source_8250DA48 *source)
    : Base_8250DA48(source), values(fn_827F3EB0(source->shape), 1.0f), current(values),
      weight(source->weight), target(source->weight), unused110(0), unused114(0)
{
}
