// std::tr1::_Ref_count_del<T, AnimationInstanceDeleter>::_Get_deleter:
// returns the address of the stored deleter when the requested type_info matches.
// fn_82F64538 is the out-of-line type_info equality.

struct AnimationInstanceDeleter {};

extern "C" unsigned char fn_82F64538(const type_info *a, const type_info *b);

struct RefCountDel_8250B118 {
    char pad[16];
    AnimationInstanceDeleter dtor;
};

extern "C" void *fn_8250B118(RefCountDel_8250B118 *self, const type_info *ti)
{
    return fn_82F64538(ti, &typeid(AnimationInstanceDeleter)) ? (void *)&self->dtor : 0;
}
