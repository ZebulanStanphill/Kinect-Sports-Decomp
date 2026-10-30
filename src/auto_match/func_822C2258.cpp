// boost::detail::function::functor_manager<Functor>::manage for the boost::function wrapping a
// _Bind<void, void, _Bind2<_Callable_pmf<void (BoxingSportsman::* const)(const
// SportsmanMoveStateMan::StateChangeObserverData &), BoxingSportsman, 0>, BoxingSportsman *, _Ph<1> > >:
// clone/move copy the 24-byte functor into the buffer, destroy does nothing, check_functor_type
// compares the requested type_info with the functor's, get_functor_type returns the functor's type_info.
// The type_info equality is the out-of-line library function fn_82F64538.
#include <functional>
#include <typeinfo>

namespace olympus {
    namespace sport {
        namespace boxing {
            class BoxingSportsman {};
        }
        class SportsmanMoveStateMan {
        public:
            struct StateChangeObserverData {};
        };
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::boxing::BoxingSportsman::* const)(const olympus::sport::SportsmanMoveStateMan::StateChangeObserverData &), olympus::sport::boxing::BoxingSportsman, 0>, olympus::sport::boxing::BoxingSportsman *, std::tr1::_Ph<1> > > Functor;

extern "C" unsigned char fn_82F64538(const type_info *a, const type_info *b);

struct Copy24 {
    unsigned __int64 a, b, c;
};

union function_buffer {
    struct {
        const type_info *type;
        bool const_qualified;
        bool volatile_qualified;
    } type;
    void *obj_ptr;
    char data[sizeof(Functor)];
};


extern "C" void fn_822C2258(const function_buffer *in_buffer, function_buffer *out_buffer, int op)
{
    if (op == 0 || op == 1) {
        if (out_buffer != 0)
        *(Copy24 *)out_buffer->data = *(const Copy24 *)in_buffer->data;
    } else if (op != 2) {
        if (op == 3) {
            out_buffer->obj_ptr = fn_82F64538(out_buffer->type.type, &typeid(Functor)) ? (void *)in_buffer : 0;
        } else {
            out_buffer->type.type = &typeid(Functor);
            out_buffer->type.const_qualified = false;
            out_buffer->type.volatile_qualified = false;
        }
    }
}
