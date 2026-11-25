#include <bitset>
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);

namespace std
{
__forceinline void _Xout_of_range(const char *message)
{
    fn_82F622E0(message);
}
} // namespace std

struct Sub_82429E60 {
    void *vtable;
    char data[0x1c];
};

struct Local_82429E60 {
    void *vtable;
    int zero;
    Sub_82429E60 stream;
};

struct Output_82429E60 {
    char pad[8];
    unsigned int count;   // 0x8
    std::bitset<10> bits; // 0xc
};

extern "C" char lbl_821B8C0C[];
extern "C" void fn_828ABF58(Sub_82429E60 *, int, int, int);
extern "C" void fn_82429898(Local_82429E60 *, void *, unsigned int *);
extern "C" int fn_8223C610(void *, int, int, int);

extern "C" void fn_82429E60(void *unused, void *input, Output_82429E60 *output)
{
    Local_82429E60 local;
    unsigned int index = 0;
    unsigned int count;
    local.zero = 0;
    local.vtable = lbl_821B8C0C;
    fn_828ABF58(&local.stream, 0, 0, 3);
    fn_82429898(&local, input, &count);
    std::bitset<10> bits;
    do {
        bits.set(index, fn_8223C610(input, 1, 0, 0) != 0);
        ++index;
    } while (index < 10);
    if (output != 0) {
        output->count = count;
        output->bits = bits;
    }
}
