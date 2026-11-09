// std::tr1::_Ref_count_del<ScaleformMovieView, scaleform::ScaleformMovieViewDeleter>::_Get_deleter:
// returns the stored deleter when the requested type is ScaleformMovieViewDeleter.
extern "C" unsigned char fn_82F64538(const type_info *, const type_info *);

namespace scaleform {
struct ScaleformMovieViewDeleter {
};
}

struct RefCountDel_82670058 {
    void *vtable;
    long uses;
    long weaks;
    void *ptr;
    scaleform::ScaleformMovieViewDeleter dtor;
};

extern "C" void *fn_82670058(RefCountDel_82670058 *self, const type_info *type)
{
    return fn_82F64538(type, &typeid(scaleform::ScaleformMovieViewDeleter)) ? &self->dtor : 0;
}
