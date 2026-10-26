// GSysAlloc::~GSysAlloc(): stores GSysAlloc's vtable.
// The class is declared from its vtable's name; its scalar deleting destructor is in the vtable,
// so the destructor is virtual.

class GSysAlloc {
public:
    virtual ~GSysAlloc();
};

GSysAlloc::~GSysAlloc()
{
}
