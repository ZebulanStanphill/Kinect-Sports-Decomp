// std::_Allocate<T>(count, (T *)0) for a 0x30-byte element type (unknown).
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

struct Elem_8284A458 {
    int words[12];
};

extern "C" Elem_8284A458 *fn_8284A458(unsigned int count, Elem_8284A458 *)
{
    void *ptr = 0;
    if (count <= 0) {
        count = 0;
    } else if ((unsigned int)-1 / sizeof(Elem_8284A458) < count
               || (ptr = fn_8265C9E0(count * sizeof(Elem_8284A458))) == 0) {
        stdext::bad_alloc(0)._Raise();
    }
    return (Elem_8284A458 *)ptr;
}
