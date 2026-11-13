// Deleting destructor of std::numpunct<wchar_t> (its vtable's slot; still under its
// fn_ name). The destructor is protected, so it is called as a derived class
// would call it.
#include <locale>

extern "C" void fn_8265CA20(void *ptr); // operator delete

struct Numpunct_82296470 : std::numpunct<wchar_t> {
    void Destroy() { this->std::numpunct<wchar_t>::~numpunct(); }
};

extern "C" std::numpunct<wchar_t> *fn_82296470(std::numpunct<wchar_t> *self, unsigned int flags)
{
    static_cast<Numpunct_82296470 *>(self)->Destroy();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
