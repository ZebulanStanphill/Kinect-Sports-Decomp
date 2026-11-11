// Unknown 32-byte payload, represented by an address-qualified placeholder.

#include <vector>

struct Element_8236D190 {
    int data[8];
};

typedef Element_8236D190 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_8236D250(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_8236D250(this, count);
}

struct Access_8236D190 : std::vector<T> { using std::vector<T>::_Reserve; };
extern "C" void fn_8236D190(std::vector<T> *self, unsigned int count) { static_cast<Access_8236D190 *>(self)->_Reserve(count); }

