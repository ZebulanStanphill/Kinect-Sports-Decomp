// boost::any::holder<ReplanAIStateForCrossingParams>::clone() (boost/any.hpp): returns a new
// holder with a copy of the held value. The holder's vtable is lbl_821B7B10 {destructor, type,
// clone}. Only ReplanAIStateForCrossingParams's size is known (from the copy), so its members are
// placeholders.
namespace olympus {
    namespace sport {
        namespace football {
            struct __declspec(align(16)) ReplanAIStateForCrossingParams {
            public:
                unsigned char data[0x90];
            };
        }
    }
}

typedef olympus::sport::football::ReplanAIStateForCrossingParams Value;

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
