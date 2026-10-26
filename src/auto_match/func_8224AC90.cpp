// boost::any::holder<_XAVATAR_METADATA>::clone() (boost/any.hpp): returns a new holder with a copy
// of the held value. The holder's vtable is lbl_82197ACC {destructor, type, clone}. Only
// _XAVATAR_METADATA's size is known (from the copy), so its members are placeholders.
struct _XAVATAR_METADATA {
public:
    unsigned char data[0x3E8];
};

typedef _XAVATAR_METADATA Value;

extern "C" void *fn_8265C9E0(unsigned int size);  // operator new

// boost::any, declared as far as this function needs.
namespace boost {
class any {
public:
    class placeholder {
    public:
        virtual ~placeholder() {}
        virtual const type_info &type() const = 0;
        virtual placeholder *clone() const = 0;
    };

    template <typename ValueType>
    class holder : public placeholder {
    public:
        holder(const ValueType &value) : held(value) {}
        virtual const type_info &type() const;
        virtual placeholder *clone() const;

        ValueType held;
    };
};
}

// The game's global operator new is fn_8265C9E0.
inline void *operator new(unsigned int size) { return fn_8265C9E0(size); }

template <>
boost::any::placeholder *boost::any::holder<Value>::clone() const
{
    return new holder(held);
}
