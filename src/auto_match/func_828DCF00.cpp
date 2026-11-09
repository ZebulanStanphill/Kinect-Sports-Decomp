#include <sstream>
extern "C" void fn_8223CD08(std::ios *self, std::streambuf *sb, bool isstd);
// Out-of-line library members the original calls under their fn_ names: forwarding specialisation.
template<> __forceinline void std::basic_ios<char, std::char_traits<char> >::init(std::basic_streambuf<char, std::char_traits<char> > *sb, bool isstd)
{
    fn_8223CD08(this, sb, isstd);
}
extern "C" std::ostream &fn_82240158(std::ostream &os, const char *s);
extern "C" std::ostream &fn_82520AC8(std::ostream &os, unsigned int v);
extern "C" std::string fn_822403C8(std::stringbuf *sb);
struct Packet_828DCF00 { char data[0x34]; };
struct Msg_828DCF00 { char pad[0x80]; unsigned int slot; unsigned int channelId; Packet_828DCF00 *first; Packet_828DCF00 *last; };
extern "C" std::string fn_828DCF00(Msg_828DCF00 *m)
{
    std::ostringstream os;
    unsigned int count = m->last - m->first;
    unsigned int channelId = m->channelId;
    unsigned int slot = m->slot;
    fn_82520AC8(fn_82240158(fn_82520AC8(fn_82240158(fn_82520AC8(fn_82240158(os, "VoiceMsg_c - slot="), slot), ", channelId="), channelId), ", num packets="), count);
    return fn_822403C8(os.rdbuf());
}
