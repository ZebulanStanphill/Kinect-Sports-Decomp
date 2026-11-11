class __multiple_inheritance Target_822D7F88;
typedef void (Target_822D7F88::*Fn_822D7F88)(int, int, int);
struct BoundCall_822D7F88 { void *vtable; Fn_822D7F88 fn; Target_822D7F88 *object; };
extern "C" void fn_822D7F88(BoundCall_822D7F88 *self, int a, int b, bool c)
{
    Fn_822D7F88 f = self->fn;
    (self->object->*f)(a, b, c);
}
