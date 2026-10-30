// R1::Soundscape::ListenerBiasContext_c default constructor: vtable, then the value from
// fn_82869448 at +4.
extern "C" int fn_82869448();

namespace R1 {
    namespace Soundscape {
        class ListenerBiasContext_c {
        public:
            ListenerBiasContext_c();
            virtual ~ListenerBiasContext_c();

            int m_4;
        };

        ListenerBiasContext_c::ListenerBiasContext_c()
            : m_4(fn_82869448())
        {
        }
    }
}
