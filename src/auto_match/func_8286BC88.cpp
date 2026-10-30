// R1::Soundscape::WwiseEventContext_c constructor taking the id stored at +4.
namespace R1 {
    namespace Soundscape {
        class WwiseEventContext_c {
        public:
            WwiseEventContext_c(unsigned int id);
            virtual ~WwiseEventContext_c();

            unsigned int m_4;
        };

        WwiseEventContext_c::WwiseEventContext_c(unsigned int id)
            : m_4(id)
        {
        }
    }
}
