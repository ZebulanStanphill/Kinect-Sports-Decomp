// std::tr1::_Ref_count_base scalar deleting destructor ??_G_Ref_count_base@tr1@std@@UAAPAXI@Z
// (frees through the global operator delete, fn_8265CA20). The function at the end only makes the
// compiler emit the vtable, and with it this function.
extern "C" void fn_8265CA20(void *p);   // global operator delete

namespace std {
    namespace tr1 {
        class _Ref_count_base {
        public:
            static void operator delete(void *p) { fn_8265CA20(p); }
            virtual ~_Ref_count_base() {}
        };
    }
}

void emitVtable_8288C110(std::tr1::_Ref_count_base *p) { p->std::tr1::_Ref_count_base::~_Ref_count_base(); }
