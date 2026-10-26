// stdext::exception::~exception(): stores exception's vtable.
// The class is declared from its vtable's name; its scalar deleting destructor is in the vtable,
// so the destructor is virtual.

namespace stdext {
    class exception {
    public:
        virtual ~exception();
    };
}

stdext::exception::~exception()
{
}
