#include <functional>
#include <typeinfo>

namespace olympus { namespace sport {
namespace tabletennis {
struct BallHitObserverData;
class BallHitNotificationObserver {
public:
    void onNotify(const tabletennis::BallHitObserverData &data);
};
}
} }

using namespace olympus::sport;

typedef std::tr1::_Bind<void, void,
    std::tr1::_Bind2<std::tr1::_Callable_pmf<void (tabletennis::BallHitNotificationObserver::* const)(const tabletennis::BallHitObserverData &), tabletennis::BallHitNotificationObserver, 0>,
        tabletennis::BallHitNotificationObserver *, std::tr1::_Ph<1> > > Functor;


// boost::detail::function::function_buffer, as far as this function needs.
union function_buffer {
    void *obj_ptr;
    struct type_t {
        const type_info *type;
        bool const_qualified;
        bool volatile_qualified;
    } type;
};

enum functor_manager_operation_type {
    clone_functor_tag,
    move_functor_tag,
    destroy_functor_tag,
    check_functor_type_tag,
    get_functor_type_tag
};

extern "C" void fn_823B3A30(const function_buffer &in_buffer, function_buffer &out_buffer,
                            functor_manager_operation_type op);

extern "C" void fn_823B39F8(const function_buffer &in_buffer, function_buffer &out_buffer,
                            functor_manager_operation_type op)
{
    switch (op) {
    case get_functor_type_tag:
        out_buffer.type.type = &typeid(Functor);
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
        return;
    default:
        fn_823B3A30(in_buffer, out_buffer, op);
        return;
    }
}

