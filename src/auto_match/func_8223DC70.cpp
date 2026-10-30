// std::ios_base scalar deleting destructor: ~ios_base() { _Ios_base_dtor(this); }
extern "C" void fn_8265CA20(void *p);

namespace std {
class ios_base {
public:
    virtual __forceinline ~ios_base() { _Ios_base_dtor(this); }
private:
    static void _Ios_base_dtor(ios_base *);
};
}

extern "C" std::ios_base *fn_8223DC70(std::ios_base *self, unsigned int flags)
{
    self->std::ios_base::~ios_base();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
