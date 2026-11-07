namespace R1 {
namespace Soundscape {
class AudioVariant_c {
public:
    AudioVariant_c(unsigned int id);
    unsigned int data[12];
};
}
}

extern "C" int fn_822924C0(void *out, unsigned int src);
extern "C" void fn_822A9D80(unsigned int *result, int map, R1::Soundscape::AudioVariant_c *key);
extern "C" void fn_82864898(R1::Soundscape::AudioVariant_c *v);

extern "C" int fn_822A8928(int param_1, int param_2, unsigned int param_3, void *param_4)
{
    unsigned int it;

    if (param_3 == 0) {
        return (int)0x80004005;
    }
    R1::Soundscape::AudioVariant_c v(param_3);
    param_1 = param_2 * 0x10 + param_1;
    fn_822A9D80(&it, param_1 + 4, &v);
    if (it != *(unsigned int *)(param_1 + 8)) {
        fn_822924C0(param_4, it + 0xc);
        fn_82864898(&v);
        return 0;
    }
    fn_82864898(&v);
    return (int)0x80004005;
}
