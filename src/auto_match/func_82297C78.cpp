#include <ostream>
extern "C" void fn_8265CA20(void *p);
extern "C" char lbl_821AA968[];
extern "C" void *fn_82297C78(void *p, unsigned int flags)
{
    char *self = (char *)p - 8;
    char *ios = self + 8;
    *(char **)(ios + (*(int **)self)[1] - 8) = lbl_821AA968;
    ((std::ios_base *)ios)->std::ios_base::~ios_base();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
