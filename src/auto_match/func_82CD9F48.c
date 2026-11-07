extern unsigned int fn_82A1F248(unsigned char *p);
extern void fn_82CAEDF0(unsigned char *dst, unsigned char *src, int n);
extern void fn_82CAF0C0(unsigned char *dst, unsigned char *src, int n);

void fn_82CD9F48(unsigned char *dst, unsigned char *src, int rows, int width, int srcPitch, int dstPitch)
{
    unsigned int f;
    int i;
    int n = width < dstPitch ? width : dstPitch;
    f = fn_82A1F248(dst);
    if ((~f & 0x400) != 0 && (~f & 0x200) != 0) {
        for (i = 0; i < rows; i++) {
            fn_82CAEDF0(dst, src, n);
            dst += dstPitch;
            src += srcPitch;
        }
    } else {
        for (i = 0; i < rows; i++) {
            fn_82CAF0C0(dst, src, n);
            dst += dstPitch;
            src += srcPitch;
        }
    }
}
