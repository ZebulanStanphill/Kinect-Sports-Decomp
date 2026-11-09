typedef int (*Downsample)(unsigned int *dst, unsigned int src, int width, int height, int srcPitch, int dstPitch);
extern int fn_82920870(unsigned int *dst, unsigned int src, int width, int height, int srcPitch, int dstPitch);
extern int fn_82920968(unsigned int *dst, unsigned int src, int width, int height, int srcPitch, int dstPitch);
extern Downsample lbl_8315AA30;
extern Downsample lbl_8315AA34;

void fn_82920A48(unsigned int *dst, unsigned int src, int width, int height, int srcPitch, int dstPitch)
{
    lbl_8315AA30 = fn_82920870;
    lbl_8315AA34 = fn_82920968;
    fn_82920870(dst, src, width, height, srcPitch, dstPitch);
}
