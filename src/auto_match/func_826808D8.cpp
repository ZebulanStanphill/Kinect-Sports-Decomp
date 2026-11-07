extern "C" void fn_8267BE38(void *p);
extern "C" void fn_8267C488(void *p);

struct GImage {
    virtual __forceinline ~GImage()
    {
        if (m18 != 0) {
            fn_8267BE38(m18);
        }
        fn_8267BE38(m24);
        fn_8267C488(this);
    }
    int pad04[5];
    void *m18;
    int pad1C[2];
    void *m24;
};

extern "C" void fn_826808D8(GImage *param_1)
{
    param_1->GImage::~GImage();
}
