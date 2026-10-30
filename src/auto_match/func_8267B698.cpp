// Class_8267B698 scalar deleting destructor: GSysAlloc base and GSysAlloc member at +4
extern "C" {
void fn_826EA050(void *self);
void fn_8265CA20(void *p);
}

class GSysAlloc {
public:
    virtual __forceinline ~GSysAlloc() {}
};

class Member_8267B698 {
public:
    __forceinline ~Member_8267B698() { fn_826EA050(this); }
    char pad;
};

class __declspec(novtable) Class_8267B698 : public GSysAlloc {
public:
    virtual __forceinline ~Class_8267B698() {}
    GSysAlloc sub;
    char pad[0x2bc - 0x0];
    Member_8267B698 m;
};

extern "C" Class_8267B698 *fn_8267B698(Class_8267B698 *self, unsigned int flags)
{
    self->Class_8267B698::~Class_8267B698();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
