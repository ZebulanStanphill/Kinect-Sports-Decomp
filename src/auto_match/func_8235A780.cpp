// _Delete_this(bool deallocate) of a std::tr1::function implementation (<functional>): destroys
// the object through its virtual destructor and frees it if asked. The linker folded the
// instantiations for different functors into this one, so it keeps its fn_ name.

extern "C" void fn_8265CA20(void *ptr);  // operator delete

// The implementation base, declared by hand for its vtable layout: _Copy, _Do_call,
// _Target_type, _Delete_this, then the virtual destructor (slot 4).
class FuncImpl {
public:
    virtual FuncImpl *_Copy(void *where) const = 0;
    virtual void _Do_call() = 0;
    virtual const type_info &_Target_type() const = 0;
    virtual void _Delete_this(bool deallocate) = 0;
    virtual ~FuncImpl() {}
};

extern "C" void fn_8235A780(FuncImpl *self, bool deallocate)
{
    self->~FuncImpl();
    if (deallocate)
        fn_8265CA20(self);
}
