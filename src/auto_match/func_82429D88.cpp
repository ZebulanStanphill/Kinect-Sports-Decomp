#include <bitset>
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);

namespace std
{
__forceinline void _Xout_of_range(const char *message)
{
    fn_82F622E0(message);
}
} // namespace std
struct Sub_82429D88;

struct Vtable_82429D88 {
    void *slots[4];
    void (*write)(Sub_82429D88 *, void *, int *);
};

struct Sub_82429D88 {
    Vtable_82429D88 *vtable;
    char data[0x1c];
};

struct Local_82429D88 {
    void *vtable;
    int zero;
    Sub_82429D88 stream;
};

struct Input_82429D88 {
    char pad[8];
    int count;
    std::bitset<10> bits;
};

extern "C" char lbl_821B8C0C[];
extern "C" void fn_828ABF58(Sub_82429D88 *, int, int, int);
extern "C" void fn_8223C478(void *, int, int);
extern "C" void fn_828E9DB8(void *, unsigned int, int);

extern "C" void fn_82429D88(void *unused, void *output, Input_82429D88 *input)
{
    Local_82429D88 local;
    unsigned int index = 0;
    int count;
    local.zero = 0;
    local.vtable = lbl_821B8C0C;
    fn_828ABF58(&local.stream, 0, 0, 3);
    count = input->count;
    local.stream.vtable->write(&local.stream, output, &count);
    do {
        unsigned char set = input->bits.test(index);
        fn_8223C478(output, 1, 0);
        fn_828E9DB8(output, set != 0, 1);
        ++index;
    } while (index < 10);
}
