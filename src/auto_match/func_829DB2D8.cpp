class Descriptor_829DB2D8
{
    unsigned int values[16]; /* 0x00 */

  public:
    Descriptor_829DB2D8();
    ~Descriptor_829DB2D8();
    void SetValues(unsigned int first, unsigned int second, unsigned int third, unsigned int fourth);
    void SetEnabled(int enabled);
};

extern "C" unsigned int lbl_83217B08[0x17];
extern "C" int fn_829E47A8(unsigned int context, unsigned int first, unsigned int second, unsigned int third,
                           unsigned int fourth, Descriptor_829DB2D8 *descriptor, float scale,
                           unsigned int flags, unsigned __int64 reserved, unsigned int mode,
                           unsigned int value);

extern "C" int fn_829DB2D8(unsigned int first, unsigned int second, unsigned int third, unsigned int fourth,
                           const unsigned int *values, float scale, unsigned int value, unsigned char enabled)
{
    unsigned int flags = lbl_83217B08[13];
    Descriptor_829DB2D8 descriptor;
    int result;
    descriptor.SetValues(values[0], values[1], values[2], values[3]);
    if (enabled) {
        descriptor.SetEnabled(0);
    } else {
        descriptor.SetEnabled(1);
    }
    result =
        fn_829E47A8(lbl_83217B08[11], first, second, third, fourth, &descriptor, scale, flags, 0, 0, value);
    if (result < 0) {
        return result;
    }
    return result;
}
