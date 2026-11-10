extern unsigned int fn_82A1E1A0(const unsigned short *s);
extern unsigned short *fn_82522D98(unsigned int bytes);
extern void fn_82F64988(unsigned short *dest, unsigned int count, const unsigned short *src);
void fn_82528F60(unsigned short **dest, const unsigned short *src) {
 unsigned int count = fn_82A1E1A0(src);
 *dest = fn_82522D98((count + 1) * 2);
 fn_82F64988(*dest, count + 1, src);
}
