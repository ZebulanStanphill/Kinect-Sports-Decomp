// stdext::exception and stdext::bad_alloc, as in Visual C++ 2010's <exception>
// built without exception handling (_HAS_EXCEPTIONS=0), which the game used.
// The library's containers raise bad_alloc with `stdext::bad_alloc(0)._Raise()`
// when an allocation fails. _Raise is declared noreturn because the game's code
// never destroys the exception object after calling it.
#ifndef STDEXT_EXCEPTION_H
#define STDEXT_EXCEPTION_H
namespace stdext {
class exception {
public:
    explicit exception(const char *message = "unknown", int = 1) : _Ptr(message) {}
    virtual ~exception() {}
    virtual const char *what() const { return _Ptr != 0 ? _Ptr : "unknown exception"; }
    __declspec(noreturn) void _Raise() const;
protected:
    virtual void _Doraise() const {}
    const char *_Ptr;
};
class bad_alloc : public exception {
public:
    bad_alloc(const char *message = "bad allocation") : exception(message) {}
    virtual ~bad_alloc() {}
protected:
    virtual void _Doraise() const;
};
}
#endif
