// std::tr1::_Ref_count_base::~_Ref_count_base(): stores _Ref_count_base's vtable.
// The class is declared from its vtable's name; its scalar deleting destructor is in the vtable,
// so the destructor is virtual.

namespace std {
    namespace tr1 {
        class _Ref_count_base {
        public:
            virtual ~_Ref_count_base();
        };
    }
}

std::tr1::_Ref_count_base::~_Ref_count_base()
{
}
