// boost::any::holder<shared_ptr<NetworkSpectatorAthleticsHumanFrame>>::type() (boost/any.hpp):
// returns typeid of the held value type. The vtable {destructor, type, clone} and clone() are the
// holder's.
#include <memory>

namespace olympus {
    namespace sport {
        namespace athletics {
            class NetworkSpectatorAthleticsHumanFrame {};
        }
    }
}

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
        virtual const type_info &type() const;
        virtual placeholder *clone() const;

        ValueType held;
    };
};
}

typedef std::tr1::shared_ptr<olympus::sport::athletics::NetworkSpectatorAthleticsHumanFrame> Value;

template <>
const type_info &boost::any::holder<Value>::type() const
{
    return typeid(Value);
}
