// Deleting destructor of std::numpunct<char> (its vtable's slot; still under its
// fn_ name). The destructor is protected, so it is called as a derived class
// would call it.
#include <locale>

extern "C" void fn_8265CA20(void *ptr); // operator delete

struct Numpunct_8223EFC0 : std::numpunct<char> {
    void Destroy() { this->std::numpunct<char>::~numpunct(); }
};

extern "C" std::numpunct<char> *fn_8223EFC0(std::numpunct<char> *self, unsigned int flags)
{
    static_cast<Numpunct_8223EFC0 *>(self)->Destroy();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
