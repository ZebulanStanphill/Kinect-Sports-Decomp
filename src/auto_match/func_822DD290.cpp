// boost::function's functor_manager<token_finderF<is_any_ofF<char> > >::manage
// (boost/function/function_base.hpp): answers get_functor_type_tag (4) with the functor's typeid
// and passes every other operation to the manager (fn_822DD360). It keeps its fn_ name: its
// exact signature (and so its mangled name) isn't known.

namespace boost {
    namespace algorithm {
        namespace detail {
            template <class T0>
            struct is_any_ofF {};
            template <class T0>
            struct token_finderF {};
        }
    }
}

typedef boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > Functor;

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

extern "C" void fn_822DD360(const function_buffer &in_buffer, function_buffer &out_buffer,
                            functor_manager_operation_type op);

extern "C" void fn_822DD290(const function_buffer &in_buffer, function_buffer &out_buffer,
                            functor_manager_operation_type op)
{
    switch (op) {
    case get_functor_type_tag:
        out_buffer.type.type = &typeid(Functor);
        out_buffer.type.const_qualified = false;
        out_buffer.type.volatile_qualified = false;
        return;
    default:
        fn_822DD360(in_buffer, out_buffer, op);
        return;
    }
}
