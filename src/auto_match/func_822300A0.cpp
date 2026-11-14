// stdext::bad_alloc::bad_alloc(const char *): stores the message, then bad_alloc's vtable.
// Visual C++ 2010's <exception> defines this constructor inline; the lip-sync library's
// units (built without inlining) call this copy of it.
namespace stdext {
class exception {
public:
    exception(const char *message) : _Ptr(message) {}
    virtual ~exception();
protected:
    const char *_Ptr;
};
class bad_alloc : public exception {
public:
    bad_alloc(const char *message);
    virtual ~bad_alloc();
};
}

stdext::bad_alloc::bad_alloc(const char *message) : exception(message)
{
}
