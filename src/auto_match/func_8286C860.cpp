// R1::Soundscape::ListenerBiasContext_c constructor (listener, value): stores the value, then
// registers it with the listener through fn_8286C730 unless the listener is -1.
extern "C" void fn_8286C730(void *self, int listener);

namespace R1 {
    namespace Soundscape {
        class ListenerBiasContext_c {
        public:
            ListenerBiasContext_c(int listener, int value);
            virtual ~ListenerBiasContext_c();

            int m_4;
        };

        ListenerBiasContext_c::ListenerBiasContext_c(int listener, int value)
            : m_4(value)
        {
            if (listener != -1) {
                m_4 = value;
                fn_8286C730(this, listener);
            }
        }
    }
}
