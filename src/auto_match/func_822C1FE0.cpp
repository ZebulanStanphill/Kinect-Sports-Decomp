// std::tr1::_Ref_count_del<T, red::asset::restricted::AssetPointerDeleter>::_Get_deleter:
// returns the address of the stored deleter when the requested type_info matches.
// fn_82F64538 is the out-of-line type_info equality.

namespace red { namespace asset { namespace restricted { struct AssetPointerDeleter {}; } } }

extern "C" unsigned char fn_82F64538(const type_info *a, const type_info *b);

struct RefCountDel_822C1FE0 {
    char pad[16];
    red::asset::restricted::AssetPointerDeleter dtor;
};

extern "C" void *fn_822C1FE0(RefCountDel_822C1FE0 *self, const type_info *ti)
{
    return fn_82F64538(ti, &typeid(red::asset::restricted::AssetPointerDeleter)) ? (void *)&self->dtor : 0;
}
