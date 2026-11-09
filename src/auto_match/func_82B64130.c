typedef int (*Downsample)(unsigned int *dst, unsigned int src, int width, int height, int srcPitch, int dstPitch);
extern int fn_82920870(unsigned int *dst, unsigned int src, int width, int height, int srcPitch, int dstPitch);
extern int fn_82920968(unsigned int *dst, unsigned int src, int width, int height, int srcPitch, int dstPitch);
extern Downsample lbl_83161014;
extern Downsample lbl_83161018;

void fn_82B64130(unsigned int *dst, unsigned int src, int width, int height, int srcPitch, int dstPitch)
{
    lbl_83161014 = fn_82920870;
    lbl_83161018 = fn_82920968;
    fn_82920968(dst, src, width, height, srcPitch, dstPitch);
}
