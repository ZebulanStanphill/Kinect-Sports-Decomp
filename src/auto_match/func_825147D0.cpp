// std::tr1::_Ref_count_del<Live::Session::Session_c, std::default_delete<Live::Session::Session_c> >::_Get_deleter:
// returns the address of the stored deleter when the requested type_info matches.
// fn_82F64538 is the out-of-line type_info equality.
#include <memory>

namespace Live { namespace Session { class Session_c; } }

extern "C" unsigned char fn_82F64538(const type_info *a, const type_info *b);

struct RefCountDel_825147D0 {
    char pad[16];
    std::default_delete<Live::Session::Session_c> dtor;
};

extern "C" void *fn_825147D0(RefCountDel_825147D0 *self, const type_info *ti)
{
    return fn_82F64538(ti, &typeid(std::default_delete<Live::Session::Session_c>)) ? (void *)&self->dtor : 0;
}
