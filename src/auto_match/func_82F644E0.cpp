extern "C" {
void fn_82F645F0(void *self);
void fn_8265CA20(void *p);
}


class type_info {
public:
    virtual __forceinline ~type_info() { fn_82F645F0(this); }
};


extern "C" type_info *fn_82F644E0(type_info *self, unsigned int flags)
{
    self->type_info::~type_info();
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
