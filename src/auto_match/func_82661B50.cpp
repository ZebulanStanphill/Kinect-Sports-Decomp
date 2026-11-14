// std::_Allocate<T>(count, (T *)0) for a 0x18-byte element type (unknown).
namespace stdext {
class exception {
public:
    virtual ~exception();
    void _Raise() const;
protected:
    const char *_Ptr;
};
class bad_alloc : public exception {
public:
    bad_alloc(const char *message);
    virtual ~bad_alloc();
};
}

extern "C" void *fn_8265C9E0(unsigned int size);

struct Elem_82661B50 {
    int words[6];
};

extern "C" Elem_82661B50 *fn_82661B50(unsigned int count, Elem_82661B50 *)
{
    void *ptr = 0;
    if (count <= 0) {
        count = 0;
    } else if ((unsigned int)-1 / sizeof(Elem_82661B50) < count
               || (ptr = fn_8265C9E0(count * sizeof(Elem_82661B50))) == 0) {
        stdext::bad_alloc(0)._Raise();
    }
    return (Elem_82661B50 *)ptr;
}
