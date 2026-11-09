// std::tr1::_Ref_count_del<Live::Network::BaseNetwork_c, std::default_delete<Live::Network::BaseNetwork_c> >::_Get_deleter:
// returns the address of the stored deleter when the requested type_info matches.
// fn_82F64538 is the out-of-line type_info equality.
#include <memory>

namespace Live { namespace Network { class BaseNetwork_c; } }

extern "C" unsigned char fn_82F64538(const type_info *a, const type_info *b);

struct RefCountDel_82514818 {
    char pad[16];
    std::default_delete<Live::Network::BaseNetwork_c> dtor;
};

extern "C" void *fn_82514818(RefCountDel_82514818 *self, const type_info *ti)
{
    return fn_82F64538(ti, &typeid(std::default_delete<Live::Network::BaseNetwork_c>)) ? (void *)&self->dtor : 0;
}
