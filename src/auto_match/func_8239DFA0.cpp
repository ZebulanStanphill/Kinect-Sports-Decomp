#include <functional>
#include <typeinfo>

namespace olympus { namespace sport {
namespace tabletennis {
struct BallHitObserverData;
struct TableTennisController_Base0_8239DFC8 { int a; };
struct TableTennisController_Base1_8239DFC8 { int b; };
class TableTennisController : public TableTennisController_Base0_8239DFC8, public TableTennisController_Base1_8239DFC8 {
public:
    void onNotify(const tabletennis::BallHitObserverData &data);
};
}
} }

using namespace olympus::sport;

typedef std::tr1::_Bind<void, void,
    std::tr1::_Bind2<std::tr1::_Callable_pmf<void (tabletennis::TableTennisController::* const)(const tabletennis::BallHitObserverData &), tabletennis::TableTennisController, 0>,
        tabletennis::TableTennisController *, std::tr1::_Ph<1> > > Functor;


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

extern "C" void fn_8239DFC8(const function_buffer &in_buffer, function_buffer &out_buffer,
                            functor_manager_operation_type op);

extern "C" void fn_8239DFA0(const function_buffer &in_buffer, function_buffer &out_buffer,
                            functor_manager_operation_type op)
{
    switch (op) {
    case get_functor_type_tag:
        out_buffer.type.type = &typeid(Functor);
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
        return;
    default:
        fn_8239DFC8(in_buffer, out_buffer, op);
        return;
    }
}

