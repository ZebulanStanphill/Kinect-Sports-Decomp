// std::_Allocate<T>(count, (T *)0) for a 0x20-byte element type (unknown).
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

struct Elem_82661BE0 {
    int words[8];
};

extern "C" Elem_82661BE0 *fn_82661BE0(unsigned int count, Elem_82661BE0 *)
{
    void *ptr = 0;
    if (count <= 0) {
        count = 0;
    } else if ((unsigned int)-1 / sizeof(Elem_82661BE0) < count
               || (ptr = fn_8265C9E0(count * sizeof(Elem_82661BE0))) == 0) {
        stdext::bad_alloc(0)._Raise();
    }
    return (Elem_82661BE0 *)ptr;
}
