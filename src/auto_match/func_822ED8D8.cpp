extern "C" void fn_8265CA20(void *p);
namespace std { namespace locale { class facet { public: virtual ~facet() {} }; } } 
extern "C" std::locale::facet *fn_822ED8D8(std::locale::facet *self, unsigned int flags)
{
    self->std::locale::facet::~facet();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
