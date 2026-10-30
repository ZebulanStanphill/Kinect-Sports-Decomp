extern "C" void fn_8265CA20(void *p);
namespace std { namespace tr1 { class _Ref_count_base { public: virtual ~_Ref_count_base() {} }; } } 
extern "C" std::tr1::_Ref_count_base *fn_822C5E98(std::tr1::_Ref_count_base *self, unsigned int flags)
{
    self->std::tr1::_Ref_count_base::~_Ref_count_base();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
