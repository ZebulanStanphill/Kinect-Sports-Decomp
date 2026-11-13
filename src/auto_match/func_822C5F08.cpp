// boost::function invoker (void_function_obj_invoker1::invoke) for a
// std::tr1::_Bind of a member function pointer, the object and one placeholder,
// stored in place in the function buffer: it copies the bound pointer to member
// (8 bytes: function and this adjustment) and calls it on the bound object,
// forwarding the one argument. Its manager is fn_822C20F0 (BoxingSportsman
// member taking a const SportsmanMoveStateMan::StateChangeObserverData &); four
// invoker tables (lbl_831D7F34, lbl_831D84F0, lbl_831DAA68, lbl_831DDAC8) use
// it, so it is folded and keeps its fn_ name.
class __multiple_inheritance Target_822C5F08;
struct Arg_822C5F08;

typedef void (Target_822C5F08::*Fn_822C5F08)(const Arg_822C5F08 &);

// The bound functor in the function buffer: member function pointer, object.
struct BoundCall_822C5F08 {
    Fn_822C5F08 fn;
    Target_822C5F08 *object;
};

extern "C" void fn_822C5F08(BoundCall_822C5F08 *self, const Arg_822C5F08 &a)
{
    Fn_822C5F08 fn = self->fn;
    (self->object->*fn)(a);
}
